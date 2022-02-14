
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; int in; } ;
typedef TYPE_1__ ufunc_full_args ;
typedef int PyObject ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(ufunc_full_args VAR_1,
                    PyObject **VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    PyObject *VAR_6;





    VAR_6 = FUNC_3(VAR_1.in, VAR_0);
    if (VAR_1.out == ((void*)0)) {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            FUNC_2(VAR_6);
            VAR_2[VAR_5] = VAR_6;
        }
    }
    else {
        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            VAR_2[VAR_5] = FUNC_4(
                FUNC_0(VAR_1.out, VAR_5), VAR_0, VAR_6);
        }
    }
    FUNC_1(VAR_6);
    return;
}
