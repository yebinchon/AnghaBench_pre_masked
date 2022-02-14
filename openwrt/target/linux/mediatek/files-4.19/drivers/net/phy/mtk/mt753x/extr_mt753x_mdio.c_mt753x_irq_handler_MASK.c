
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsw_mt753x {int irq_worker; int irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct gsw_mt753x *VAR_3 = VAR_2;

 FUNC_0(VAR_3->irq);

 FUNC_1(&VAR_3->irq_worker);

 return VAR_0;
}
