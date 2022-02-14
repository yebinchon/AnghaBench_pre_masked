
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int flags; } ;
struct irq_desc {int istate; int lock; struct irqaction* action; int irq_data; } ;
typedef scalar_t__ irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct irq_desc*) ;
 scalar_t__ FUNC_1 (struct irq_desc*) ;
 scalar_t__ FUNC_2 (struct irq_desc*) ;
 scalar_t__ FUNC_3 (struct irq_desc*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct irq_desc *VAR_6, bool VAR_7)
{
 irqreturn_t VAR_8 = VAR_4;
 struct irqaction *VAR_9;

 FUNC_6(&VAR_6->lock);





 if (FUNC_2(VAR_6) ||
     FUNC_1(VAR_6) ||
     FUNC_3(VAR_6))
  goto out;





 if (FUNC_4(&VAR_6->irq_data) && !VAR_7)
  goto out;





 VAR_9 = VAR_6->action;
 if (!VAR_9 || !(VAR_9->flags & VAR_0) ||
     (VAR_9->flags & VAR_5))
  goto out;


 if (FUNC_5(&VAR_6->irq_data)) {




  VAR_6->istate |= VAR_1;
  goto out;
 }


 VAR_6->istate |= VAR_2;
 do {
  if (FUNC_0(VAR_6) == VAR_3)
   VAR_8 = VAR_3;

  VAR_9 = VAR_6->action;
 } while ((VAR_6->istate & VAR_1) && VAR_9);
 VAR_6->istate &= ~VAR_2;
out:
 FUNC_7(&VAR_6->lock);
 return VAR_8 == VAR_3;
}
