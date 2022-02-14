
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npyiter_opitflags ;
typedef int npy_uint32 ;
typedef int npy_int8 ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int **,char**,int *,int **,int,int,int *) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, PyArrayObject **VAR_4,
                    PyArrayObject **VAR_5,
                    char **VAR_6,
                    PyArray_Descr **VAR_7,
                    PyArray_Descr **VAR_8,
                    npy_uint32 VAR_9,
                    npy_uint32 *VAR_10, npyiter_opitflags *VAR_11,
                    npy_int8 *VAR_12)
{
    int VAR_13, VAR_14;
    npy_int8 VAR_15 = -1;
    int VAR_16 = 0;




    for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
        VAR_5[VAR_13] = VAR_4[VAR_13];
        FUNC_2(VAR_5[VAR_13]);
        VAR_8[VAR_13] = ((void*)0);


        if (!FUNC_3(VAR_10[VAR_13], &VAR_11[VAR_13])) {
            goto fail_iop;
        }


        if ((VAR_10[VAR_13] & VAR_0) != 0) {
            if (VAR_15 != -1) {
                FUNC_0(VAR_2,
                        "Only one iterator operand may receive an "
                        "ARRAYMASK flag");
                goto fail_iop;
            }

            VAR_15 = VAR_13;
            *VAR_12 = VAR_13;
        }

        if (VAR_10[VAR_13] & VAR_1) {
            VAR_16 = 1;
        }





        if (!FUNC_4(&VAR_5[VAR_13],
                        &VAR_6[VAR_13],
                        VAR_7 ? VAR_7[VAR_13] : ((void*)0),
                        &VAR_8[VAR_13],
                        VAR_9,
                        VAR_10[VAR_13], &VAR_11[VAR_13])) {
            goto fail_iop;
        }
    }


    if (VAR_5[0] == ((void*)0)) {
        int VAR_17 = 1;
        for (VAR_13 = 1; VAR_13 < VAR_3; ++VAR_13) {
            if (VAR_5[VAR_13] != ((void*)0)) {
                VAR_17 = 0;
                break;
            }
        }
        if (VAR_17) {
            FUNC_0(VAR_2,
                    "At least one iterator operand must be non-NULL");
            goto fail_nop;
        }
    }

    if (VAR_16 && VAR_15 < 0) {
        FUNC_0(VAR_2,
                "An iterator operand was flagged as WRITEMASKED, "
                "but no ARRAYMASK operand was given to supply "
                "the mask");
        goto fail_nop;
    }
    else if (!VAR_16 && VAR_15 >= 0) {
        FUNC_0(VAR_2,
                "An iterator operand was flagged as the ARRAYMASK, "
                "but no WRITEMASKED operands were given to use "
                "the mask");
        goto fail_nop;
    }

    return 1;

  fail_nop:
    VAR_13 = VAR_3 - 1;
  fail_iop:
    for (VAR_14 = 0; VAR_14 < VAR_13+1; ++VAR_14) {
        FUNC_1(VAR_5[VAR_14]);
        FUNC_1(VAR_8[VAR_14]);
    }
    return 0;
}
