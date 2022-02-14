
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ext2fs_block_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ dgrp_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_8__ {scalar_t__ group_desc_count; int inode_blocks_per_group; int block_map; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static errcode_t FUNC_7(ext2_filsys VAR_1)
{
 dgrp_t VAR_2;
 blk64_t VAR_3;
 ext2fs_block_bitmap VAR_4 = VAR_1->block_map;

 for (VAR_2 = 0; VAR_2 < VAR_1->group_desc_count; VAR_2++) {
  if (!FUNC_0(VAR_1, VAR_2, VAR_0))
   continue;

  FUNC_6(VAR_1, VAR_2, VAR_4);




  VAR_3 = FUNC_3(VAR_1, VAR_2);
  if (VAR_3)
   FUNC_5(VAR_4, VAR_3,
      VAR_1->inode_blocks_per_group);




  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   FUNC_4(VAR_4, VAR_3);




  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   FUNC_4(VAR_4, VAR_3);
 }
 return 0;
}
