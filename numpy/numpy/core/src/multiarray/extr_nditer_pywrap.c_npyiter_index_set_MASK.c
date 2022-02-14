
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_4__ {scalar_t__ finished; scalar_t__ started; int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(NewNpyArrayIterObject *VAR_3, PyObject *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_1,
                "Cannot delete nditer index");
        return -1;
    }
    if (VAR_3->iter == ((void*)0)) {
        FUNC_2(VAR_2,
                "Iterator is invalid");
        return -1;
    }

    if (FUNC_1(VAR_3->iter)) {
        npy_intp VAR_5;
        VAR_5 = FUNC_3(VAR_4);
        if (FUNC_4(VAR_5)) {
            return -1;
        }
        if (FUNC_0(VAR_3->iter, VAR_5) != VAR_0) {
            return -1;
        }
        VAR_3->started = 0;
        VAR_3->finished = 0;


        if (FUNC_5(VAR_3) != VAR_0) {
            return -1;
        }

        return 0;
    }
    else {
        FUNC_2(VAR_2,
                "Iterator does not have an index");
        return -1;
    }
}
