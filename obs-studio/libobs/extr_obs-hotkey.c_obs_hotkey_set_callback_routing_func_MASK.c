
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int obs_hotkey_callback_router_func ;
struct TYPE_3__ {void* router_func_data; int router_func; } ;
struct TYPE_4__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;

void FUNC_2(obs_hotkey_callback_router_func VAR_1,
       void *VAR_2)
{
 if (!FUNC_0())
  return;

 VAR_0->hotkeys.router_func = VAR_1;
 VAR_0->hotkeys.router_func_data = VAR_2;
 FUNC_1();
}
