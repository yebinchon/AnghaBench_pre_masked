
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ext2fs_extent {scalar_t__ e_lblk; scalar_t__ e_pblk; } ;
struct ext2_inode {int i_flags; scalar_t__* i_block; } ;
typedef int ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
typedef int * ext2_extent_handle_t ;
typedef int errcode_t ;
typedef int dgrp_t ;
typedef scalar_t__ blk64_t ;
typedef int __u8 ;
struct TYPE_8__ {TYPE_1__* super; } ;
struct TYPE_7__ {int s_log_groups_per_flex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct ext2fs_extent*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,struct ext2_inode*,int **) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (struct ext2_inode*) ;

blk64_t FUNC_7(ext2_filsys VAR_3, ext2_ino_t VAR_4,
          struct ext2_inode *VAR_5, blk64_t VAR_6)
{
 dgrp_t VAR_7;
 __u8 VAR_8;
 struct ext2fs_extent VAR_9;
 ext2_extent_handle_t VAR_10 = ((void*)0);
 errcode_t VAR_11;




 if (VAR_5 == ((void*)0) || FUNC_6(VAR_5) ||
     VAR_5->i_flags & VAR_2)
  goto no_blocks;

 if (VAR_5->i_flags & VAR_1) {
  VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_10);
  if (VAR_11)
   goto no_blocks;
  VAR_11 = FUNC_2(VAR_10, 0, VAR_6);
  if (VAR_11)
   goto no_blocks;
  VAR_11 = FUNC_1(VAR_10, VAR_0, &VAR_9);
  if (VAR_11)
   goto no_blocks;
  FUNC_0(VAR_10);
  return VAR_9.e_pblk + (VAR_6 - VAR_9.e_lblk);
 }


 if (VAR_5->i_block[0])
  return VAR_5->i_block[0];

no_blocks:
 FUNC_0(VAR_10);
 VAR_8 = VAR_3->super->s_log_groups_per_flex;
 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (VAR_8)
  VAR_7 = VAR_7 & ~((1 << (VAR_8)) - 1);
 return FUNC_4(VAR_3, VAR_7);
}
