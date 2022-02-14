
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; int * in; } ;
typedef TYPE_1__ ufunc_full_args ;
typedef int npy_intp ;
typedef int PyObject ;


 int * FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * VAR_0 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(
        ufunc_full_args *VAR_2,
        npy_intp VAR_3, npy_intp VAR_4,
        PyObject *VAR_5, PyObject *VAR_6)
{
    PyObject *VAR_7 = ((void*)0);
    npy_intp VAR_8 = FUNC_3(VAR_5);
    npy_intp VAR_9;


    FUNC_10(VAR_3 <= VAR_8 && VAR_8 <= VAR_3 + VAR_4);


    VAR_2->in = ((void*)0);
    VAR_2->out = ((void*)0);


    VAR_2->in = FUNC_4(VAR_5, 0, VAR_3);
    if (VAR_2->in == ((void*)0)) {
        goto fail;
    }


    VAR_7 = VAR_6 ? FUNC_0(VAR_6, VAR_1) : ((void*)0);

    if (VAR_7 != ((void*)0)) {
        FUNC_10(VAR_8 == VAR_3);
        if (VAR_7 == VAR_0) {
            return 0;
        }
        else if (FUNC_1(VAR_7)) {
            FUNC_10(FUNC_3(VAR_7) == VAR_4);
            if (FUNC_11(VAR_7)) {
                return 0;
            }
            FUNC_8(VAR_7);
            VAR_2->out = VAR_7;
            return 0;
        }
        else {

            VAR_2->out = FUNC_5(VAR_4);
            if (VAR_2->out == ((void*)0)) {
                goto fail;
            }
            FUNC_8(VAR_7);
            FUNC_6(VAR_2->out, 0, VAR_7);
            for (VAR_9 = 1; VAR_9 < VAR_4; ++VAR_9) {
                FUNC_8(VAR_0);
                FUNC_6(VAR_2->out, VAR_9, VAR_0);
            }
            return 0;
        }
    }


    if (VAR_8 == VAR_3) {
        return 0;
    }

    VAR_2->out = FUNC_5(VAR_4);
    if (VAR_2->out == ((void*)0)) {
        goto fail;
    }
    for (VAR_9 = VAR_3; VAR_9 < VAR_8; ++VAR_9) {
        PyObject *VAR_10 = FUNC_2(VAR_5, VAR_9);
        FUNC_8(VAR_10);
        FUNC_6(VAR_2->out, VAR_9 - VAR_3, VAR_10);
    }
    for (VAR_9 = VAR_8; VAR_9 < VAR_3 + VAR_4; ++VAR_9) {
        FUNC_8(VAR_0);
        FUNC_6(VAR_2->out, VAR_9 - VAR_3, VAR_0);
    }


    if (FUNC_11(VAR_2->out)) {
        FUNC_7(VAR_2->out);
        VAR_2->out = ((void*)0);
    }
    return 0;

fail:
    FUNC_9(VAR_2->in);
    FUNC_9(VAR_2->out);
    return -1;
}
