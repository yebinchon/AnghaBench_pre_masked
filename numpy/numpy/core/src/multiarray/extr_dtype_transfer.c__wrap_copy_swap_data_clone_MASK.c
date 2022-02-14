
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arr; } ;
typedef TYPE_1__ _wrap_copy_swap_data ;
typedef int NpyAuxData ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_3(NpyAuxData *VAR_0)
{
    _wrap_copy_swap_data *VAR_1 =
        (_wrap_copy_swap_data *)FUNC_0(sizeof(_wrap_copy_swap_data));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(VAR_1, VAR_0, sizeof(_wrap_copy_swap_data));
    FUNC_1(VAR_1->arr);

    return (NpyAuxData *)VAR_1;
}
