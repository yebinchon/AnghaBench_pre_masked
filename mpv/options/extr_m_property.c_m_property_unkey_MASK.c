
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_property_action_arg {int action; void* arg; int * key; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(int *VAR_1, void **VAR_2)
{
    if (*VAR_1 == VAR_0) {
        struct m_property_action_arg *VAR_3 = *VAR_2;
        if (!VAR_3->key[0]) {
            *VAR_1 = VAR_3->action;
            *VAR_2 = VAR_3->arg;
        }
    }
}
