
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int reconnecting; int retry_time; int exit_event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct coreaudio_data*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void *FUNC_3(void *VAR_2)
{
 struct coreaudio_data *VAR_3 = VAR_2;

 VAR_3->reconnecting = 1;

 while (FUNC_2(VAR_3->exit_event, VAR_3->retry_time) ==
        VAR_0) {
  if (FUNC_1(VAR_3))
   break;
 }

 FUNC_0(VAR_1, "coreaudio: exit the reconnect thread");
 VAR_3->reconnecting = 0;
 return ((void*)0);
}
