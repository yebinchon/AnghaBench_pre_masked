
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_output {int reconnect_retry_cur_sec; int reconnect_thread_active; int reconnecting; int reconnect_thread; int reconnect_stop_event; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct obs_output*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(void *VAR_2)
{
 struct obs_output *VAR_3 = VAR_2;
 unsigned long VAR_4 = VAR_3->reconnect_retry_cur_sec * 1000;

 VAR_3->reconnect_thread_active = 1;

 if (FUNC_2(VAR_3->reconnect_stop_event, VAR_4) == VAR_1)
  FUNC_0(VAR_3);

 if (FUNC_3(VAR_3->reconnect_stop_event) == VAR_0)
  FUNC_4(VAR_3->reconnect_thread);
 else
  FUNC_1(&VAR_3->reconnecting, 0);

 VAR_3->reconnect_thread_active = 0;
 return ((void*)0);
}
