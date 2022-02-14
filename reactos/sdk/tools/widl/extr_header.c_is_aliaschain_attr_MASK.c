
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attrs; } ;
typedef TYPE_1__ type_t ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;

int FUNC_3(const type_t *VAR_0, enum attr_type VAR_1)
{
    const type_t *VAR_2 = VAR_0;
    for (;;)
    {
        if (FUNC_0(VAR_2->attrs, VAR_1))
            return 1;
        else if (FUNC_2(VAR_2))
            VAR_2 = FUNC_1(VAR_2);
        else return 0;
    }
}
