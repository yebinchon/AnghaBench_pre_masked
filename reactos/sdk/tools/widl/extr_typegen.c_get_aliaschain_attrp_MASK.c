
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attrs; } ;
typedef TYPE_1__ type_t ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 void* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;

__attribute__((used)) static void *FUNC_4(const type_t *VAR_0, enum attr_type VAR_1)
{
    const type_t *VAR_2 = VAR_0;
    for (;;)
    {
        if (FUNC_1(VAR_2->attrs, VAR_1))
            return FUNC_0(VAR_2->attrs, VAR_1);
        else if (FUNC_3(VAR_2))
            VAR_2 = FUNC_2(VAR_2);
        else return ((void*)0);
    }
}
