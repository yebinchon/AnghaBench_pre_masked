
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* doc; int rank; int * data; int type; int name; } ;
struct TYPE_7__ {int type; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_2__ FortranDataDef ;


 TYPE_1__* FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int * FUNC_5 (char*,int) ;
 int * FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,int,TYPE_2__) ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static PyObject *
FUNC_12(FortranDataDef VAR_1)
{
    char *VAR_2, *VAR_3;
    PyObject *VAR_4 = ((void*)0);
    Py_ssize_t VAR_5, VAR_6, VAR_7 = 100;

    if (VAR_1.doc != ((void*)0)) {
        VAR_7 += FUNC_11(VAR_1.doc);
    }
    VAR_6 = VAR_7;
    VAR_2 = VAR_3 = (char *)FUNC_3(VAR_7);
    if (VAR_2 == ((void*)0)) {
        return FUNC_1();
    }

    if (VAR_1.rank == -1) {
        if (VAR_1.doc) {
            VAR_5 = FUNC_11(VAR_1.doc);
            if (VAR_5 > VAR_7) {
                goto fail;
            }
            FUNC_10(VAR_3, VAR_1.doc, VAR_5);
            VAR_3 += VAR_5;
            VAR_7 -= VAR_5;
        }
        else {
            VAR_5 = FUNC_4(VAR_3, VAR_7, "%s - no docs available", VAR_1.name);
            if (VAR_5 < 0 || VAR_5 >= VAR_7) {
                goto fail;
            }
            VAR_3 += VAR_5;
            VAR_7 -= VAR_5;
        }
    }
    else {
        PyArray_Descr *VAR_8 = FUNC_0(VAR_1.type);
        VAR_5 = FUNC_4(VAR_3, VAR_7, "'%c'-", VAR_8->type);
        FUNC_7(VAR_8);
        if (VAR_5 < 0 || VAR_5 >= VAR_7) {
            goto fail;
        }
        VAR_3 += VAR_5;
        VAR_7 -= VAR_5;

        if (VAR_1.data == ((void*)0)) {
            VAR_5 = FUNC_8(VAR_3, VAR_7, VAR_1) == -1;
            if (VAR_5 < 0) {
                goto fail;
            }
            VAR_3 += VAR_5;
            VAR_7 -= VAR_5;
        }
        else if (VAR_1.rank > 0) {
            VAR_5 = FUNC_8(VAR_3, VAR_7, VAR_1);
            if (VAR_5 < 0) {
                goto fail;
            }
            VAR_3 += VAR_5;
            VAR_7 -= VAR_5;
        }
        else {
            VAR_5 = FUNC_11("scalar");
            if (VAR_7 < VAR_5) {
                goto fail;
            }
            FUNC_10(VAR_3, "scalar", VAR_5);
            VAR_3 += VAR_5;
            VAR_7 -= VAR_5;
        }
    }
    if (VAR_7 <= 1) {
        goto fail;
    }
    *VAR_3++ = '\n';
    VAR_7--;





    VAR_4 = FUNC_5(VAR_2, VAR_3 - VAR_2);


    FUNC_2(VAR_2);
    return VAR_4;

 fail:
    FUNC_9(VAR_0, "fortranobject.c: fortran_doc: len(p)=%d>%d=size:"
                    " too long docstring required, increase size\n",
            VAR_3 - VAR_2, VAR_6);
    FUNC_2(VAR_2);
    return ((void*)0);
}
