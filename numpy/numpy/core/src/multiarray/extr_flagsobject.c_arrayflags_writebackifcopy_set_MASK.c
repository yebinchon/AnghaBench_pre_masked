
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * arr; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayFlagsObject ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,char*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(PyArrayFlagsObject *VAR_5, PyObject *VAR_6)
{
    PyObject *VAR_7;

    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_0,
                "Cannot delete flags writebackifcopy attribute");
        return -1;
    }
    if (VAR_5->arr == ((void*)0)) {
        FUNC_0(VAR_1,
                "Cannot set flags on array scalars.");
        return -1;
    }
    VAR_7 = FUNC_1(VAR_5->arr, "setflags", "OOO", VAR_3, VAR_3,
                              (FUNC_2(VAR_6) ? VAR_4 : VAR_2));
    if (VAR_7 == ((void*)0)) {
        return -1;
    }
    FUNC_3(VAR_7);
    return 0;
}
