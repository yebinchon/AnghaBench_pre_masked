
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_2(NewNpyArrayIterObject *VAR_1)
{
    if (VAR_1->iter == ((void*)0)) {
        FUNC_0(VAR_0, "operation on non-initialized iterator");
        return ((void*)0);
    }
    FUNC_1(VAR_1);
    return (PyObject *)VAR_1;
}
