
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {int flags; int * cpu_qstats; int * cpu_bstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct Qdisc *VAR_2)
{
 VAR_2->flags &= ~VAR_1;
 if (!(VAR_2->flags & VAR_0))
  return;

 FUNC_0(VAR_2->cpu_bstats);
 FUNC_0(VAR_2->cpu_qstats);
 VAR_2->cpu_bstats = ((void*)0);
 VAR_2->cpu_qstats = ((void*)0);
 VAR_2->flags &= ~VAR_0;
}
