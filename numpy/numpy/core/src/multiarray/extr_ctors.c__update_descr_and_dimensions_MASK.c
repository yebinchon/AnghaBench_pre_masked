
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_7__ {int elsize; TYPE_1__* subarray; } ;
struct TYPE_6__ {int shape; TYPE_2__* base; } ;
typedef TYPE_2__ PyArray_Descr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(PyArray_Descr **VAR_1, npy_intp *VAR_2,
                             npy_intp *VAR_3, int VAR_4)
{
    PyArray_Descr *VAR_5;
    int VAR_6;
    int VAR_7;
    npy_intp *VAR_8;
    int VAR_9;
    int VAR_10;

    VAR_5 = *VAR_1;
    *VAR_1 = VAR_5->subarray->base;


    VAR_8 = VAR_2 + VAR_4;
    VAR_10 = FUNC_1(VAR_5->subarray->shape);
    if (VAR_10) {
        VAR_7 = FUNC_3(VAR_5->subarray->shape);
    }
    else {
        VAR_7 = 1;
    }


    VAR_6 = VAR_4 + VAR_7;
    if (VAR_6 > VAR_0) {
        goto finish;
    }
    if (VAR_10) {
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            VAR_8[VAR_9] = (npy_intp) FUNC_0(
                    FUNC_2(VAR_5->subarray->shape, VAR_9));
        }
    }
    else {
        VAR_8[0] = (npy_intp) FUNC_0(VAR_5->subarray->shape);
    }

    if (VAR_3) {
        npy_intp VAR_11;
        npy_intp *VAR_12;

        VAR_12 = VAR_3 + VAR_4;

        VAR_11 = (*VAR_1)->elsize;
        for (VAR_9 = VAR_7 - 1; VAR_9 >= 0; VAR_9--) {
            VAR_12[VAR_9] = VAR_11;
            VAR_11 *= VAR_8[VAR_9] ? VAR_8[VAR_9] : 1;
        }
    }

 finish:
    FUNC_5(*VAR_1);
    FUNC_4(VAR_5);
    return VAR_6;
}
