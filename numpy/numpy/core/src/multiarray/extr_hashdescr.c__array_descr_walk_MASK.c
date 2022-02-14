
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int subarray; int * fields; int names; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(PyArray_Descr* VAR_1, PyObject *VAR_2)
{
    int VAR_3;

    if (FUNC_4(VAR_1)) {
        return FUNC_1(VAR_1, VAR_2);
    }
    else {
        if(VAR_1->fields != ((void*)0) && VAR_1->fields != VAR_0) {
            VAR_3 = FUNC_2(VAR_1->names, VAR_1->fields, VAR_2);
            if (VAR_3) {
                return -1;
            }
        }
        if(FUNC_0(VAR_1)) {
            VAR_3 = FUNC_3(VAR_1->subarray, VAR_2);
            if (VAR_3) {
                return -1;
            }
        }
    }

    return 0;
}
