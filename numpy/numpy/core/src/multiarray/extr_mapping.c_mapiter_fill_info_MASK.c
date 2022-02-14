
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_5__ {int type; int value; scalar_t__ object; } ;
typedef TYPE_1__ npy_index_info ;
struct TYPE_6__ {int nd_fancy; int* dimensions; int consec; int* fancy_dims; int* iteraxes; int * subspace; scalar_t__* fancy_strides; } ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_2__ PyArrayMapIterObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 int FUNC_5 (int **,int *) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,int ,char*) ;

__attribute__((used)) static int
FUNC_9(PyArrayMapIterObject *VAR_6, npy_index_info *VAR_7,
                  int VAR_8, PyArrayObject *VAR_9)
{
    int VAR_10 = 0, VAR_11;
    int VAR_12 = 0;

    int VAR_13 = 0;

    int VAR_14 = -1;
    int VAR_15, VAR_16;
    npy_intp VAR_17;
    PyObject *VAR_18, *VAR_19;

    for (VAR_11 = 0; VAR_11 < VAR_6->nd_fancy; VAR_11++) {
        VAR_6->dimensions[VAR_11] = 1;
    }

    VAR_6->consec = 0;
    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {

        if (VAR_7[VAR_11].type & (VAR_2 | VAR_3)) {

            if (VAR_14 == -1) {
                VAR_6->consec = VAR_13;
                VAR_14 = 0;
            }

            else if (VAR_14 == 1) {
                VAR_14 = 2;
                VAR_6->consec = 0;
            }
        }
        else {

            if (VAR_14 == 0) {
                VAR_14 = 1;
            }
        }


        if (VAR_7[VAR_11].type == VAR_2) {
            VAR_6->fancy_strides[VAR_10] = FUNC_3(VAR_9, VAR_12);
            VAR_6->fancy_dims[VAR_10] = FUNC_0(VAR_9, VAR_12);
            VAR_6->iteraxes[VAR_10++] = VAR_12++;


            VAR_16 = VAR_6->nd_fancy;

            for (VAR_15 = FUNC_1((PyArrayObject *)VAR_7[VAR_11].object) - 1;
                        VAR_15 >= 0; VAR_15--) {
                VAR_16--;
                VAR_17 = FUNC_0((PyArrayObject *)VAR_7[VAR_11].object, VAR_15);


                if (VAR_17 != 1) {
                    if (VAR_17 != VAR_6->dimensions[VAR_16]) {
                        if (VAR_6->dimensions[VAR_16] != 1) {
                            goto broadcast_error;
                        }
                        VAR_6->dimensions[VAR_16] = VAR_17;
                    }
                }
            }
        }
        else if (VAR_7[VAR_11].type == VAR_0) {
            VAR_6->fancy_strides[VAR_10] = 0;
            VAR_6->fancy_dims[VAR_10] = 1;

            VAR_6->iteraxes[VAR_10++] = -1;
            if ((VAR_7[VAR_11].value == 0) &&
                    (VAR_6->dimensions[VAR_6->nd_fancy - 1]) > 1) {
                goto broadcast_error;
            }
            VAR_6->dimensions[VAR_6->nd_fancy-1] *= VAR_7[VAR_11].value;
        }


        else if (VAR_7[VAR_11].type == VAR_1) {
            VAR_12 += (int)VAR_7[VAR_11].value;
            VAR_13 += (int)VAR_7[VAR_11].value;
        }
        else if (VAR_7[VAR_11].type != VAR_4){
            VAR_12 += 1;
            VAR_13 += 1;
        }
        else {
            VAR_13 += 1;
        }
    }


    if (VAR_6->subspace) {
        for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_6->subspace); VAR_11++) {
            VAR_6->dimensions[VAR_6->nd_fancy + VAR_11] = FUNC_0(VAR_6->subspace, VAR_11);
        }
    }

    return 0;

  broadcast_error:




    VAR_18 = FUNC_6("shape mismatch: indexing arrays could not "
                                  "be broadcast together with shapes ");
    if (VAR_18 == ((void*)0)) {
        return -1;
    }

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        if (!(VAR_7[VAR_11].type & VAR_2)) {
            continue;
        }
        VAR_19 = FUNC_8(
                    FUNC_1((PyArrayObject *)VAR_7[VAR_11].object),
                    FUNC_2((PyArrayObject *)VAR_7[VAR_11].object),
                    " ");
        if (VAR_19 == ((void*)0)) {
            return -1;
        }
        FUNC_5(&VAR_18, VAR_19);
        if (VAR_18 == ((void*)0)) {
            return -1;
        }
    }

    FUNC_4(VAR_5, VAR_18);
    FUNC_7(VAR_18);
    return -1;
}
