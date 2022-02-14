
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prop_value_idx; scalar_t__ prop_name_idx; int prop_values; int prop_names; } ;
typedef TYPE_1__ PROPERTY_STRING_DATA ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    PROPERTY_STRING_DATA *VAR_1 = VAR_0;

    if (VAR_1 == ((void*)0))
        return;

    FUNC_1(&VAR_1->prop_names);
    FUNC_1(&VAR_1->prop_values);
    VAR_1->prop_name_idx = VAR_1->prop_value_idx = 0;

    FUNC_0(VAR_1);
}
