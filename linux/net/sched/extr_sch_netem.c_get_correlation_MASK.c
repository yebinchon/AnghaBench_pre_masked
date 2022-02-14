
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_netem_corr {int dup_corr; int loss_corr; int delay_corr; } ;
struct nlattr {int dummy; } ;
struct netem_sched_data {int dup_cor; int loss_cor; int delay_cor; } ;


 int FUNC_0 (int *,int ) ;
 struct tc_netem_corr* FUNC_1 (struct nlattr const*) ;

__attribute__((used)) static void FUNC_2(struct netem_sched_data *VAR_0, const struct nlattr *VAR_1)
{
 const struct tc_netem_corr *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_0->delay_cor, VAR_2->delay_corr);
 FUNC_0(&VAR_0->loss_cor, VAR_2->loss_corr);
 FUNC_0(&VAR_0->dup_cor, VAR_2->dup_corr);
}
