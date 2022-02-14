
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ext2_ino_t ;
typedef TYPE_2__* ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ dgrp_t ;
struct TYPE_7__ {scalar_t__ group_desc_count; TYPE_1__* super; } ;
struct TYPE_6__ {int s_inodes_per_group; int s_inodes_count; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

errcode_t FUNC_2(ext2_filsys VAR_1, ext2_ino_t *VAR_2)
{
 dgrp_t VAR_3;
 ext2_ino_t VAR_4, VAR_5;

 FUNC_0(VAR_1, VAR_0);

 VAR_4 = 0;
 VAR_5 = VAR_1->super->s_inodes_per_group;
 for (VAR_3 = 0; VAR_3 < VAR_1->group_desc_count; VAR_3++) {
  if (FUNC_1(VAR_1, VAR_3) > VAR_5)
   VAR_4 += VAR_5 / 8;
  else
   VAR_4 += FUNC_1(VAR_1, VAR_3);
 }
 if (VAR_4 > VAR_1->super->s_inodes_count)
  VAR_4 = VAR_1->super->s_inodes_count;

 *VAR_2 = VAR_4;

 return 0;
}
