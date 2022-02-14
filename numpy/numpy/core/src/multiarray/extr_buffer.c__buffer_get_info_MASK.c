
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _buffer_info_t ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * VAR_0 ;
 scalar_t__ FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;

__attribute__((used)) static _buffer_info_t*
FUNC_15(PyObject *VAR_1)
{
    PyObject *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    _buffer_info_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (VAR_0 == ((void*)0)) {
        VAR_0 = FUNC_1();
        if (VAR_0 == ((void*)0)) {
            return ((void*)0);
        }
    }


    VAR_5 = FUNC_14(VAR_1);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_2 = FUNC_8((void*)VAR_1);
    if (VAR_2 == ((void*)0)) {
        goto fail;
    }
    VAR_3 = FUNC_0(VAR_0, VAR_2);

    if (VAR_3 != ((void*)0)) {
        FUNC_10(VAR_3);
        if (FUNC_4(VAR_3) > 0) {
            VAR_4 = FUNC_5(VAR_3, FUNC_4(VAR_3) - 1);
            VAR_6 = (_buffer_info_t*)FUNC_7(VAR_4);

            if (FUNC_12(VAR_5, VAR_6) == 0) {
                FUNC_13(VAR_5);
                VAR_5 = VAR_6;
            }
        }
    }
    else {
        VAR_3 = FUNC_6(0);
        if (VAR_3 == ((void*)0)) {
            goto fail;
        }
        if (FUNC_2(VAR_0, VAR_2, VAR_3) != 0) {
            goto fail;
        }
    }

    if (VAR_5 != VAR_6) {

        VAR_4 = FUNC_8((void*)VAR_5);
        if (VAR_4 == ((void*)0)) {
            goto fail;
        }
        FUNC_3(VAR_3, VAR_4);
        FUNC_9(VAR_4);
    }

    FUNC_9(VAR_3);
    FUNC_9(VAR_2);
    return VAR_5;

fail:
    if (VAR_5 != ((void*)0) && VAR_5 != VAR_6) {
        FUNC_13(VAR_5);
    }
    FUNC_11(VAR_3);
    FUNC_11(VAR_2);
    return ((void*)0);
}
