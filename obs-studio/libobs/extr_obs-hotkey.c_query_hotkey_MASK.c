
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_query_hotkeys_helper {int strict_modifiers; int no_press; int modifiers; } ;
typedef int obs_hotkey_binding_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static inline bool FUNC_2(void *VAR_0, size_t VAR_1,
    obs_hotkey_binding_t *VAR_2)
{
 FUNC_0(VAR_1);

 struct obs_query_hotkeys_helper *VAR_3 =
  (struct obs_query_hotkeys_helper *)VAR_0;
 FUNC_1(VAR_2, VAR_3->modifiers, VAR_3->no_press,
         VAR_3->strict_modifiers, ((void*)0));

 return 1;
}
