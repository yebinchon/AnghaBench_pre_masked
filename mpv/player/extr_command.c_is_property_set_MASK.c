
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_property_action_arg {int action; void* arg; } ;
__attribute__((used)) static bool FUNC_0(int VAR_0, void *VAR_1)
{
    switch (VAR_0) {
    case 131:
    case 128:
    case 129:
    case 130:
    case 132:
        return 1;
    case 133: {
        struct m_property_action_arg *VAR_2 = VAR_1;
        return FUNC_0(VAR_2->action, VAR_2->arg);
    }
    default:
        return 0;
    }
}
