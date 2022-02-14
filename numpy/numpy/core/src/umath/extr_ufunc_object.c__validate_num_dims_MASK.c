
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_uint32 ;
struct TYPE_4__ {int nin; int nargs; int* core_offsets; int* core_num_dims; int* core_dim_ixs; int core_signature; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,char*,int,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(PyUFuncObject *VAR_3, PyArrayObject **VAR_4,
                   npy_uint32 *VAR_5,
                   int *VAR_6) {
    int VAR_7, VAR_8;
    int VAR_9 = VAR_3->nin;
    int VAR_10 = VAR_3->nargs;

    for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
        if (VAR_4[VAR_7] != ((void*)0)) {
            int VAR_11 = FUNC_0(VAR_4[VAR_7]);

            if (VAR_11 < VAR_6[VAR_7]) {
                int VAR_12 = VAR_3->core_offsets[VAR_7];

                for (VAR_8 = VAR_12;
                     VAR_8 < VAR_12 + VAR_3->core_num_dims[VAR_7]; VAR_8++) {
                    int VAR_13 = VAR_3->core_dim_ixs[VAR_8];
                    if ((VAR_5[VAR_13] &
                         VAR_1)) {
                        int VAR_14, VAR_15, VAR_16;





                        VAR_5[VAR_13] |= VAR_2;
                        VAR_5[VAR_13] ^= VAR_1;





                        for (VAR_14 = 0, VAR_16=0; VAR_14 < VAR_10; VAR_14++) {
                            for (VAR_15 = 0; VAR_15 < VAR_3->core_num_dims[VAR_14]; VAR_15++) {
                                if (VAR_3->core_dim_ixs[VAR_16++] == VAR_13) {
                                    VAR_6[VAR_14]--;
                                }
                            }
                        }
                        if (VAR_11 == VAR_6[VAR_7]) {
                            break;
                        }
                    }
                }
                if (VAR_11 < VAR_6[VAR_7]) {
                    FUNC_1(VAR_0,
                         "%s: %s operand %d does not have enough "
                         "dimensions (has %d, gufunc core with "
                         "signature %s requires %d)",
                         FUNC_2(VAR_3),
                         VAR_7 < VAR_9 ? "Input" : "Output",
                         VAR_7 < VAR_9 ? VAR_7 : VAR_7 - VAR_9, FUNC_0(VAR_4[VAR_7]),
                         VAR_3->core_signature, VAR_6[VAR_7]);
                    return -1;
                }
            }
        }
    }
    return 0;
}
