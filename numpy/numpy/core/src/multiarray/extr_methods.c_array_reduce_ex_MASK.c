
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ elsize; } ;
struct TYPE_10__ {int * ob_type; } ;
typedef TYPE_1__ PyObject ;
typedef TYPE_2__ PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 TYPE_1__* FUNC_8 (int *,int) ;

__attribute__((used)) static PyObject *
FUNC_9(PyArrayObject *VAR_3, PyObject *VAR_4)
{
    int VAR_5;
    PyArray_Descr *VAR_6 = ((void*)0);

    if (!FUNC_0(VAR_4, "i", &VAR_5)) {
        return ((void*)0);
    }

    VAR_6 = FUNC_1(VAR_3);
    if ((VAR_5 < 5) ||
        (!FUNC_2((PyArrayObject*)VAR_3) &&
         !FUNC_3((PyArrayObject*)VAR_3)) ||
        FUNC_4(VAR_6, VAR_0) ||
        (FUNC_6(((PyObject*)VAR_3)->ob_type, &VAR_1) &&
         ((PyObject*)VAR_3)->ob_type != &VAR_1) ||
        VAR_6->elsize == 0) {




        return FUNC_8(VAR_3, VAR_5);
    }
    else if (VAR_5 == 5) {
        return FUNC_7(VAR_3, VAR_5);
    }
    else {
        FUNC_5(VAR_2,
                     "__reduce_ex__ called with protocol > 5");
        return ((void*)0);
    }
}
