
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_intp ;
typedef int _subarray_broadcast_offsetrun ;
struct TYPE_4__ {int run_count; int * data_decsrcref; int * data; int * data_decdstref; } ;
typedef TYPE_1__ _subarray_broadcast_data ;
typedef int NpyAuxData ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_5( NpyAuxData *VAR_0)
{
    _subarray_broadcast_data *VAR_1 = (_subarray_broadcast_data *)VAR_0;
    _subarray_broadcast_data *VAR_2;
    npy_intp VAR_3 = VAR_1->run_count, VAR_4;

    VAR_4 = sizeof(_subarray_broadcast_data) +
                        VAR_3*sizeof(_subarray_broadcast_offsetrun);


    VAR_2 = (_subarray_broadcast_data *)FUNC_3(VAR_4);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_4(VAR_2, VAR_0, VAR_4);
    if (VAR_1->data != ((void*)0)) {
        VAR_2->data = FUNC_0(VAR_1->data);
        if (VAR_2->data == ((void*)0)) {
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }
    if (VAR_1->data_decsrcref != ((void*)0)) {
        VAR_2->data_decsrcref = FUNC_0(VAR_1->data_decsrcref);
        if (VAR_2->data_decsrcref == ((void*)0)) {
            FUNC_1(VAR_2->data);
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }
    if (VAR_1->data_decdstref != ((void*)0)) {
        VAR_2->data_decdstref = FUNC_0(VAR_1->data_decdstref);
        if (VAR_2->data_decdstref == ((void*)0)) {
            FUNC_1(VAR_2->data);
            FUNC_1(VAR_2->data_decsrcref);
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }

    return (NpyAuxData *)VAR_2;
}
