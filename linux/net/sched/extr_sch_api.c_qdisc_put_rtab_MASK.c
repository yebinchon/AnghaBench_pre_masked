
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_rate_table {struct qdisc_rate_table* next; scalar_t__ refcnt; } ;


 int FUNC_0 (struct qdisc_rate_table*) ;
 struct qdisc_rate_table* VAR_0 ;

void FUNC_1(struct qdisc_rate_table *VAR_1)
{
 struct qdisc_rate_table *VAR_2, **VAR_3;

 if (!VAR_1 || --VAR_1->refcnt)
  return;

 for (VAR_3 = &VAR_0;
      (VAR_2 = *VAR_3) != ((void*)0);
      VAR_3 = &VAR_2->next) {
  if (VAR_2 == VAR_1) {
   *VAR_3 = VAR_2->next;
   FUNC_0(VAR_2);
   return;
  }
 }
}
