
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_4__ {int* ptr; int len; } ;
typedef TYPE_1__ PyArray_Dims ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int*,int,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(PyArray_Dims *VAR_1, PyArrayObject *VAR_2)
{
    npy_intp *VAR_3;
    npy_intp VAR_4 = FUNC_0(VAR_2);
    npy_intp VAR_5, VAR_6;
    int VAR_7, VAR_8;

    VAR_3 = VAR_1->ptr;
    VAR_8 = VAR_1->len;
    VAR_6 = 1;
    VAR_5 = -1;

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        if (VAR_3[VAR_7] < 0) {
            if (VAR_5 == -1) {
                VAR_5 = VAR_7;
            }
            else {
                FUNC_1(VAR_0,
                                "can only specify one unknown dimension");
                return -1;
            }
        }
        else if (FUNC_2(&VAR_6, VAR_6,
                                            VAR_3[VAR_7])) {
            FUNC_3(VAR_1, VAR_2);
            return -1;
        }
    }

    if (VAR_5 >= 0) {
        if (VAR_6 == 0 || VAR_4 % VAR_6 != 0) {
            FUNC_3(VAR_1, VAR_2);
            return -1;
        }
        VAR_3[VAR_5] = VAR_4 / VAR_6;
    }
    else {
        if (VAR_4 != VAR_6) {
            FUNC_3(VAR_1, VAR_2);
            return -1;
        }
    }
    return 0;
}
