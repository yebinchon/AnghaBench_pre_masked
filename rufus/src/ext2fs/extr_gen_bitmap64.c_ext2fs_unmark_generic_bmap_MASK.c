
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef int __u64 ;
struct TYPE_9__ {int cluster_bits; int start; int end; TYPE_1__* bitmap_ops; } ;
struct TYPE_8__ {int (* unmark_bmap ) (TYPE_2__*,int) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

int FUNC_7(ext2fs_generic_bitmap VAR_2,
          __u64 VAR_3)
{
 ext2fs_generic_bitmap_64 VAR_4 = (ext2fs_generic_bitmap_64) VAR_2;

 if (!VAR_4)
  return 0;

 if (FUNC_0(VAR_4)) {
  if (VAR_3 & ~0xffffffffULL) {
   FUNC_4(VAR_2, VAR_0,
         0xffffffff);
   return 0;
  }
  return FUNC_3(VAR_2, VAR_3);
 }

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_3 >>= VAR_4->cluster_bits;

 FUNC_2(VAR_4, VAR_1);

 if ((VAR_3 < VAR_4->start) || (VAR_3 > VAR_4->end)) {
  FUNC_6(VAR_4, VAR_0, VAR_3);
  return 0;
 }

 return VAR_4->bitmap_ops->unmark_bmap(VAR_4, VAR_3);
}
