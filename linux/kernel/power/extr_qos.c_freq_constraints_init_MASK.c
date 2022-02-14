
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_qos_constraints {int * notifiers; int type; void* no_constraint_value; void* default_value; void* target_value; int list; } ;
struct freq_constraints {int max_freq_notifiers; struct pm_qos_constraints max_freq; int min_freq_notifiers; struct pm_qos_constraints min_freq; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct freq_constraints *VAR_4)
{
 struct pm_qos_constraints *VAR_5;

 VAR_5 = &VAR_4->min_freq;
 FUNC_1(&VAR_5->list);
 VAR_5->target_value = VAR_1;
 VAR_5->default_value = VAR_1;
 VAR_5->no_constraint_value = VAR_1;
 VAR_5->type = VAR_2;
 VAR_5->notifiers = &VAR_4->min_freq_notifiers;
 FUNC_0(VAR_5->notifiers);

 VAR_5 = &VAR_4->max_freq;
 FUNC_1(&VAR_5->list);
 VAR_5->target_value = VAR_0;
 VAR_5->default_value = VAR_0;
 VAR_5->no_constraint_value = VAR_0;
 VAR_5->type = VAR_3;
 VAR_5->notifiers = &VAR_4->max_freq_notifiers;
 FUNC_0(VAR_5->notifiers);
}
