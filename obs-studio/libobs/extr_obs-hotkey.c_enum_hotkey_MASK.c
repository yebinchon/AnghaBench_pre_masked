
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_hotkey_internal_enum_forward {int (* func ) (int ,int ,TYPE_1__*) ;int data; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ obs_hotkey_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_2(void *VAR_0, size_t VAR_1, obs_hotkey_t *VAR_2)
{
 FUNC_0(VAR_1);

 struct obs_hotkey_internal_enum_forward *VAR_3 = VAR_0;
 return VAR_3->func(VAR_3->data, VAR_2->id, VAR_2);
}
