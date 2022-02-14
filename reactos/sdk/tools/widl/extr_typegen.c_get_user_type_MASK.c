
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* name; int attrs; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static type_t *FUNC_3(const type_t *VAR_1, const char **VAR_2)
{
    for (;;)
    {
        type_t *VAR_3 = FUNC_0(VAR_1->attrs, VAR_0);
        if (VAR_3)
        {
            if (VAR_2)
                *VAR_2 = VAR_1->name;
            return VAR_3;
        }

        if (FUNC_2(VAR_1))
            VAR_1 = FUNC_1(VAR_1);
        else
            return ((void*)0);
    }
}
