
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct objagg_stats {int stats_info_count; TYPE_2__* stats_info; } ;
struct objagg {int dummy; } ;
struct TYPE_3__ {int user_count; int delta_user_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct objagg_stats const*) ;
 int VAR_1 ;
 int FUNC_1 (struct objagg_stats const*) ;
 struct objagg_stats* FUNC_2 (struct objagg*) ;
 int FUNC_3 (struct objagg_stats const*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct objagg *VAR_2)
{
 const struct objagg_stats *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_3->stats_info_count != VAR_1) {
  FUNC_4("Stats: Unexpected object count (%u expected, %u returned)\n",
         VAR_1, VAR_3->stats_info_count);
  VAR_5 = -VAR_0;
  goto stats_put;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->stats_info_count; VAR_4++) {
  if (VAR_3->stats_info[VAR_4].stats.user_count != 2) {
   FUNC_4("Stats: incorrect user count\n");
   VAR_5 = -VAR_0;
   goto stats_put;
  }
  if (VAR_3->stats_info[VAR_4].stats.delta_user_count != 2) {
   FUNC_4("Stats: incorrect delta user count\n");
   VAR_5 = -VAR_0;
   goto stats_put;
  }
 }
 VAR_5 = 0;

stats_put:
 FUNC_3(VAR_3);
 return VAR_5;
}
