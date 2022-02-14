
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_hotkeys {TYPE_1__* platform_context; } ;
struct TYPE_2__ {int * base_keysyms; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;

__attribute__((used)) static inline void FUNC_1(struct obs_core_hotkeys *VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->platform_context->base_keysyms[VAR_2] = FUNC_0(VAR_2);
}
