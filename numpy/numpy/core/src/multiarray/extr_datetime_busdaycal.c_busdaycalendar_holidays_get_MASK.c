
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_intp ;
typedef int npy_datetime ;
struct TYPE_4__ {int end; int begin; } ;
struct TYPE_5__ {TYPE_1__ holidays; } ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef TYPE_2__ NpyBusDayCalendar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int*,int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static PyObject *
FUNC_4(NpyBusDayCalendar *VAR_2)
{
    PyArrayObject *VAR_3;
    PyArray_Descr *VAR_4;
    npy_intp VAR_5 = VAR_2->holidays.end - VAR_2->holidays.begin;


    VAR_4 = FUNC_2(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_3 = (PyArrayObject *)FUNC_1(1, &VAR_5, VAR_4);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }


    if (VAR_5 > 0) {
        FUNC_3(FUNC_0(VAR_3), VAR_2->holidays.begin,
                    VAR_5 * sizeof(npy_datetime));
    }

    return (PyObject *)VAR_3;
}
