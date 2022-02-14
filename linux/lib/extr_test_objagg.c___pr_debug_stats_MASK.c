
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct objagg_stats {int stats_info_count; TYPE_2__* stats_info; } ;
struct TYPE_3__ {int delta_user_count; int user_count; } ;
struct TYPE_4__ {scalar_t__ is_root; TYPE_1__ stats; int objagg_obj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int ,int ,char*) ;

__attribute__((used)) static void FUNC_2(const struct objagg_stats *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->stats_info_count; VAR_1++)
  FUNC_1("Stat index %d key %u: u %d, d %d, %s\n", VAR_1,
    FUNC_0(VAR_0->stats_info[VAR_1].objagg_obj),
    VAR_0->stats_info[VAR_1].stats.user_count,
    VAR_0->stats_info[VAR_1].stats.delta_user_count,
    VAR_0->stats_info[VAR_1].is_root ? "root" : "noroot");
}
