
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef size_t npy_intp ;
typedef int PyObject ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(PyObject *VAR_1,
                         npy_uint32 *VAR_2, npy_intp VAR_3)
{
    npy_intp VAR_4;

    if (!FUNC_6(VAR_1) && !FUNC_3(VAR_1)) {
        FUNC_2(VAR_0,
                "op_flags must be a tuple or array of per-op flag-tuples");
        return 0;
    }

    if (FUNC_5(VAR_1) != VAR_3) {
        goto try_single_flags;
    }

    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
        PyObject *VAR_5 = FUNC_4(VAR_1, VAR_4);
        if (VAR_5 == ((void*)0)) {
            return 0;
        }

        if (VAR_4 == 0 && (FUNC_1(VAR_5) || FUNC_7(VAR_5))) {
            FUNC_8(VAR_5);
            goto try_single_flags;
        }
        if (FUNC_0(VAR_5,
                        &VAR_2[VAR_4]) != 1) {
            FUNC_8(VAR_5);
            return 0;
        }

        FUNC_8(VAR_5);
    }

    return 1;

try_single_flags:
    if (FUNC_0(VAR_1,
                        &VAR_2[0]) != 1) {
        return 0;
    }

    for (VAR_4 = 1; VAR_4 < VAR_3; ++VAR_4) {
        VAR_2[VAR_4] = VAR_2[0];
    }

    return 1;
}
