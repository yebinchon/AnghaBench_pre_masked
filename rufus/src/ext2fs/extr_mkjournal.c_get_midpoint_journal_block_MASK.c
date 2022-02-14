
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ext2_filsys ;
typedef int dgrp_t ;
typedef int blk64_t ;
struct TYPE_8__ {int s_first_data_block; int s_log_groups_per_flex; } ;
struct TYPE_7__ {int group_desc_count; TYPE_5__* super; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static blk64_t FUNC_4(ext2_filsys VAR_0)
{
 dgrp_t VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_1 = FUNC_3(VAR_0, (FUNC_1(VAR_0->super) -
      VAR_0->super->s_first_data_block) / 2);
 VAR_5 = 1 << VAR_0->super->s_log_groups_per_flex;
 if (VAR_0->super->s_log_groups_per_flex && (VAR_1 > VAR_5)) {
  VAR_1 = VAR_1 & ~(VAR_5 - 1);
  while ((VAR_1 < VAR_0->group_desc_count) &&
         FUNC_0(VAR_0, VAR_1) == 0)
   VAR_1++;
  if (VAR_1 == VAR_0->group_desc_count)
   VAR_1 = 0;
  VAR_2 = VAR_1;
 } else
  VAR_2 = (VAR_1 > 0) ? VAR_1-1 : VAR_1;
 VAR_3 = ((VAR_1+1) < VAR_0->group_desc_count) ? VAR_1+1 : VAR_1;
 VAR_1 = VAR_2;
 for (VAR_4 = VAR_2 + 1; VAR_4 <= VAR_3; VAR_4++)
  if (FUNC_0(VAR_0, VAR_4) >
      FUNC_0(VAR_0, VAR_1))
   VAR_1 = VAR_4;
 return FUNC_2(VAR_0, VAR_1);
}
