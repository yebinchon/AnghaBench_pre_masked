
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_netem_reorder {int correlation; int probability; } ;
struct nlattr {int dummy; } ;
struct netem_sched_data {int reorder_cor; int reorder; } ;


 int FUNC_0 (int *,int ) ;
 struct tc_netem_reorder* FUNC_1 (struct nlattr const*) ;

__attribute__((used)) static void FUNC_2(struct netem_sched_data *VAR_0, const struct nlattr *VAR_1)
{
 const struct tc_netem_reorder *VAR_2 = FUNC_1(VAR_1);

 VAR_0->reorder = VAR_2->probability;
 FUNC_0(&VAR_0->reorder_cor, VAR_2->correlation);
}
