
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tick_device {scalar_t__ mode; int evtdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct tick_device* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(void)
{
 struct tick_device *VAR_2 = FUNC_1(&VAR_1);
 bool VAR_3 = FUNC_2();

 FUNC_0(VAR_2->evtdev);
 if (!VAR_3) {
  if (VAR_2->mode == VAR_0)
   FUNC_4(VAR_2->evtdev, 0);
  else
   FUNC_3();
 }
}
