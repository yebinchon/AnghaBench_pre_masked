
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ user_count; scalar_t__ delta_user_count; } ;
struct objagg_obj_stats_info {scalar_t__ is_root; TYPE_2__ stats; } ;
struct TYPE_3__ {scalar_t__ user_count; scalar_t__ delta_user_count; } ;
struct expect_stats_info {scalar_t__ is_root; TYPE_1__ stats; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct objagg_obj_stats_info *VAR_1,
   const struct expect_stats_info *VAR_2,
   const char **VAR_3)
{
 if (VAR_1->is_root != VAR_2->is_root) {
  if (VAR_3)
   *VAR_3 = "Incorrect root/delta indication";
  return -VAR_0;
 }
 if (VAR_1->stats.user_count !=
     VAR_2->stats.user_count) {
  if (VAR_3)
   *VAR_3 = "Incorrect user count";
  return -VAR_0;
 }
 if (VAR_1->stats.delta_user_count !=
     VAR_2->stats.delta_user_count) {
  if (VAR_3)
   *VAR_3 = "Incorrect delta user count";
  return -VAR_0;
 }
 return 0;
}
