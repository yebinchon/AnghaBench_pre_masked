
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ _n_to_n_data ;
typedef int NpyAuxData ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_4(NpyAuxData *VAR_0)
{
    _n_to_n_data *VAR_1 = (_n_to_n_data *)VAR_0;
    _n_to_n_data *VAR_2;


    VAR_2 = (_n_to_n_data *)FUNC_2(sizeof(_n_to_n_data));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_3(VAR_2, VAR_0, sizeof(_n_to_n_data));
    if (VAR_2->data != ((void*)0)) {
        VAR_2->data = FUNC_0(VAR_1->data);
        if (VAR_2->data == ((void*)0)) {
            FUNC_1(VAR_2);
            return ((void*)0);
        }
    }

    return (NpyAuxData *)VAR_2;
}
