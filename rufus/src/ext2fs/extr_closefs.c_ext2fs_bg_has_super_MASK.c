
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
struct TYPE_6__ {int* s_backup_bgs; } ;
struct TYPE_5__ {TYPE_2__* super; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,int) ;

int FUNC_3(ext2_filsys VAR_0, dgrp_t VAR_1)
{
 if (VAR_1 == 0)
  return 1;
 if (FUNC_1(VAR_0->super)) {
  if (VAR_1 == VAR_0->super->s_backup_bgs[0] ||
      VAR_1 == VAR_0->super->s_backup_bgs[1])
   return 1;
  return 0;
 }
 if ((VAR_1 <= 1) || !FUNC_0(VAR_0->super))
  return 1;
 if (!(VAR_1 & 1))
  return 0;
 if (FUNC_2(VAR_1, 3) || (FUNC_2(VAR_1, 5)) ||
     FUNC_2(VAR_1, 7))
  return 1;

 return 0;
}
