
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw {int irq_callback; struct ct_timer* irq_callback_data; scalar_t__ set_timer_irq; } ;
struct ct_timer {int * ops; struct ct_atc* atc; int running_head; int instance_head; int list_lock; int lock; } ;
struct ct_atc {TYPE_1__* card; struct hw* hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 struct ct_timer* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

struct ct_timer *FUNC_4(struct ct_atc *VAR_5)
{
 struct ct_timer *VAR_6;
 struct hw *VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 FUNC_3(&VAR_6->lock);
 FUNC_3(&VAR_6->list_lock);
 FUNC_0(&VAR_6->instance_head);
 FUNC_0(&VAR_6->running_head);
 VAR_6->atc = VAR_5;
 VAR_7 = VAR_5->hw;
 if (!VAR_4 && VAR_7->set_timer_irq) {
  FUNC_1(VAR_5->card->dev, "Use xfi-native timer\n");
  VAR_6->ops = &VAR_3;
  VAR_7->irq_callback_data = VAR_6;
  VAR_7->irq_callback = VAR_2;
 } else {
  FUNC_1(VAR_5->card->dev, "Use system timer\n");
  VAR_6->ops = &VAR_1;
 }
 return VAR_6;
}
