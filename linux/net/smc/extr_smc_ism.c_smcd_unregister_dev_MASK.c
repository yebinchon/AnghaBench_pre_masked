
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_dev {int dev; int event_wq; int list; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smcd_dev*,int ,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct smcd_dev *VAR_2)
{
 FUNC_5(&VAR_1.lock);
 FUNC_3(&VAR_2->list);
 FUNC_6(&VAR_1.lock);
 FUNC_2(VAR_2->event_wq);
 FUNC_0(VAR_2->event_wq);
 FUNC_4(VAR_2, 0, VAR_0);

 FUNC_1(&VAR_2->dev);
}
