
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gred_sched {int DPs; scalar_t__* tab; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct Qdisc*,int ) ;
 struct gred_sched* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_1)
{
 struct gred_sched *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->DPs; VAR_3++) {
  if (VAR_2->tab[VAR_3])
   FUNC_0(VAR_2->tab[VAR_3]);
 }
 FUNC_1(VAR_1, VAR_0);
}
