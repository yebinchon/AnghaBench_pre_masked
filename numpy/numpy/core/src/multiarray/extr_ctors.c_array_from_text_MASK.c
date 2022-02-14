
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int (* skip_separator ) (void**,char*,void*) ;
typedef scalar_t__ npy_intp ;
typedef int (* next_element ) (void**,char*,TYPE_1__*,void*) ;
struct TYPE_14__ {char* data; } ;
struct TYPE_13__ {scalar_t__ elsize; } ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_3__ PyArrayObject_fields ;
typedef TYPE_1__ PyArrayObject ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (TYPE_1__*) ;
 size_t* FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (size_t,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int,scalar_t__*,int *,int *,int ,int *) ;
 int VAR_3 ;
 char* FUNC_5 (char*,size_t const) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;

__attribute__((used)) static PyArrayObject *
FUNC_12(PyArray_Descr *VAR_4, npy_intp VAR_5, char *VAR_6, size_t *VAR_7,
                void *VAR_8, next_element VAR_9, skip_separator VAR_10,
                void *VAR_11)
{
    PyArrayObject *VAR_12;
    npy_intp VAR_13;
    char *VAR_14, *VAR_15, *VAR_16;
    int VAR_17 = 0;
    int VAR_18;
    npy_intp VAR_19 = 0;
    npy_intp VAR_20;
    npy_intp VAR_21, VAR_22;

    VAR_20 = (VAR_5 >= 0) ? VAR_5 : VAR_0;





    FUNC_9(VAR_4);

    VAR_12 = (PyArrayObject *)
        FUNC_4(&VAR_3, VAR_4, 1, &VAR_20,
                             ((void*)0), ((void*)0), 0, ((void*)0));
    if (VAR_12 == ((void*)0)) {
        FUNC_8(VAR_4);
        return ((void*)0);
    }

    VAR_15 = FUNC_11(VAR_6);
    if (VAR_15 == ((void*)0)) {
        VAR_17 = 1;
        goto fail;
    }

    VAR_1;
    VAR_22 = VAR_21 = VAR_20 * VAR_4->elsize;
    VAR_14 = FUNC_1(VAR_12);
    for (VAR_13 = 0; VAR_5 < 0 || VAR_13 < VAR_5; VAR_13++) {
        VAR_18 = VAR_9(&VAR_8, VAR_14, VAR_4, VAR_11);
        if (VAR_18 < 0) {
            break;
        }
        *VAR_7 += 1;
        VAR_19 += 1;
        VAR_14 += VAR_4->elsize;
        if (VAR_5 < 0 && VAR_19 == VAR_20) {
            VAR_22 += VAR_21;
            VAR_16 = FUNC_5(FUNC_1(VAR_12), VAR_22);
            if (VAR_16 == ((void*)0)) {
                VAR_17 = 1;
                break;
            }
            ((PyArrayObject_fields *)VAR_12)->data = VAR_16;
            VAR_14 = VAR_16 + (VAR_22 - VAR_21);
            VAR_19 = 0;
        }
        VAR_18 = VAR_10(&VAR_8, VAR_15, VAR_11);
        if (VAR_18 < 0) {
            if (VAR_5 == VAR_13 + 1) {

                VAR_18 = -1;
            }
            break;
        }
    }
    if (VAR_5 < 0) {
        const size_t VAR_23 = FUNC_3(*VAR_7,1)*VAR_4->elsize;

        if (VAR_23 != 0) {
            VAR_16 = FUNC_5(FUNC_1(VAR_12), VAR_23);
            if (VAR_16 == ((void*)0)) {
                VAR_17 = 1;
            }
            else {
                FUNC_2(VAR_12)[0] = *VAR_7;
                ((PyArrayObject_fields *)VAR_12)->data = VAR_16;
            }
        }
    }
    VAR_2;

    FUNC_10(VAR_15);

    if (VAR_18 == -2) {
        if (FUNC_7()) {

            FUNC_8(VAR_12);
            FUNC_8(VAR_4);
            return ((void*)0);
        }

        if (FUNC_0(
                "string or file could not be read to its end due to unmatched "
                "data; this will raise a ValueError in the future.") < 0) {
            goto fail;
        }
    }

fail:
    FUNC_8(VAR_4);
    if (VAR_17 == 1) {
        FUNC_6();
    }
    if (FUNC_7()) {
        FUNC_8(VAR_12);
        return ((void*)0);
    }
    return VAR_12;
}
