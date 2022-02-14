
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int reconnect_thread; scalar_t__ reconnecting; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int *,int ,struct coreaudio_data*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct coreaudio_data *VAR_2)
{
 int VAR_3;

 if (VAR_2->reconnecting)
  return;

 VAR_3 = FUNC_1(&VAR_2->reconnect_thread, ((void*)0), VAR_1, VAR_2);
 if (VAR_3 != 0)
  FUNC_0(VAR_0,
       "[coreaudio_begin_reconnect] failed to "
       "create thread, error code: %d",
       VAR_3);
}
