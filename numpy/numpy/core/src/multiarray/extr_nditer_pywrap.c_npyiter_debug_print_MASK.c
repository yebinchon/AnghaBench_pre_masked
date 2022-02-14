
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static PyObject *
FUNC_2(NewNpyArrayIterObject *VAR_1)
{
    if (VAR_1->iter != ((void*)0)) {
        FUNC_0(VAR_1->iter);
    }
    else {
        FUNC_1("Iterator: (nil)\n");
    }

    VAR_0;
}
