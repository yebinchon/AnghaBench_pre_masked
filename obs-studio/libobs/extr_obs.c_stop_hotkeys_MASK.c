
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_hotkeys {int hotkey_thread_initialized; int stop_event; int hotkey_thread; } ;
struct TYPE_2__ {struct obs_core_hotkeys hotkeys; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,void**) ;

__attribute__((used)) static inline void FUNC_4(void)
{
 struct obs_core_hotkeys *VAR_1 = &VAR_0->hotkeys;
 void *VAR_2;

 if (VAR_1->hotkey_thread_initialized) {
  FUNC_2(VAR_1->stop_event);
  FUNC_3(VAR_1->hotkey_thread, &VAR_2);
  VAR_1->hotkey_thread_initialized = 0;
 }

 FUNC_1(VAR_1->stop_event);
 FUNC_0();
}
