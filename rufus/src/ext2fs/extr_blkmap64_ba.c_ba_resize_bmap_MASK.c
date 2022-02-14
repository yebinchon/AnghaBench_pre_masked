
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef TYPE_2__* ext2fs_ba_private ;
typedef scalar_t__ errcode_t ;
typedef scalar_t__ __u64 ;
struct TYPE_5__ {scalar_t__ bitarray; } ;
struct TYPE_4__ {scalar_t__ end; scalar_t__ real_end; scalar_t__ start; int private; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (size_t,size_t,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int ,size_t) ;

__attribute__((used)) static errcode_t FUNC_3(ext2fs_generic_bitmap_64 VAR_0,
    __u64 VAR_1, __u64 VAR_2)
{
 ext2fs_ba_private VAR_3 = (ext2fs_ba_private) VAR_0->private;
 errcode_t VAR_4;
 size_t VAR_5, VAR_6;
 __u64 VAR_7;





 if (VAR_1 > VAR_0->end) {
  VAR_7 = VAR_0->real_end;
  if (VAR_7 > VAR_1)
   VAR_7 = VAR_1;
  for (; VAR_7 > VAR_0->end; VAR_7--)
   FUNC_0(VAR_7 - VAR_0->start, VAR_3->bitarray);
 }
 if (VAR_2 == VAR_0->real_end) {
  VAR_0->end = VAR_1;
  return 0;
 }

 VAR_5 = ((VAR_0->real_end - VAR_0->start) / 8) + 1;
 VAR_6 = ((VAR_2 - VAR_0->start) / 8) + 1;

 if (VAR_5 != VAR_6) {
  VAR_4 = FUNC_1(VAR_5, VAR_6, &VAR_3->bitarray);
  if (VAR_4)
   return VAR_4;
 }
 if (VAR_6 > VAR_5)
  FUNC_2(VAR_3->bitarray + VAR_5, 0, VAR_6 - VAR_5);

 VAR_0->end = VAR_1;
 VAR_0->real_end = VAR_2;
 return 0;

}
