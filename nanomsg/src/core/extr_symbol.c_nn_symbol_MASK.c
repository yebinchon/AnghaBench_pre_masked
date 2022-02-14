
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_symbol_properties {int value; char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nn_symbol_properties* VAR_3 ;

const char *FUNC_0 (int VAR_4, int *VAR_5)
{
    const struct nn_symbol_properties *VAR_6;
    if (VAR_4 < 0 || VAR_4 >= VAR_1) {
        VAR_2 = VAR_0;
        return ((void*)0);
    }

    VAR_6 = &VAR_3 [VAR_4];
    if (VAR_5)
        *VAR_5 = VAR_6->value;
    return VAR_6->name;
}
