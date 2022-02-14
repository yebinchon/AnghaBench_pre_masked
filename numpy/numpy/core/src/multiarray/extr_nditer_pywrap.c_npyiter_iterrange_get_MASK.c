
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_3__ {int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static PyObject *FUNC_5(NewNpyArrayIterObject *VAR_1)
{
    npy_intp VAR_2 = 0, VAR_3 = 0;
    PyObject *VAR_4;

    if (VAR_1->iter == ((void*)0)) {
        FUNC_1(VAR_0,
                "Iterator is invalid");
        return ((void*)0);
    }

    FUNC_0(VAR_1->iter, &VAR_2, &VAR_3);

    VAR_4 = FUNC_3(2);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_4(VAR_4, 0, FUNC_2(VAR_2));
    FUNC_4(VAR_4, 1, FUNC_2(VAR_3));

    return VAR_4;
}
