
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ delta_user_count; int user_count; } ;
struct objagg_obj_stats_info {scalar_t__ is_root; TYPE_1__ stats; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct objagg_obj_stats_info *VAR_2 = VAR_0;
 const struct objagg_obj_stats_info *VAR_3 = VAR_1;

 if (VAR_2->is_root != VAR_3->is_root)
  return VAR_3->is_root - VAR_2->is_root;
 if (VAR_2->stats.delta_user_count !=
     VAR_3->stats.delta_user_count)
  return VAR_3->stats.delta_user_count -
         VAR_2->stats.delta_user_count;
 return VAR_3->stats.user_count - VAR_2->stats.user_count;
}
