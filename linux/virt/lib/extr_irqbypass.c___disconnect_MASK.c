
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_bypass_producer {int (* start ) (struct irq_bypass_producer*) ;int (* del_consumer ) (struct irq_bypass_producer*,struct irq_bypass_consumer*) ;int (* stop ) (struct irq_bypass_producer*) ;} ;
struct irq_bypass_consumer {int (* start ) (struct irq_bypass_consumer*) ;int (* del_producer ) (struct irq_bypass_consumer*,struct irq_bypass_producer*) ;int (* stop ) (struct irq_bypass_consumer*) ;} ;


 int FUNC_0 (struct irq_bypass_producer*) ;
 int FUNC_1 (struct irq_bypass_consumer*) ;
 int FUNC_2 (struct irq_bypass_consumer*,struct irq_bypass_producer*) ;
 int FUNC_3 (struct irq_bypass_producer*,struct irq_bypass_consumer*) ;
 int FUNC_4 (struct irq_bypass_consumer*) ;
 int FUNC_5 (struct irq_bypass_producer*) ;

__attribute__((used)) static void FUNC_6(struct irq_bypass_producer *VAR_0,
    struct irq_bypass_consumer *VAR_1)
{
 if (VAR_0->stop)
  VAR_0->stop(VAR_0);
 if (VAR_1->stop)
  VAR_1->stop(VAR_1);

 VAR_1->del_producer(VAR_1, VAR_0);

 if (VAR_0->del_consumer)
  VAR_0->del_consumer(VAR_0, VAR_1);

 if (VAR_1->start)
  VAR_1->start(VAR_1);
 if (VAR_0->start)
  VAR_0->start(VAR_0);
}
