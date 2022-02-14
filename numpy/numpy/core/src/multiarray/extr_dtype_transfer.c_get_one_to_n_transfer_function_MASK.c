
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_8__ {int elsize; } ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_1__ PyArray_Descr ;
typedef int NpyAuxData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,int ,int ,TYPE_1__*,TYPE_1__*,int ,int **,int **,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,int ,TYPE_1__*,int **,int **,int*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *,int ,int ,int **,int **) ;

__attribute__((used)) static int
FUNC_5(int VAR_2,
                            npy_intp VAR_3, npy_intp VAR_4,
                            PyArray_Descr *VAR_5, PyArray_Descr *VAR_6,
                            int VAR_7,
                            npy_intp VAR_8,
                            PyArray_StridedUnaryOp **VAR_9,
                            NpyAuxData **VAR_10,
                            int *VAR_11)
{
    PyArray_StridedUnaryOp *VAR_12, *VAR_13 = ((void*)0);
    NpyAuxData *VAR_14, *VAR_15 = ((void*)0);







    if (FUNC_1(VAR_2,
                    0, VAR_6->elsize,
                    VAR_5, VAR_6,
                    0,
                    &VAR_12, &VAR_14,
                    VAR_11) != VAR_1) {
        return VAR_0;
    }


    if (VAR_7 && FUNC_2(VAR_5)) {
        if (FUNC_3(VAR_2,
                            VAR_3,
                            VAR_5,
                            &VAR_13,
                            &VAR_15,
                            VAR_11) != VAR_1) {
            FUNC_0(VAR_14);
            return VAR_0;
        }
    }

    if (FUNC_4(VAR_12, VAR_14,
                            VAR_13, VAR_15,
                            VAR_6->elsize,
                            VAR_8,
                            VAR_9, VAR_10) != VAR_1) {
        FUNC_0(VAR_14);
        FUNC_0(VAR_15);
        return VAR_0;
    }

    return VAR_1;
}
