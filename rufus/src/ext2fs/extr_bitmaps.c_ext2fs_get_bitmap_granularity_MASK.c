
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ext2fs_generic_bitmap_64 ;
typedef int ext2fs_block_bitmap ;
struct TYPE_3__ {int cluster_bits; } ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(ext2fs_block_bitmap VAR_0)
{
 ext2fs_generic_bitmap_64 VAR_1 = (ext2fs_generic_bitmap_64) VAR_0;

 if (!FUNC_0(VAR_1))
  return 0;

 return VAR_1->cluster_bits;
}
