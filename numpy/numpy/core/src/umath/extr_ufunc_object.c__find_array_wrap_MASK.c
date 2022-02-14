
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; int in; } ;
typedef TYPE_1__ ufunc_full_args ;
typedef int PyObject ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int * VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(ufunc_full_args VAR_3, PyObject *VAR_4,
                PyObject **VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    PyObject *VAR_9;
    PyObject *VAR_10 = ((void*)0);





    if (VAR_4 != ((void*)0) && (VAR_9 = FUNC_0(VAR_4,
                                              VAR_2)) != ((void*)0)) {
        if (VAR_9 != VAR_0) {

            goto handle_out;
        }
    }





    VAR_10 = FUNC_4(VAR_3.in, VAR_1);
handle_out:
    if (VAR_3.out == ((void*)0)) {
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
            FUNC_3(VAR_10);
            VAR_5[VAR_8] = VAR_10;
        }
    }
    else {
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
            VAR_5[VAR_8] = FUNC_5(
                FUNC_1(VAR_3.out, VAR_8), VAR_1, VAR_10);
        }
    }

    FUNC_2(VAR_10);
    return;
}
