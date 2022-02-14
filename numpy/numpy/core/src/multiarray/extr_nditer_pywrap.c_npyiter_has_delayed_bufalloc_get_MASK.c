
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static PyObject *FUNC_2(NewNpyArrayIterObject *VAR_3)
{
    if (VAR_3->iter == ((void*)0)) {
        FUNC_1(VAR_0,
                "Iterator is invalid");
        return ((void*)0);
    }

    if (FUNC_0(VAR_3->iter)) {
        VAR_2;
    }
    else {
        VAR_1;
    }
}
