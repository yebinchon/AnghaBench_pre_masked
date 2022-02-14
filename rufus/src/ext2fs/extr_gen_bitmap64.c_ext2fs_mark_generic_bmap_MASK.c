
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef int __u64 ;
struct TYPE_8__ {int last_marked; int mark_count; int mark_back; int mark_seq; } ;
struct TYPE_10__ {int cluster_bits; int start; int end; TYPE_2__* bitmap_ops; TYPE_1__ stats; } ;
struct TYPE_9__ {int (* mark_bmap ) (TYPE_3__*,int) ;} ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;

int FUNC_6(ext2fs_generic_bitmap VAR_1,
        __u64 VAR_2)
{
 ext2fs_generic_bitmap_64 VAR_3 = (ext2fs_generic_bitmap_64) VAR_1;

 if (!VAR_3)
  return 0;

 if (FUNC_0(VAR_3)) {
  if (VAR_2 & ~0xffffffffULL) {
   FUNC_3(VAR_1,
         VAR_0, 0xffffffff);
   return 0;
  }
  return FUNC_2(VAR_1, VAR_2);
 }

 if (!FUNC_1(VAR_3))
  return 0;

 VAR_2 >>= VAR_3->cluster_bits;
 if ((VAR_2 < VAR_3->start) || (VAR_2 > VAR_3->end)) {
  FUNC_5(VAR_3, VAR_0, VAR_2);
  return 0;
 }

 return VAR_3->bitmap_ops->mark_bmap(VAR_3, VAR_2);
}
