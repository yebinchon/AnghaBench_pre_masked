
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_5__ {scalar_t__ s_first_data_block; } ;
struct TYPE_4__ {TYPE_3__* super; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;

blk64_t FUNC_1(ext2_filsys VAR_0, dgrp_t VAR_1)
{
 return VAR_0->super->s_first_data_block +
  FUNC_0(VAR_0->super, VAR_1);
}
