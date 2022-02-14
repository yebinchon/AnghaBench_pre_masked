
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
struct TYPE_7__ {int (* test_clear_bmap_extent ) (TYPE_2__*,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,unsigned int,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_2__*,unsigned int,unsigned int) ;
 int VAR_3 ;

int FUNC_8(ext2fs_block_bitmap VAR_4,
        blk64_t VAR_5, unsigned int VAR_6)
{
 ext2fs_generic_bitmap_64 VAR_7 = (ext2fs_generic_bitmap_64) VAR_4;
 __u64 VAR_8 = VAR_5 + VAR_6;

 if (!VAR_7)
  return VAR_0;

 if (VAR_6 == 1)
  return !FUNC_4((ext2fs_generic_bitmap)
       VAR_7, VAR_5);

 if (FUNC_0(VAR_7)) {
  if ((VAR_5 & ~0xffffffffULL) ||
      ((VAR_5+VAR_6-1) & ~0xffffffffULL)) {
   FUNC_6((ext2fs_generic_bitmap) VAR_7,
         VAR_1, 0xffffffff);
   return VAR_0;
  }
  return FUNC_3(
   (ext2fs_generic_bitmap) VAR_7, VAR_5, VAR_6);
 }

 if (!FUNC_1(VAR_7))
  return VAR_0;

 FUNC_2(VAR_7, VAR_3);


 VAR_5 >>= VAR_7->cluster_bits;
 VAR_8 += (1 << VAR_7->cluster_bits) - 1;
 VAR_8 >>= VAR_7->cluster_bits;
 VAR_6 = VAR_8 - VAR_5;

 if ((VAR_5 < VAR_7->start) || (VAR_5 > VAR_7->end) ||
     (VAR_5+VAR_6-1 > VAR_7->end)) {
  FUNC_5(VAR_2, VAR_5,
       VAR_7->description);
  return VAR_0;
 }

 return VAR_7->bitmap_ops->test_clear_bmap_extent(VAR_7, VAR_5, VAR_6);
}
