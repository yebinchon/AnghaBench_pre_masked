
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_attrs {int no_numa; int cpumask; int nice; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct workqueue_attrs *VAR_0,
     const struct workqueue_attrs *VAR_1)
{
 VAR_0->nice = VAR_1->nice;
 FUNC_0(VAR_0->cpumask, VAR_1->cpumask);





 VAR_0->no_numa = VAR_1->no_numa;
}
