
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_3__ {int * iter; scalar_t__ finished; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static PyObject *FUNC_4(NewNpyArrayIterObject *VAR_1)
{
    if (VAR_1->iter == ((void*)0) || VAR_1->finished) {
        FUNC_2(VAR_0,
                "Iterator is past the end");
        return ((void*)0);
    }

    if (FUNC_1(VAR_1->iter)) {
        npy_intp VAR_2 = *FUNC_0(VAR_1->iter);
        return FUNC_3(VAR_2);
    }
    else {
        FUNC_2(VAR_0,
                "Iterator does not have an index");
        return ((void*)0);
    }
}
