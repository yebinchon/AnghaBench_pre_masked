
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int blk64_t ;
struct TYPE_6__ {int s_blocks_per_group; } ;
struct TYPE_5__ {int group_desc_count; TYPE_4__* super; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

blk64_t FUNC_2(ext2_filsys VAR_0, dgrp_t VAR_1)
{
 return (VAR_1 == VAR_0->group_desc_count - 1 ?
  FUNC_0(VAR_0->super) - 1 :
  FUNC_1(VAR_0, VAR_1) +
   (VAR_0->super->s_blocks_per_group - 1));
}
