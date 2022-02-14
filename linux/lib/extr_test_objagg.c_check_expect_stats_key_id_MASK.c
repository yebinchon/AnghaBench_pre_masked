
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj_stats_info {int objagg_obj; } ;
struct expect_stats_info {scalar_t__ key_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct objagg_obj_stats_info *VAR_1,
     const struct expect_stats_info *VAR_2,
     const char **VAR_3)
{
 if (FUNC_0(VAR_1->objagg_obj) !=
     VAR_2->key_id) {
  if (VAR_3)
   *VAR_3 = "incorrect key id";
  return -VAR_0;
 }
 return 0;
}
