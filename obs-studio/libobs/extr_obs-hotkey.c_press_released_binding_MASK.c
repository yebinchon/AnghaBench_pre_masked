
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int id; int data; int (* func ) (int ,int ,TYPE_2__*,int) ;int pressed; } ;
typedef TYPE_2__ obs_hotkey_t ;
struct TYPE_9__ {int pressed; TYPE_2__* hotkey; } ;
typedef TYPE_3__ obs_hotkey_binding_t ;
struct TYPE_7__ {int router_func_data; int (* router_func ) (int ,int ,int) ;int reroute_hotkeys; } ;
struct TYPE_10__ {TYPE_1__ hotkeys; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(obs_hotkey_binding_t *VAR_1)
{
 VAR_1->pressed = 1;

 obs_hotkey_t *VAR_2 = VAR_1->hotkey;
 if (VAR_2->pressed++)
  return;

 if (!VAR_0->hotkeys.reroute_hotkeys)
  VAR_2->func(VAR_2->data, VAR_2->id, VAR_2, 1);
 else if (VAR_0->hotkeys.router_func)
  VAR_0->hotkeys.router_func(VAR_0->hotkeys.router_func_data,
      VAR_2->id, 1);
}
