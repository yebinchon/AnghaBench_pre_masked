
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * metadata; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_1(PyArray_Descr *VAR_1)
{
    if (VAR_1->metadata == ((void*)0)) {
        VAR_0;
    }
    return FUNC_0(VAR_1->metadata);
}
