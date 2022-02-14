
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ npy_off_t ;
typedef scalar_t__ npy_intp ;
struct TYPE_5__ {scalar_t__ elsize; } ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArrayObject ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int,scalar_t__*,int *,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_4 (int ,int,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static PyArrayObject *
FUNC_7(FILE *VAR_6, PyArray_Descr *VAR_7, npy_intp VAR_8, size_t *VAR_9)
{
    PyArrayObject *VAR_10;
    npy_off_t VAR_11, VAR_12;
    int VAR_13;

    if (VAR_8 < 0) {
        int VAR_14 = 0;
        VAR_11 = FUNC_6(VAR_6);
        if (VAR_11 < 0) {
            VAR_14 = 1;
        }
        if (FUNC_5(VAR_6, 0, VAR_4) < 0) {
            VAR_14 = 1;
        }
        VAR_12 = FUNC_6(VAR_6);
        if (VAR_12 < 0) {
            VAR_14 = 1;
        }
        VAR_12 -= VAR_11;
        if (FUNC_5(VAR_6, VAR_11, VAR_5) < 0) {
            VAR_14 = 1;
        }
        if (VAR_14) {
            FUNC_2(VAR_3,
                            "could not seek in file");
            FUNC_3(VAR_7);
            return ((void*)0);
        }
        VAR_8 = VAR_12 / VAR_7->elsize;
    }





    VAR_13 = VAR_7->elsize;

    VAR_10 = (PyArrayObject *)FUNC_1(&VAR_2, VAR_7, 1, &VAR_8,
                                              ((void*)0), ((void*)0), 0, ((void*)0));
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_0;
    *VAR_9 = FUNC_4(FUNC_0(VAR_10), VAR_13, VAR_8, VAR_6);
    VAR_1;
    return VAR_10;
}
