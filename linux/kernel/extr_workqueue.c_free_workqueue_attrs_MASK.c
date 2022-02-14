
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_attrs {int cpumask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct workqueue_attrs*) ;

void FUNC_2(struct workqueue_attrs *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->cpumask);
  FUNC_1(VAR_0);
 }
}
