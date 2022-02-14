
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_21__ {TYPE_1__* subarray; } ;
struct TYPE_20__ {int member_1; scalar_t__ len; int ptr; int * member_0; } ;
struct TYPE_19__ {TYPE_3__* base; int shape; } ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_2__ PyArray_Dims ;
typedef TYPE_3__ PyArray_Descr ;
typedef int NpyAuxData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int,int,int,TYPE_3__*,TYPE_3__*,int,int **,int **,int*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;
 int FUNC_6 (int,int,int,TYPE_3__*,TYPE_3__*,int,int,int **,int **,int*) ;
 int FUNC_7 (int,int,int,TYPE_3__*,TYPE_3__*,int,int,int **,int **,int*) ;
 int FUNC_8 (int,int,int,TYPE_3__*,TYPE_3__*,int,int,TYPE_2__,TYPE_2__,int,int **,int **,int*) ;
 int FUNC_9 (TYPE_2__) ;

__attribute__((used)) static int
FUNC_10(int VAR_2,
                            npy_intp VAR_3, npy_intp VAR_4,
                            PyArray_Descr *VAR_5, PyArray_Descr *VAR_6,
                            int VAR_7,
                            PyArray_StridedUnaryOp **VAR_8,
                            NpyAuxData **VAR_9,
                            int *VAR_10)
{
    PyArray_Dims VAR_11 = {((void*)0), -1}, VAR_12 = {((void*)0), -1};
    npy_intp VAR_13 = 1, VAR_14 = 1;


    if (FUNC_4(VAR_5)) {
        if (!(FUNC_2(VAR_5->subarray->shape,
                                            &VAR_11))) {
            FUNC_5(VAR_1,
                    "invalid subarray shape");
            return VAR_0;
        }
        VAR_13 = FUNC_3(VAR_11.ptr, VAR_11.len);
        VAR_5 = VAR_5->subarray->base;
    }
    if (FUNC_4(VAR_6)) {
        if (!(FUNC_2(VAR_6->subarray->shape,
                                            &VAR_12))) {
            FUNC_9(VAR_11);
            FUNC_5(VAR_1,
                    "invalid subarray shape");
            return VAR_0;
        }
        VAR_14 = FUNC_3(VAR_12.ptr, VAR_12.len);
        VAR_6 = VAR_6->subarray->base;
    }




    if (VAR_14 == 1 && VAR_13 == 1) {
        FUNC_9(VAR_11);
        FUNC_9(VAR_12);

        return FUNC_1(VAR_2,
                VAR_3, VAR_4,
                VAR_5, VAR_6,
                VAR_7,
                VAR_8, VAR_9,
                VAR_10);
    }

    else if (VAR_13 == 1) {
        FUNC_9(VAR_11);
        FUNC_9(VAR_12);

        return FUNC_7(VAR_2,
                        VAR_3, VAR_4,
                        VAR_5, VAR_6,
                        VAR_7,
                        VAR_14,
                        VAR_8, VAR_9,
                        VAR_10);
    }

    else if (VAR_11.len == VAR_12.len &&
               FUNC_0(VAR_11.ptr, VAR_12.ptr,
                                                    VAR_11.len)) {
        FUNC_9(VAR_11);
        FUNC_9(VAR_12);

        return FUNC_6(VAR_2,
                        VAR_3, VAR_4,
                        VAR_5, VAR_6,
                        VAR_7,
                        VAR_13,
                        VAR_8, VAR_9,
                        VAR_10);
    }




    else {
        int VAR_15 = FUNC_8(VAR_2,
                        VAR_3, VAR_4,
                        VAR_5, VAR_6,
                        VAR_13, VAR_14,
                        VAR_11, VAR_12,
                        VAR_7,
                        VAR_8, VAR_9,
                        VAR_10);

        FUNC_9(VAR_11);
        FUNC_9(VAR_12);
        return VAR_15;
    }
}
