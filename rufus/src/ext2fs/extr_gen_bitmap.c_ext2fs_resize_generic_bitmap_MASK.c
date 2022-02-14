
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {scalar_t__ magic; scalar_t__ end; scalar_t__ real_end; scalar_t__ start; scalar_t__ bitmap; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (size_t,size_t,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int ,size_t) ;

errcode_t FUNC_3(errcode_t VAR_0,
           __u32 VAR_1, __u32 VAR_2,
           ext2fs_generic_bitmap VAR_3)
{
 ext2fs_generic_bitmap_32 VAR_4 = (ext2fs_generic_bitmap_32) VAR_3;
 errcode_t VAR_5;
 size_t VAR_6, VAR_7;
 __u32 VAR_8;

 if (!VAR_4 || (VAR_4->magic != VAR_0))
  return VAR_0;





 if (VAR_1 > VAR_4->end) {
  VAR_8 = VAR_4->real_end;
  if (VAR_8 > VAR_1)
   VAR_8 = VAR_1;
  for (; VAR_8 > VAR_4->end; VAR_8--)
   FUNC_0(VAR_8 - VAR_4->start, VAR_4->bitmap);
 }
 if (VAR_2 == VAR_4->real_end) {
  VAR_4->end = VAR_1;
  return 0;
 }

 VAR_6 = ((VAR_4->real_end - VAR_4->start) / 8) + 1;
 VAR_7 = ((VAR_2 - VAR_4->start) / 8) + 1;

 if (VAR_6 != VAR_7) {
  VAR_5 = FUNC_1(VAR_6, VAR_7, &VAR_4->bitmap);
  if (VAR_5)
   return VAR_5;
 }
 if (VAR_7 > VAR_6)
  FUNC_2(VAR_4->bitmap + VAR_6, 0, VAR_7 - VAR_6);

 VAR_4->end = VAR_1;
 VAR_4->real_end = VAR_2;
 return 0;
}
