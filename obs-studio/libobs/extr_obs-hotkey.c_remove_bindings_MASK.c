
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int obs_hotkey_id ;
struct TYPE_7__ {scalar_t__ pressed; } ;
typedef TYPE_2__ obs_hotkey_binding_t ;
struct TYPE_9__ {TYPE_2__* array; } ;
struct TYPE_6__ {TYPE_5__ bindings; } ;
struct TYPE_8__ {TYPE_1__ hotkeys; } ;


 int FUNC_0 (TYPE_5__,size_t) ;
 scalar_t__ FUNC_1 (int ,size_t*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(obs_hotkey_id VAR_1)
{
 size_t VAR_2;
 while (FUNC_1(VAR_1, &VAR_2)) {
  obs_hotkey_binding_t *VAR_3 =
   &VAR_0->hotkeys.bindings.array[VAR_2];

  if (VAR_3->pressed)
   FUNC_2(VAR_3);

  FUNC_0(VAR_0->hotkeys.bindings, VAR_2);
 }
}
