
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char flags; int alignment; int elsize; int * names; int * fields; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_1__**) ;
 int FUNC_2 (int *,TYPE_1__**) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int *,int *) ;
 int * FUNC_9 (long) ;
 int * FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (int *,int,int *) ;
 int * FUNC_14 (char*,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static PyArray_Descr *
FUNC_16(PyObject *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9;
    PyObject *VAR_10;
    PyArray_Descr *VAR_11 = ((void*)0);
    PyArray_Descr *VAR_12;
    PyObject *VAR_13, *VAR_14;
    PyObject *VAR_15 = ((void*)0);
    int VAR_16;
    int VAR_17 = 0;

    char VAR_18 = VAR_3;

    VAR_7 = FUNC_11(VAR_5);




    VAR_13 = FUNC_10(VAR_5, VAR_7-1);
    if (FUNC_5(VAR_13) && FUNC_6(VAR_13) == 0) {
        VAR_7 = VAR_7 - 1;
    }

    VAR_9 = 0;
    if (VAR_7 == 0) {
        return ((void*)0);
    }
    VAR_15 = FUNC_12(VAR_7);
    if (!VAR_15) {
        return ((void*)0);
    }
    VAR_10 = FUNC_7();
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        VAR_14 = FUNC_12(2);
        VAR_13 = FUNC_14("f%d", VAR_8);
        if (VAR_6) {
            VAR_16 = FUNC_1(FUNC_10(VAR_5, VAR_8), &VAR_11);
        }
        else {
            VAR_16 = FUNC_2(FUNC_10(VAR_5, VAR_8), &VAR_11);
        }
        if (VAR_16 == VAR_1) {
            FUNC_15(VAR_14);
            FUNC_15(VAR_13);
            goto fail;
        }
        VAR_18 |= (VAR_11->flags & VAR_2);
        FUNC_13(VAR_14, 0, (PyObject *)VAR_11);
        if (VAR_6) {
            int VAR_19;

            VAR_19 = VAR_11->alignment;
            if (VAR_19 > 1) {
                VAR_9 = FUNC_0(VAR_9, VAR_19);
            }
            VAR_17 = FUNC_4(VAR_17, VAR_19);
        }
        FUNC_13(VAR_14, 1, FUNC_9((long) VAR_9));
        FUNC_8(VAR_10, VAR_13, VAR_14);
        FUNC_15(VAR_14);
        FUNC_13(VAR_15, VAR_8, VAR_13);
        VAR_9 += VAR_11->elsize;
    }
    VAR_12 = FUNC_3(VAR_4);
    VAR_12->fields = VAR_10;
    VAR_12->names = VAR_15;
    VAR_12->flags = VAR_18;
    if (VAR_17 > 1) {
        VAR_9 = FUNC_0(VAR_9, VAR_17);
    }

    if (VAR_6) {
        VAR_12->flags |= VAR_0;
        VAR_12->alignment = VAR_17;
    }
    VAR_12->elsize = VAR_9;
    return VAR_12;

 fail:
    FUNC_15(VAR_15);
    FUNC_15(VAR_10);
    return ((void*)0);
}
