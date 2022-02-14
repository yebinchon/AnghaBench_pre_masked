
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfb_sched_data {int decrement; } ;
struct sfb_bucket {int p_mark; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sfb_bucket *VAR_0, struct sfb_sched_data *VAR_1)
{
 VAR_0->p_mark = FUNC_0(VAR_0->p_mark, VAR_1->decrement);
}
