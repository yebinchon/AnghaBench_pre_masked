
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_generic_bitmap ;
typedef int ext2fs_block_bitmap ;
typedef unsigned int blk64_t ;
typedef int __u64 ;
struct TYPE_8__ {unsigned int cluster_bits; unsigned int start; unsigned int end; TYPE_1__* bitmap_ops; int description; } ;
struct TYPE_7__ {int (* unmark_bmap_extent ) (TYPE_2__*,unsigned int,unsigned int) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,unsigned int,unsigned int) ;
 int VAR_2 ;

void FUNC_7(ext2fs_block_bitmap VAR_3,
           blk64_t VAR_4, unsigned int VAR_5)
{
 ext2fs_generic_bitmap_64 VAR_6 = (ext2fs_generic_bitmap_64) VAR_3;
 __u64 VAR_7 = VAR_4 + VAR_5;

 if (!VAR_6)
  return;

 if (FUNC_0(VAR_6)) {
  if ((VAR_4 & ~0xffffffffULL) ||
      ((VAR_4+VAR_5-1) & ~0xffffffffULL)) {
   FUNC_5((ext2fs_generic_bitmap) VAR_6,
         VAR_0, 0xffffffff);
   return;
  }
  FUNC_3((ext2fs_generic_bitmap) VAR_6,
       VAR_4, VAR_5);
 }

 if (!FUNC_1(VAR_6))
  return;

 FUNC_2(VAR_6, VAR_2);


 VAR_4 >>= VAR_6->cluster_bits;
 VAR_7 += (1 << VAR_6->cluster_bits) - 1;
 VAR_7 >>= VAR_6->cluster_bits;
 VAR_5 = VAR_7 - VAR_4;

 if ((VAR_4 < VAR_6->start) || (VAR_4 > VAR_6->end) ||
     (VAR_4+VAR_5-1 > VAR_6->end)) {
  FUNC_4(VAR_1, VAR_4,
       VAR_6->description);
  return;
 }

 VAR_6->bitmap_ops->unmark_bmap_extent(VAR_6, VAR_4, VAR_5);
}
