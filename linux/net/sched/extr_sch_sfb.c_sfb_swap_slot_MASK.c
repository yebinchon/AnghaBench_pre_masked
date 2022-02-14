
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfb_sched_data {int slot; int double_buffering; } ;


 int FUNC_0 (int,struct sfb_sched_data*) ;

__attribute__((used)) static void FUNC_1(struct sfb_sched_data *VAR_0)
{
 FUNC_0(VAR_0->slot, VAR_0);
 VAR_0->slot ^= 1;
 VAR_0->double_buffering = 0;
}
