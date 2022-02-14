
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int npyiter_opitflags ;
typedef scalar_t__ npy_intp ;
struct TYPE_10__ {int byteorder; } ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (scalar_t__,int **,scalar_t__,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static PyArray_Descr *
FUNC_6(int VAR_3, PyArrayObject **VAR_4,
                        const npyiter_opitflags *VAR_5, PyArray_Descr **VAR_6,
                        PyArray_Descr **VAR_7,
                        int VAR_8)
{
    int VAR_9;
    npy_intp VAR_10 = 0, VAR_11 = 0;
    PyArrayObject *VAR_12[VAR_0];
    PyArray_Descr *VAR_13[VAR_0];
    PyArray_Descr *VAR_14;

    FUNC_0("Iterator: Getting a common data type from operands\n");

    for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
        if (VAR_6[VAR_9] != ((void*)0) &&
                    (!VAR_8 || (VAR_5[VAR_9] & VAR_2))) {

            if ((VAR_7 == ((void*)0) ||
                            VAR_7[VAR_9] == ((void*)0)) &&
                                            FUNC_3(VAR_4[VAR_9]) == 0) {
                VAR_12[VAR_10++] = VAR_4[VAR_9];
            }

            else {
                VAR_13[VAR_11++] = VAR_6[VAR_9];
            }
        }
    }

    if (VAR_10 == 0) {
        npy_intp VAR_15;
        VAR_14 = VAR_13[0];
        for (VAR_15 = 1; VAR_15 < VAR_11; ++VAR_15) {
            if (VAR_14 != VAR_13[VAR_15])
                break;
        }
        if (VAR_15 == VAR_11) {
            if (VAR_11 == 1 || FUNC_2(VAR_14->byteorder)) {
                FUNC_5(VAR_14);
            }
            else {
                VAR_14 = FUNC_1(VAR_14, VAR_1);
            }
        }
        else {
            VAR_14 = FUNC_4(VAR_10, VAR_12, VAR_11, VAR_13);
        }
    }
    else {
        VAR_14 = FUNC_4(VAR_10, VAR_12, VAR_11, VAR_13);
    }

    return VAR_14;
}
