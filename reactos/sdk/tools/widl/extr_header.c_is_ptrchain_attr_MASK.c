
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* type; int attrs; } ;
typedef TYPE_1__ var_t ;
struct TYPE_11__ {int attrs; } ;
typedef TYPE_2__ type_t ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;

int FUNC_5(const var_t *VAR_0, enum attr_type VAR_1)
{
    if (FUNC_0(VAR_0->attrs, VAR_1))
        return 1;
    else
    {
        type_t *VAR_2 = VAR_0->type;
        for (;;)
        {
            if (FUNC_0(VAR_2->attrs, VAR_1))
                return 1;
            else if (FUNC_3(VAR_2))
                VAR_2 = FUNC_2(VAR_2);
            else if (FUNC_1(VAR_2))
                VAR_2 = FUNC_4(VAR_2);
            else return 0;
        }
    }
}
