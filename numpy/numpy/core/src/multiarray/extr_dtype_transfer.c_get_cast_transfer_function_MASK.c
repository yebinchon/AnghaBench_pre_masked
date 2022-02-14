
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_12__ {int elsize; } ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_1__ PyArray_Descr ;
typedef int NpyAuxData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ,int ,TYPE_1__*,int **,int **) ;
 scalar_t__ FUNC_2 (int,int ,int ,TYPE_1__*,TYPE_1__*,int,int **,int **,int*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int ,int ,TYPE_1__*,TYPE_1__*,int,int **,int **,int*,int*) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int *,int *,int *,int *,int *,int ,int **,int **) ;

__attribute__((used)) static int
FUNC_9(int VAR_3,
                            npy_intp VAR_4, npy_intp VAR_5,
                            PyArray_Descr *VAR_6, PyArray_Descr *VAR_7,
                            int VAR_8,
                            PyArray_StridedUnaryOp **VAR_9,
                            NpyAuxData **VAR_10,
                            int *VAR_11)
{
    PyArray_StridedUnaryOp *VAR_12;
    NpyAuxData *VAR_13, *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    int VAR_16 = 0;
    npy_intp VAR_17 = VAR_6->elsize,
            VAR_18 = VAR_7->elsize;

    if (FUNC_7(VAR_3,
                            VAR_4, VAR_5,
                            VAR_6, VAR_7,
                            VAR_8,
                            &VAR_12,
                            &VAR_13,
                            VAR_11,
                            &VAR_16) != VAR_2) {
        return VAR_0;
    }





    if (!VAR_16) {
        *VAR_9 = VAR_12;
        *VAR_10 = VAR_13;

        return VAR_2;
    }

    else {
        PyArray_StridedUnaryOp *VAR_19, *VAR_20;


        FUNC_1(VAR_3,
                                VAR_4, VAR_17,
                                VAR_6,
                                &VAR_19, &VAR_14);

        if (!FUNC_5(VAR_7)) {

            FUNC_1(VAR_3,
                                    VAR_18, VAR_5,
                                    VAR_7,
                                    &VAR_20, &VAR_15);
        }
        else {





            FUNC_6(FUNC_4(VAR_7));

            FUNC_6(*VAR_11);

            if (FUNC_2(
                    VAR_3, VAR_18, VAR_5,
                    VAR_7, VAR_7, 1,
                    &VAR_20, &VAR_15, VAR_11) != VAR_2) {
                return VAR_0;
            }
        }

        if (VAR_20 == ((void*)0) || VAR_19 == ((void*)0)) {
            FUNC_0(VAR_13);
            FUNC_0(VAR_14);
            FUNC_0(VAR_15);
            return VAR_0;
        }

        *VAR_9 = VAR_12;


        if (FUNC_8(
                            VAR_17, VAR_18,
                            VAR_19, VAR_14,
                            VAR_20, VAR_15,
                            VAR_12, VAR_13,
                            FUNC_3(VAR_7, VAR_1),
                            VAR_9, VAR_10) != VAR_2) {
            FUNC_0(VAR_13);
            FUNC_0(VAR_14);
            FUNC_0(VAR_15);
            return VAR_0;
        }

        return VAR_2;
    }
}
