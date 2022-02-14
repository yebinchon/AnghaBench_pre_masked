
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ct_timer {int reprogram; int lock; scalar_t__ irq_handling; } ;


 int FUNC_0 (struct ct_timer*) ;
 int FUNC_1 (struct ct_timer*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ct_timer *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->lock, VAR_1);
 if (VAR_0->irq_handling) {

  VAR_0->reprogram = 1;
  FUNC_3(&VAR_0->lock, VAR_1);
  return;
 }

 FUNC_0(VAR_0);
 FUNC_1(VAR_0, 0);
 FUNC_3(&VAR_0->lock, VAR_1);
}
