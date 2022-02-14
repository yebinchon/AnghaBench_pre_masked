
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_symbol_properties {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_symbol_properties*,int *,int) ;
 int * VAR_1 ;

int FUNC_1 (int VAR_2, struct nn_symbol_properties *VAR_3, int VAR_4)
{
    if (VAR_2 < 0 || VAR_2 >= VAR_0) {
        return 0;
    }
    if (VAR_4 > (int)sizeof (struct nn_symbol_properties)) {
        VAR_4 = (int)sizeof (struct nn_symbol_properties);
    }
    FUNC_0(VAR_3, &VAR_1 [VAR_2], VAR_4);
    return VAR_4;
}
