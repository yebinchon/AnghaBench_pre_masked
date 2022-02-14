
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type_num; } ;
struct TYPE_5__ {int nin; int nout; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 TYPE_3__* FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(PyUFuncObject *VAR_0, PyArrayObject **VAR_1,
                    PyArray_Descr **VAR_2,
                    int *VAR_3, PyArray_Descr **VAR_4)
{
    int VAR_5, VAR_6 = VAR_0->nin, VAR_7 = VAR_6 + VAR_0->nout;







    for (VAR_5 = 0; VAR_5 < VAR_7; ++VAR_5) {
        if (VAR_4 != ((void*)0)) {
            VAR_2[VAR_5] = VAR_4[VAR_5];
            FUNC_3(VAR_2[VAR_5]);




        }
        else if (VAR_1[VAR_5] != ((void*)0) &&
                 FUNC_0(VAR_1[VAR_5])->type_num == VAR_3[VAR_5]) {
            VAR_2[VAR_5] = FUNC_4(FUNC_0(VAR_1[VAR_5]));
        }




        else if (VAR_5 >= VAR_6 && VAR_1[0] != ((void*)0) &&
                            FUNC_0(VAR_1[0])->type_num == VAR_3[VAR_5]) {
            VAR_2[VAR_5] = FUNC_4(FUNC_0(VAR_1[0]));
        }

        else {
            VAR_2[VAR_5] = FUNC_1(VAR_3[VAR_5]);
        }

        if (VAR_2[VAR_5] == ((void*)0)) {
            goto fail;
        }
    }

    return 0;

fail:
    while (--VAR_5 >= 0) {
        FUNC_2(VAR_2[VAR_5]);
        VAR_2[VAR_5] = ((void*)0);
    }
    return -1;
}
