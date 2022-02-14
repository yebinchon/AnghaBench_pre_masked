
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* tp_free ) (int *) ;} ;
struct TYPE_3__ {int flags; int nd; int descr; int dimensions; scalar_t__ data; scalar_t__ base; int * weakreflist; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayObject_fields ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 TYPE_2__* FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,char const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(PyArrayObject *VAR_6)
{
    PyArrayObject_fields *VAR_7 = (PyArrayObject_fields *)VAR_6;

    FUNC_13((PyObject*)VAR_6);

    if (VAR_7->weakreflist != ((void*)0)) {
        FUNC_7((PyObject *)VAR_6);
    }
    if (VAR_7->base) {
        int VAR_8;
        if (FUNC_0(VAR_6) & VAR_2)
        {
            char const * VAR_9 = "WRITEBACKIFCOPY detected in array_dealloc. "
                " Required call to PyArray_ResolveWritebackIfCopy or "
                "PyArray_DiscardWritebackIfCopy is missing.";




            FUNC_9(VAR_6);
            FUNC_12(VAR_5, VAR_9);
            VAR_8 = FUNC_2(VAR_6);
            if (VAR_8 < 0)
            {
                FUNC_6();
                FUNC_5();
            }
        }
        if (FUNC_0(VAR_6) & VAR_1) {

            char const * VAR_10 = "UPDATEIFCOPY detected in array_dealloc. "
                " Required call to PyArray_ResolveWritebackIfCopy or "
                "PyArray_DiscardWritebackIfCopy is missing";




            FUNC_9(VAR_6);

            FUNC_12(VAR_4, VAR_10);
            VAR_8 = FUNC_2(VAR_6);
            if (VAR_8 < 0)
            {
                FUNC_6();
                FUNC_5();
            }
        }




        FUNC_11(VAR_7->base);
    }

    if ((VAR_7->flags & VAR_0) && VAR_7->data) {

        if (FUNC_4(VAR_7->descr, VAR_3)) {
            FUNC_3(VAR_6);
        }
        FUNC_14(VAR_7->data, FUNC_1(VAR_6));
    }


    FUNC_15(VAR_7->dimensions, 2 * VAR_7->nd);
    FUNC_8(VAR_7->descr);
    FUNC_10(VAR_6)->tp_free((PyObject *)VAR_6);
}
