
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_4__ {int * iter; scalar_t__ finished; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_8(NewNpyArrayIterObject *VAR_2, Py_ssize_t VAR_3,
                Py_ssize_t VAR_4, PyObject *VAR_5)
{
    npy_intp VAR_6;
    Py_ssize_t VAR_7;

    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_0,
                "Cannot delete iterator elements");
        return -1;
    }

    if (VAR_2->iter == ((void*)0) || VAR_2->finished) {
        FUNC_2(VAR_1,
                "Iterator is past the end");
        return -1;
    }

    if (FUNC_1(VAR_2->iter)) {
        FUNC_2(VAR_1,
                "Iterator construction used delayed buffer allocation, "
                "and no reset has been done yet");
        return -1;
    }
    VAR_6 = FUNC_0(VAR_2->iter);
    if (VAR_3 < 0) {
        VAR_3 = 0;
    }
    else if (VAR_3 >= VAR_6) {
        VAR_3 = VAR_6-1;
    }
    if (VAR_4 < VAR_3) {
        VAR_4 = VAR_3;
    }
    else if (VAR_4 > VAR_6) {
        VAR_4 = VAR_6;
    }

    if (!FUNC_3(VAR_5) || FUNC_5(VAR_5) != VAR_4-VAR_3) {
        FUNC_2(VAR_1,
                "Wrong size to assign to iterator slice");
        return -1;
    }

    for (VAR_7 = VAR_3; VAR_7 < VAR_4 ; ++VAR_7) {
        PyObject *VAR_8 = FUNC_4(VAR_5, VAR_7-VAR_3);
        if (VAR_8 == ((void*)0)) {
            return -1;
        }
        if (FUNC_7(VAR_2, VAR_7, VAR_8) < 0) {
            FUNC_6(VAR_8);
            return -1;
        }
        FUNC_6(VAR_8);
    }

    return 0;
}
