
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; void* data; int * base; } ;
struct TYPE_5__ {scalar_t__ len; void* buf; } ;
typedef scalar_t__ Py_ssize_t ;
typedef TYPE_1__ Py_buffer ;
typedef int PyObject ;
typedef TYPE_2__ PyArrayObject_fields ;
typedef int PyArrayObject ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (int *,void const**,scalar_t__*) ;
 scalar_t__ FUNC_15 (int *,void**,scalar_t__*) ;
 scalar_t__ FUNC_16 (int *,TYPE_1__*,int) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int
FUNC_20(PyArrayObject *VAR_8, PyObject *VAR_9)
{
    void *VAR_10;
    Py_ssize_t VAR_11;
    int VAR_12=1;





    int VAR_13 = FUNC_0("Assigning the 'data' attribute is an "
                        "inherently unsafe operation and will "
                        "be removed in the future.");
    if (VAR_13 < 0) {
        return -1;
    }

    if (VAR_9 == ((void*)0)) {
        FUNC_13(VAR_7,
                "Cannot delete array data");
        return -1;
    }
    if (FUNC_15(VAR_9, &VAR_10, &VAR_11) < 0) {
        FUNC_12();
        VAR_12 = 0;
        if (FUNC_14(VAR_9, (const void **)&VAR_10, &VAR_11) < 0) {
            FUNC_12();
            FUNC_13(VAR_7,
                    "object does not have single-segment buffer interface");
            return -1;
        }
    }

    if (!FUNC_6(VAR_8)) {
        FUNC_13(VAR_7,
                "cannot set single-segment buffer for discontiguous array");
        return -1;
    }
    if (FUNC_7(VAR_8) > VAR_11) {
        FUNC_13(VAR_7, "not enough data for array");
        return -1;
    }
    if (FUNC_5(VAR_8) & VAR_1) {
        FUNC_9(VAR_8);
        FUNC_11(FUNC_3(VAR_8));
    }
    if (FUNC_1(VAR_8)) {
        if ((FUNC_5(VAR_8) & VAR_4) ||
            (FUNC_5(VAR_8) & VAR_2)) {
            FUNC_4((PyArrayObject *)FUNC_1(VAR_8),
                                                VAR_3);
            FUNC_2(VAR_8, VAR_4);
            FUNC_2(VAR_8, VAR_2);
        }
        FUNC_17(FUNC_1(VAR_8));
        ((PyArrayObject_fields *)VAR_8)->base = ((void*)0);
    }
    FUNC_18(VAR_9);
    if (FUNC_8(VAR_8, VAR_9) < 0) {
        return -1;
    }
    ((PyArrayObject_fields *)VAR_8)->data = VAR_10;
    ((PyArrayObject_fields *)VAR_8)->flags = VAR_0;
    if (!VAR_12) {
        FUNC_2(VAR_8, ~VAR_3);
    }
    return 0;
}
