
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_3__ {size_t nin; size_t nout; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(PyUFuncObject *VAR_0,
                        PyArrayObject **VAR_1,
                        PyArray_Descr **VAR_2,
                        npy_intp VAR_3)
{
    npy_intp VAR_4, VAR_5 = VAR_0->nin, VAR_6 = VAR_5 + VAR_0->nout;

    for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {




        if (VAR_1[VAR_4] != ((void*)0) &&
                (!FUNC_4(VAR_1[VAR_4]) ||
                !FUNC_3(VAR_2[VAR_4], FUNC_1(VAR_1[VAR_4]))
                                        )) {





            if (VAR_4 < VAR_5 && (FUNC_5(VAR_1[VAR_4]) == 0 ||
                    (FUNC_5(VAR_1[VAR_4]) == 1 &&
                     FUNC_2(VAR_1[VAR_4],0) <= VAR_3))) {
                PyArrayObject *VAR_7;
                FUNC_7(VAR_2[VAR_4]);
                VAR_7 = (PyArrayObject *)
                            FUNC_0(VAR_1[VAR_4], VAR_2[VAR_4], 0);
                if (VAR_7 == ((void*)0)) {
                    return -1;
                }
                FUNC_6(VAR_1[VAR_4]);
                VAR_1[VAR_4] = VAR_7;
            }
            else {
                return 0;
            }
        }
    }

    return 1;
}
