
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {int padded; int cpu_qstats; int cpu_bstats; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct Qdisc*) ;

void FUNC_3(struct Qdisc *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  FUNC_0(VAR_0->cpu_bstats);
  FUNC_0(VAR_0->cpu_qstats);
 }

 FUNC_1((char *) VAR_0 - VAR_0->padded);
}
