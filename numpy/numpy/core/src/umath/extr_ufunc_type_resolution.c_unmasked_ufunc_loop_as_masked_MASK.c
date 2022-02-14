
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_2__ {int nargs; void* unmasked_innerloopdata; int (* unmasked_innerloop ) (char**,scalar_t__*,scalar_t__*,void*) ;} ;
typedef TYPE_1__ _ufunc_masker_data ;
typedef int (* PyUFuncGenericFunction ) (char**,scalar_t__*,scalar_t__*,void*) ;
typedef int NpyAuxData ;


 char* FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_1(
             char **VAR_0, npy_intp *VAR_1,
             char *VAR_2, npy_intp VAR_3,
             npy_intp VAR_4,
             NpyAuxData *VAR_5)
{
    _ufunc_masker_data *VAR_6;
    int VAR_7, VAR_8;
    PyUFuncGenericFunction VAR_9;
    void *VAR_10;
    npy_intp VAR_11;


    VAR_6 = (_ufunc_masker_data *)VAR_5;
    VAR_9 = VAR_6->unmasked_innerloop;
    VAR_10 = VAR_6->unmasked_innerloopdata;
    VAR_8 = VAR_6->nargs;


    do {

        VAR_2 = FUNC_0(VAR_2, 0, VAR_3, VAR_4, &VAR_11, 1);
        for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
            VAR_0[VAR_7] += VAR_11 * VAR_1[VAR_7];
        }
        VAR_4 -= VAR_11;




        VAR_2 = FUNC_0(VAR_2, 0, VAR_3, VAR_4, &VAR_11, 0);
        VAR_9(VAR_0, &VAR_11, VAR_1,
                                        VAR_10);
        for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
            VAR_0[VAR_7] += VAR_11 * VAR_1[VAR_7];
        }
        VAR_4 -= VAR_11;
    } while (VAR_4 > 0);
}
