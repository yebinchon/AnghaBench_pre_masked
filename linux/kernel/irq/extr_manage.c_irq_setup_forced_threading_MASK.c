
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int flags; scalar_t__ handler; scalar_t__ thread_fn; int thread_flags; int name; TYPE_1__* secondary; int irq; int dev_id; } ;
struct TYPE_2__ {scalar_t__ thread_fn; int name; int irq; int dev_id; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct irqaction *VAR_9)
{
 if (!VAR_6)
  return 0;
 if (VAR_9->flags & (VAR_2 | VAR_4 | VAR_3))
  return 0;





 if (VAR_9->handler == VAR_7)
  return 0;

 VAR_9->flags |= VAR_3;






 if (VAR_9->handler && VAR_9->thread_fn) {

  VAR_9->secondary = FUNC_0(sizeof(struct irqaction), VAR_1);
  if (!VAR_9->secondary)
   return -VAR_0;
  VAR_9->secondary->handler = VAR_8;
  VAR_9->secondary->thread_fn = VAR_9->thread_fn;
  VAR_9->secondary->dev_id = VAR_9->dev_id;
  VAR_9->secondary->irq = VAR_9->irq;
  VAR_9->secondary->name = VAR_9->name;
 }

 FUNC_1(VAR_5, &VAR_9->thread_flags);
 VAR_9->thread_fn = VAR_9->handler;
 VAR_9->handler = VAR_7;
 return 0;
}
