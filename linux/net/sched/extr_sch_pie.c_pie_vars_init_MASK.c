
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pie_vars {scalar_t__ accu_prob_overflows; int burst_time; scalar_t__ avg_dq_rate; scalar_t__ accu_prob; int dq_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct pie_vars *VAR_2)
{
 VAR_2->dq_count = VAR_0;
 VAR_2->accu_prob = 0;
 VAR_2->avg_dq_rate = 0;

 VAR_2->burst_time = FUNC_0(150 * VAR_1);
 VAR_2->accu_prob_overflows = 0;
}
