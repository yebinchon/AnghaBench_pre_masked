
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_10__ {int s_first_meta_bg; scalar_t__ s_first_data_block; scalar_t__ s_blocks_per_group; } ;
struct TYPE_9__ {int blocksize; TYPE_2__* super; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_2__*) ;

blk64_t FUNC_6(ext2_filsys VAR_0, blk64_t VAR_1,
         dgrp_t VAR_2)
{
 int VAR_3;
 int VAR_4 = 0, VAR_5 = 0;
 blk64_t VAR_6;





 if (VAR_2 == 0 && VAR_0->blocksize == 1024 && FUNC_0(VAR_0) > 1)
  VAR_5 = 1;

 if (!FUNC_5(VAR_0->super) ||
     (VAR_2 < VAR_0->super->s_first_meta_bg))
  return VAR_1 + VAR_2 + 1 + VAR_5;

 VAR_3 = FUNC_1(VAR_0->super) * VAR_2;
 if (FUNC_2(VAR_0, VAR_3))
  VAR_4 = 1;
 VAR_6 = FUNC_4(VAR_0, VAR_3);
 if (VAR_1 != VAR_0->super->s_first_data_block &&
     ((VAR_6 + VAR_4 + VAR_0->super->s_blocks_per_group) <
      FUNC_3(VAR_0->super))) {
  VAR_6 += VAR_0->super->s_blocks_per_group;






  if (FUNC_2(VAR_0, VAR_3 + 1))
   VAR_4 = 1;
  else
   VAR_4 = 0;
 }
 return VAR_6 + VAR_4 + VAR_5;
}
