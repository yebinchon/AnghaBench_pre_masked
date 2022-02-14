
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdisc_size_table {scalar_t__ refcnt; int list; } ;


 int FUNC_0 (struct qdisc_size_table*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct qdisc_size_table *VAR_1)
{
 if (!VAR_1)
  return;

 if (--VAR_1->refcnt == 0) {
  FUNC_1(&VAR_1->list);
  FUNC_0(VAR_1, VAR_0);
 }
}
