
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_3__ {int index; int* factors; int* coordinates; scalar_t__ contiguous; int ao; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayIterObject ;


 int * FUNC_0 (int,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayIterObject *VAR_0)
{
    int VAR_1;
    VAR_1 = FUNC_1(VAR_0->ao);
    if (VAR_0->contiguous) {




        npy_intp VAR_2;
        int VAR_3;
        VAR_2 = VAR_0->index;
        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
            if (VAR_0->factors[VAR_3] != 0) {
                VAR_0->coordinates[VAR_3] = VAR_2 / VAR_0->factors[VAR_3];
                VAR_2 = VAR_2 % VAR_0->factors[VAR_3];
            } else {
                VAR_0->coordinates[VAR_3] = 0;
            }
        }
    }
    return FUNC_0(VAR_1, VAR_0->coordinates);
}
