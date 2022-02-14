
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ arr; } ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_1__ PyArrayFlagsObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(PyArrayFlagsObject *VAR_4, PyObject *VAR_5)
{




    int VAR_6;
    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_2,
                "Cannot delete flags _warn_on_write attribute");
        return -1;
    }
    VAR_6 = FUNC_3(VAR_5);
    if (VAR_6 > 0) {
        if (!(FUNC_1((PyArrayObject*)VAR_4->arr) & VAR_1)) {
            FUNC_2(VAR_3,
                        "cannot set '_warn_on_write' flag when 'writable' is "
                        "False");
            return -1;
        }
        FUNC_0((PyArrayObject*)VAR_4->arr, VAR_0);
    }
    else if (VAR_6 < 0) {
        return -1;
    }
    else {
        FUNC_2(VAR_3,
                        "cannot clear '_warn_on_write', set "
                        "writeable True to clear this private flag");
        return -1;
    }
    return 0;
}
