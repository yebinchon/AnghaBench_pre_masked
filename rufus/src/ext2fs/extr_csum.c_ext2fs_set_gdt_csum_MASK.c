
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct ext2_super_block {scalar_t__ s_blocks_per_group; scalar_t__ s_inodes_per_group; } ;
typedef TYPE_1__* ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ dgrp_t ;
typedef scalar_t__ __u32 ;
struct TYPE_14__ {scalar_t__ group_desc_count; int inode_map; struct ext2_super_block* super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,int,scalar_t__) ;

errcode_t FUNC_12(ext2_filsys VAR_3)
{
 struct ext2_super_block *VAR_4 = VAR_3->super;
 int VAR_5 = 0;
 dgrp_t VAR_6;

 if (!VAR_3->inode_map)
  return VAR_2;

 if (!FUNC_9(VAR_3))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_3->group_desc_count; VAR_6++) {
  __u32 VAR_7 = FUNC_0(VAR_3, VAR_6);
  __u32 VAR_8 = FUNC_6(VAR_3, VAR_6);
  __u32 VAR_9 = FUNC_1(VAR_3, VAR_6);
  __u32 VAR_10 = FUNC_5(VAR_3, VAR_6);
  __u32 VAR_11 = FUNC_4(VAR_3, VAR_6);

  if (VAR_11 == VAR_4->s_blocks_per_group &&
      VAR_6 != VAR_3->group_desc_count - 1)
   FUNC_3(VAR_3, VAR_6, VAR_0);

  if (VAR_10 == VAR_4->s_inodes_per_group) {
   FUNC_3(VAR_3, VAR_6, VAR_1);
   FUNC_7(VAR_3, VAR_6, VAR_4->s_inodes_per_group);
  } else {
   int VAR_12 =
    VAR_4->s_inodes_per_group -
    FUNC_11(VAR_3->inode_map,
            VAR_4->s_inodes_per_group, VAR_6);

   FUNC_2(VAR_3, VAR_6, VAR_1);
   FUNC_7(VAR_3, VAR_6, VAR_12);
  }

  FUNC_8(VAR_3, VAR_6);
  if (VAR_9 != FUNC_1(VAR_3, VAR_6))
   VAR_5 = 1;
  if (VAR_8 != FUNC_6(VAR_3, VAR_6))
   VAR_5 = 1;
  if (VAR_7 != FUNC_0(VAR_3, VAR_6))
   VAR_5 = 1;
 }
 if (VAR_5)
  FUNC_10(VAR_3);
 return 0;
}
