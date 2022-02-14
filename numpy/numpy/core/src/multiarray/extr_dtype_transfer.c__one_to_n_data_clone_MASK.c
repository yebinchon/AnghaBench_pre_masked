
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; int * data_finish_src; } ;
typedef TYPE_1__ _one_to_n_data ;
typedef int NpyAuxData ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_5(NpyAuxData *VAR_0)
{
    _one_to_n_data *VAR_1 = (_one_to_n_data *)VAR_0;
    _one_to_n_data *VAR_2;


    VAR_2 = (_one_to_n_data *)FUNC_3(sizeof(_one_to_n_data));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_4(VAR_2, VAR_0, sizeof(_one_to_n_data));
    if (VAR_1->data != ((void*)0)) {
        VAR_2->data = FUNC_0(VAR_1->data);
        if (VAR_2->data == ((void*)0)) {
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }
    if (VAR_1->data_finish_src != ((void*)0)) {
        VAR_2->data_finish_src = FUNC_0(VAR_1->data_finish_src);
        if (VAR_2->data_finish_src == ((void*)0)) {
            FUNC_1(VAR_2->data);
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }

    return (NpyAuxData *)VAR_2;
}
