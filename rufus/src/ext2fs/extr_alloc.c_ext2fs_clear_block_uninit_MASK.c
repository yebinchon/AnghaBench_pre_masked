
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef scalar_t__ dgrp_t ;
struct TYPE_9__ {scalar_t__ group_desc_count; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(ext2_filsys VAR_1, dgrp_t VAR_2)
{
 if (VAR_2 >= VAR_1->group_desc_count ||
     !FUNC_3(VAR_1) ||
     !(FUNC_1(VAR_1, VAR_2, VAR_0)))
  return;



 FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_2(VAR_1, VAR_2);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
}
