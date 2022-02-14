
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_deferred_item {int dev; int data; int (* func ) (int ,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct switchdev_deferred_item*) ;
 int FUNC_3 (int ,int ) ;
 struct switchdev_deferred_item* FUNC_4 () ;

void FUNC_5(void)
{
 struct switchdev_deferred_item *VAR_0;

 FUNC_0();

 while ((VAR_0 = FUNC_4())) {
  VAR_0->func(VAR_0->dev, VAR_0->data);
  FUNC_1(VAR_0->dev);
  FUNC_2(VAR_0);
 }
}
