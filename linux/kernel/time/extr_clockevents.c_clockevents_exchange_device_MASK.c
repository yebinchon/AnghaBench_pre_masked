
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int list; int owner; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct clock_event_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct clock_event_device *VAR_2,
     struct clock_event_device *VAR_3)
{




 if (VAR_2) {
  FUNC_6(VAR_2->owner);
  FUNC_3(VAR_2, VAR_0);
  FUNC_5(&VAR_2->list);
  FUNC_4(&VAR_2->list, &VAR_1);
 }

 if (VAR_3) {
  FUNC_0(!FUNC_1(VAR_3));
  FUNC_2(VAR_3);
 }
}
