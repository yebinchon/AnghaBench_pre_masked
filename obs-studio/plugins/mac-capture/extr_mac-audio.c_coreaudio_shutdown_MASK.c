
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {scalar_t__ unit; int exit_event; int reconnect_thread; scalar_t__ reconnecting; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct coreaudio_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct coreaudio_data *VAR_0)
{
 if (VAR_0->reconnecting) {
  FUNC_3(VAR_0->exit_event);
  FUNC_4(VAR_0->reconnect_thread, ((void*)0));
  FUNC_2(VAR_0->exit_event);
 }

 FUNC_1(VAR_0);

 if (VAR_0->unit)
  FUNC_0(VAR_0->unit);
}
