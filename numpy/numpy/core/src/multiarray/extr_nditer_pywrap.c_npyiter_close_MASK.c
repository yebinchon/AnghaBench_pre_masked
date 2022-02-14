
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * nested_child; int * iter; } ;
typedef int PyObject ;
typedef int NpyIter ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static PyObject *
FUNC_2(NewNpyArrayIterObject *VAR_1)
{
    NpyIter *VAR_2 = VAR_1->iter;
    int VAR_3;
    if (VAR_1->iter == ((void*)0)) {
        VAR_0;
    }
    VAR_3 = FUNC_0(VAR_2);
    VAR_1->iter = ((void*)0);
    FUNC_1(VAR_1->nested_child);
    VAR_1->nested_child = ((void*)0);
    if (VAR_3 < 0) {
        return ((void*)0);
    }
    VAR_0;
}
