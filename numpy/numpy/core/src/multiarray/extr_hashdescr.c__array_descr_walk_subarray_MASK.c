
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int * shape; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_ArrayDescr ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(PyArray_ArrayDescr* VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3;
    Py_ssize_t VAR_4;
    int VAR_5;




    if (FUNC_3(VAR_1->shape)) {
        for(VAR_4 = 0; VAR_4 < FUNC_5(VAR_1->shape); ++VAR_4) {
            VAR_3 = FUNC_4(VAR_1->shape, VAR_4);
            if (VAR_3 == ((void*)0)) {
                FUNC_0(VAR_0,
                        "(Hash) Error while getting shape item of subarray dtype ???");
                return -1;
            }
            FUNC_2(VAR_2, VAR_3);
        }
    }
    else if (FUNC_1(VAR_1->shape)) {
        FUNC_2(VAR_2, VAR_1->shape);
    }
    else {
        FUNC_0(VAR_0,
                "(Hash) Shape of subarray dtype neither a tuple or int ???");
        return -1;
    }

    FUNC_7(VAR_1->base);
    VAR_5 = FUNC_8(VAR_1->base, VAR_2);
    FUNC_6(VAR_1->base);

    return VAR_5;
}
