
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ext2fs_inode_bitmap ;
typedef scalar_t__ ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
typedef scalar_t__ dgrp_t ;
struct TYPE_11__ {scalar_t__ group_desc_count; TYPE_1__* super; } ;
struct TYPE_10__ {scalar_t__ s_inodes_per_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(ext2_filsys VAR_2, ext2fs_inode_bitmap VAR_3,
     dgrp_t VAR_4)
{
 ext2_ino_t VAR_5, VAR_6;

 if (VAR_4 >= VAR_2->group_desc_count ||
     !FUNC_4(VAR_2) ||
     !(FUNC_1(VAR_2, VAR_4, VAR_1)))
  return;

 VAR_6 = (VAR_4 * VAR_2->super->s_inodes_per_group) + 1;
 for (VAR_5=0; VAR_5 < VAR_2->super->s_inodes_per_group; VAR_5++, VAR_6++)
  FUNC_2(VAR_3, VAR_6);

 FUNC_0(VAR_2, VAR_4, VAR_1);

 FUNC_0(VAR_2, VAR_4, VAR_0);
 FUNC_3(VAR_2, VAR_4);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
}
