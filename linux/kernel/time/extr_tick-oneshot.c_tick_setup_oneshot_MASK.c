
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {void (* event_handler ) (struct clock_event_device*) ;} ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ,int) ;
 int FUNC_1 (struct clock_event_device*,int ) ;

void FUNC_2(struct clock_event_device *VAR_1,
   void (*VAR_2)(struct clock_event_device *),
   ktime_t VAR_3)
{
 VAR_1->event_handler = VAR_2;
 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1, VAR_3, 1);
}
