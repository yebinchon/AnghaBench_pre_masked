
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {int dummy; } ;


 int FUNC_0 (struct Qdisc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct Qdisc*,int*) ;

void FUNC_3(struct Qdisc *VAR_1)
{
 int VAR_2 = VAR_0;
 int VAR_3;

 while (FUNC_2(VAR_1, &VAR_3)) {





  VAR_2 -= VAR_3;
  if (VAR_2 <= 0 || FUNC_1()) {
   FUNC_0(VAR_1);
   break;
  }
 }
}
