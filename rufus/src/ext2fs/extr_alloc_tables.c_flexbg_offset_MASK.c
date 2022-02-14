
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ext2fs_block_bitmap ;
typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int blk64_t ;
struct TYPE_8__ {int s_log_groups_per_flex; int s_blocks_per_group; } ;
struct TYPE_7__ {int group_desc_count; TYPE_6__* super; } ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static blk64_t FUNC_4(ext2_filsys VAR_0, dgrp_t VAR_1, blk64_t VAR_2,
        ext2fs_block_bitmap VAR_3, int VAR_4,
        int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 blk64_t VAR_9, VAR_10 = 0;
 dgrp_t VAR_11;

 VAR_7 = 1 << VAR_0->super->s_log_groups_per_flex;
 VAR_6 = VAR_1 / VAR_7;
 VAR_8 = VAR_4 * VAR_5;

 if (VAR_8 > (int) (VAR_0->super->s_blocks_per_group / 4))
  VAR_8 = (int) VAR_0->super->s_blocks_per_group / 4;





 if (VAR_2 && VAR_2 < FUNC_0(VAR_0->super) &&
     FUNC_1(VAR_0, VAR_2, VAR_2 + VAR_8, VAR_5,
        VAR_3, &VAR_10) == 0)
  return VAR_10;

 VAR_2 = FUNC_2(VAR_0, VAR_7 * VAR_6);
 VAR_11 = VAR_1 | (VAR_7 - 1);
 if (VAR_11 > VAR_0->group_desc_count-1)
  VAR_11 = VAR_0->group_desc_count-1;
 VAR_9 = FUNC_3(VAR_0, VAR_11);


 if (FUNC_1(VAR_0, VAR_2, VAR_9, VAR_8,
        VAR_3, &VAR_10) == 0)
  return VAR_10;

 if (FUNC_1(VAR_0, VAR_2, VAR_9, VAR_5,
       VAR_3, &VAR_10) == 0)
  return VAR_10;

 if (FUNC_1(VAR_0, 0, VAR_9, VAR_5, VAR_3,
        &VAR_10) == 0)
  return VAR_10;

 return VAR_10;
}
