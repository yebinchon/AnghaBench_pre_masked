
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_handle {TYPE_1__* dev; } ;
struct TYPE_2__ {int event_lock; int sw; int swbit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct input_handle *VAR_2)
{





 FUNC_1(&VAR_2->dev->event_lock);

 if (FUNC_3(VAR_0, VAR_2->dev->evbit) &&
     FUNC_3(VAR_1, VAR_2->dev->swbit))
  FUNC_0(FUNC_3(VAR_1,
       VAR_2->dev->sw));

 FUNC_2(&VAR_2->dev->event_lock);
}
