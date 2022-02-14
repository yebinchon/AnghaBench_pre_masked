
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_15__ {int elsize; } ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_1__ PyArray_Descr ;
typedef int NpyAuxData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,int ,TYPE_1__*,int **,int **) ;
 scalar_t__ FUNC_4 (int,int ,int ,TYPE_1__*,TYPE_1__*,int ,int **,int **,int*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int,int ,int ,TYPE_1__*,TYPE_1__*,int **,int **) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int *,int *,int *,int *,int *,int ,int **,int **) ;

__attribute__((used)) static int
FUNC_9(int VAR_4,
                            npy_intp VAR_5, npy_intp VAR_6,
                            PyArray_Descr *VAR_7, PyArray_Descr *VAR_8,
                            PyArray_StridedUnaryOp **VAR_9,
                            NpyAuxData **VAR_10,
                            int *VAR_11)
{
    NpyAuxData *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    PyArray_StridedUnaryOp *VAR_15, *VAR_16, *VAR_17;
    PyArray_Descr *VAR_18;


    VAR_18 = FUNC_2(VAR_2);
    VAR_18 = FUNC_1(((void*)0), VAR_8, VAR_18);
    if (VAR_18 == ((void*)0)) {
        return VAR_0;
    }


    if (FUNC_3(VAR_4,
                            VAR_5, VAR_7->elsize,
                            VAR_7,
                            &VAR_16, &VAR_13) != VAR_3) {
        FUNC_6(VAR_18);
        return VAR_0;
    }


    if (FUNC_7(1,
                            VAR_7->elsize, VAR_18->elsize,
                            VAR_7, VAR_18,
                            &VAR_15, &VAR_12) != VAR_3) {
        FUNC_6(VAR_18);
        FUNC_0(VAR_13);
        return VAR_0;
    }


    if (FUNC_4(VAR_4,
                            VAR_18->elsize, VAR_6,
                            VAR_18, VAR_8,
                            0,
                            &VAR_17, &VAR_14,
                            VAR_11) != VAR_3) {
        FUNC_6(VAR_18);
        FUNC_0(VAR_13);
        FUNC_0(VAR_12);
        return VAR_0;
    }


    if (FUNC_8(
                        VAR_7->elsize, VAR_18->elsize,
                        VAR_16, VAR_13,
                        VAR_17, VAR_14,
                        VAR_15, VAR_12,
                        FUNC_5(VAR_18, VAR_1),
                        VAR_9, VAR_10) != VAR_3) {
        FUNC_0(VAR_12);
        FUNC_0(VAR_13);
        FUNC_0(VAR_14);
        return VAR_0;
    }

    FUNC_6(VAR_18);

    return VAR_3;
}
