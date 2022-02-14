
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
struct TYPE_5__ {int s_first_data_block; int s_blocks_per_group; } ;
struct TYPE_4__ {int group_desc_count; TYPE_3__* super; } ;


 int FUNC_0 (TYPE_3__*) ;

int FUNC_1(ext2_filsys VAR_0, dgrp_t VAR_1)
{
 int VAR_2;

 if (VAR_1 == VAR_0->group_desc_count - 1) {
  VAR_2 = (FUNC_0(VAR_0->super) -
    VAR_0->super->s_first_data_block) %
         VAR_0->super->s_blocks_per_group;
  if (!VAR_2)
   VAR_2 = VAR_0->super->s_blocks_per_group;
 } else
  VAR_2 = VAR_0->super->s_blocks_per_group;

 return VAR_2;
}
