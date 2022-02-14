
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_uint32 ;
typedef scalar_t__ npy_intp ;
struct TYPE_4__ {int nin; int nout; int* core_offsets; int* core_num_dims; int* core_dim_ixs; int core_signature; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int const FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(PyUFuncObject *VAR_2, PyArrayObject **VAR_3,
                   const int *VAR_4, npy_uint32 *VAR_5,
                   npy_intp *VAR_6, int **VAR_7) {
    int VAR_8;
    int VAR_9 = VAR_2->nin;
    int VAR_10 = VAR_2->nout;
    int VAR_11 = VAR_9 + VAR_10;

    for (VAR_8 = 0; VAR_8 < VAR_11; ++VAR_8) {
        if (VAR_3[VAR_8] != ((void*)0)) {
            int VAR_12;
            int VAR_13 = VAR_2->core_offsets[VAR_8];
            int VAR_14 = FUNC_1(VAR_3[VAR_8]) - VAR_4[VAR_8];
            int VAR_15 = 0;


            FUNC_4(VAR_14 >= 0);







            for (VAR_12 = 0; VAR_12 < VAR_2->core_num_dims[VAR_8]; ++VAR_12) {
                int VAR_16 = VAR_13 + VAR_12;
                int VAR_17 = VAR_2->core_dim_ixs[VAR_16];
                npy_intp VAR_18 = VAR_6[VAR_17];
                npy_intp VAR_19;


                if (VAR_5[VAR_17] & VAR_1) {
                    VAR_19 = 1;
                    VAR_15++;
                }
                else {
                    VAR_19 = FUNC_0(VAR_3[VAR_8],
                             FUNC_3(VAR_8, VAR_14 + VAR_12 - VAR_15));
                }
                if (VAR_6[VAR_17] < 0) {
                    VAR_6[VAR_17] = VAR_19;
                }
                else if (VAR_19 != VAR_18) {
                    FUNC_2(VAR_0,
                            "%s: %s operand %d has a mismatch in its "
                            "core dimension %d, with gufunc "
                            "signature %s (size %zd is different "
                            "from %zd)",
                            FUNC_5(VAR_2), VAR_8 < VAR_9 ? "Input" : "Output",
                            VAR_8 < VAR_9 ? VAR_8 : VAR_8 - VAR_9, VAR_12 - VAR_15,
                            VAR_2->core_signature, VAR_19,
                            VAR_6[VAR_17]);
                    return -1;
                }
            }
        }
    }




    for (VAR_8 = VAR_9; VAR_8 < VAR_11; ++VAR_8) {
        int VAR_20;
        int VAR_21 = VAR_2->core_offsets[VAR_8];

        for (VAR_20 = 0; VAR_20 < VAR_2->core_num_dims[VAR_8]; ++VAR_20) {
            int VAR_22 = VAR_2->core_dim_ixs[VAR_21 + VAR_20];


            if (VAR_6[VAR_22] < 0) {




                FUNC_2(VAR_0,
                        "%s: Output operand %d has core dimension %d "
                        "unspecified, with gufunc signature %s",
                        FUNC_5(VAR_2), VAR_8 - VAR_9, VAR_20,
                        VAR_2->core_signature);
                return -1;
            }
        }
    }

    return 0;
}
