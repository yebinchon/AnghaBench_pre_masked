
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int ext2fs_block_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ errcode_t ;
typedef int dgrp_t ;
typedef int blk64_t ;
struct TYPE_22__ {int s_log_groups_per_flex; } ;
struct TYPE_21__ {int group_desc_count; int stride; int inode_blocks_per_group; TYPE_7__* super; int block_map; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_7__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int,int,int ,int*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 scalar_t__ FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (TYPE_1__*,int,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ,int,int) ;
 int FUNC_19 (TYPE_1__*,int,int,int ,int,int) ;

errcode_t FUNC_20(ext2_filsys VAR_2, dgrp_t VAR_3,
          ext2fs_block_bitmap VAR_4)
{
 errcode_t VAR_5;
 blk64_t VAR_6, VAR_7, VAR_8, VAR_9;
 dgrp_t VAR_10 = 0;
 int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 VAR_6 = FUNC_9(VAR_2, VAR_3);
 VAR_8 = FUNC_10(VAR_2, VAR_3);

 if (!VAR_4)
  VAR_4 = VAR_2->block_map;

 if (FUNC_12(VAR_2->super) &&
     VAR_2->super->s_log_groups_per_flex) {
  VAR_12 = 1 << VAR_2->super->s_log_groups_per_flex;
  VAR_10 = VAR_3 | (VAR_12 - 1);
  if (VAR_10 > VAR_2->group_desc_count-1)
   VAR_10 = VAR_2->group_desc_count-1;
  VAR_11 = VAR_10 - VAR_3 + 1;
 }




 if (VAR_2->stride && !VAR_12) {
  VAR_5 = FUNC_7(VAR_2, VAR_6, VAR_8,
       1, VAR_4, &VAR_7);
  if (VAR_5)
   return VAR_5;
  VAR_7 += VAR_2->inode_blocks_per_group;
  VAR_7 += ((VAR_2->stride * VAR_3) %
         (VAR_8 - VAR_7 + 1));
  if (VAR_7 >= VAR_8)
   VAR_7 = VAR_6;
 } else
  VAR_7 = VAR_6;

 if (VAR_12) {
  blk64_t VAR_14 = 0;

  VAR_13 = VAR_12;
  if (VAR_3 % VAR_12)
   VAR_14 = FUNC_4(VAR_2, VAR_3 - 1) + 1;
  else if (VAR_10 == VAR_2->group_desc_count-1) {




   VAR_13 = VAR_10 & (VAR_12 - 1);
   if (VAR_13 == 0)
    VAR_13 = VAR_12;
   else
    VAR_13++;
  }


  VAR_7 = FUNC_19(VAR_2, VAR_3, VAR_14, VAR_4,
       VAR_11, 1);
  VAR_8 = FUNC_10(VAR_2, VAR_10);
 }

 if (!FUNC_4(VAR_2, VAR_3)) {
  VAR_5 = FUNC_7(VAR_2, VAR_7, VAR_8,
       1, VAR_4, &VAR_9);
  if (VAR_5 == VAR_1)
   VAR_5 = FUNC_7(VAR_2, VAR_6,
     VAR_8, 1, VAR_4, &VAR_9);
  if (VAR_5)
   return VAR_5;
  FUNC_17(VAR_4, VAR_9);
  FUNC_5(VAR_2, VAR_3, VAR_9);
  if (VAR_12) {
   dgrp_t VAR_15 = FUNC_11(VAR_2, VAR_9);
   FUNC_3(VAR_2, VAR_15, FUNC_2(VAR_2, VAR_15) - 1);
   FUNC_6(VAR_2->super, -1);
   FUNC_1(VAR_2, VAR_15, VAR_0);
   FUNC_8(VAR_2, VAR_15);
  }
 }

 if (VAR_12) {
  blk64_t VAR_16 = 0;
  if (VAR_3 % VAR_12)
   VAR_16 = FUNC_13(VAR_2, VAR_3 - 1) + 1;
  else
   VAR_16 = FUNC_4(VAR_2, VAR_3) +
    VAR_13;


  VAR_7 = FUNC_19(VAR_2, VAR_3, VAR_16, VAR_4,
       VAR_11, 1);
  VAR_8 = FUNC_10(VAR_2, VAR_10);
 }

 if (!FUNC_13(VAR_2, VAR_3)) {
  VAR_5 = FUNC_7(VAR_2, VAR_7, VAR_8,
       1, VAR_4, &VAR_9);
  if (VAR_5 == VAR_1)
   VAR_5 = FUNC_7(VAR_2, VAR_6,
      VAR_8, 1, VAR_4, &VAR_9);
  if (VAR_5)
   return VAR_5;
  FUNC_17(VAR_4, VAR_9);
  FUNC_14(VAR_2, VAR_3, VAR_9);
  if (VAR_12) {
   dgrp_t VAR_17 = FUNC_11(VAR_2, VAR_9);
   FUNC_3(VAR_2, VAR_17, FUNC_2(VAR_2, VAR_17) - 1);
   FUNC_6(VAR_2->super, -1);
   FUNC_1(VAR_2, VAR_17, VAR_0);
   FUNC_8(VAR_2, VAR_17);
  }
 }




 if (VAR_12) {
  blk64_t VAR_18 = 0;

  if (VAR_3 % VAR_12)
   VAR_18 = FUNC_15(VAR_2, VAR_3 - 1) +
    VAR_2->inode_blocks_per_group;
  else
   VAR_18 = FUNC_13(VAR_2, VAR_3) +
    VAR_13;



  VAR_6 = FUNC_19(VAR_2, VAR_3, VAR_18, VAR_4,
       VAR_11, VAR_2->inode_blocks_per_group);
  VAR_8 = FUNC_10(VAR_2, VAR_10);
 }

 if (!FUNC_15(VAR_2, VAR_3)) {
  VAR_5 = FUNC_7(VAR_2, VAR_6, VAR_8,
      VAR_2->inode_blocks_per_group,
      VAR_4, &VAR_9);
  if (VAR_5)
   return VAR_5;

  FUNC_18(VAR_4,
   VAR_9, VAR_2->inode_blocks_per_group);
  if (VAR_12) {
   blk64_t VAR_19, VAR_20;
   VAR_19 = VAR_2->inode_blocks_per_group;
   VAR_20 = VAR_9;
   while (VAR_19) {
    int VAR_21 = FUNC_11(VAR_2, VAR_20);
    VAR_8 = FUNC_10(VAR_2, VAR_21);
    blk64_t VAR_22 = VAR_19;

    if (VAR_20 + VAR_19 > VAR_8)
     VAR_22 = VAR_8 - VAR_20 + 1;

    FUNC_3(VAR_2, VAR_21,
     FUNC_2(VAR_2, VAR_21) -
     VAR_22/FUNC_0(VAR_2));
    FUNC_1(VAR_2, VAR_21,
     VAR_0);
    FUNC_8(VAR_2, VAR_21);
    FUNC_6(VAR_2->super, -VAR_22);
    VAR_20 += VAR_22;
    VAR_19 -= VAR_22;
   }
  }
  FUNC_16(VAR_2, VAR_3, VAR_9);
 }
 FUNC_8(VAR_2, VAR_3);
 return 0;
}
