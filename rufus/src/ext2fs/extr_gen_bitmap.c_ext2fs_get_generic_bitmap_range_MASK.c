
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_32 ;
typedef int ext2fs_generic_bitmap ;
typedef scalar_t__ errcode_t ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ magic; int start; int real_end; scalar_t__ bitmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,scalar_t__,int) ;

errcode_t FUNC_1(ext2fs_generic_bitmap VAR_1,
       errcode_t VAR_2,
       __u32 VAR_3, __u32 VAR_4,
       void *VAR_5)
{
 ext2fs_generic_bitmap_32 VAR_6 = (ext2fs_generic_bitmap_32) VAR_1;

 if (!VAR_6 || (VAR_6->magic != VAR_2))
  return VAR_2;

 if ((VAR_3 < VAR_6->start) || (VAR_3+VAR_4-1 > VAR_6->real_end))
  return VAR_0;

 FUNC_0(VAR_5, VAR_6->bitmap + (VAR_3 >> 3), (VAR_4+7) >> 3);
 return 0;
}
