
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ao; int dataptr; } ;
struct TYPE_5__ {int numiter; scalar_t__ index; scalar_t__ size; TYPE_2__** iters; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayMultiIterObject ;
typedef TYPE_2__ PyArrayIterObject ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayMultiIterObject *VAR_0)
{
    PyObject *VAR_1;
    int VAR_2, VAR_3;

    VAR_3 = VAR_0->numiter;
    VAR_1 = FUNC_2(VAR_3);
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    if (VAR_0->index < VAR_0->size) {
        for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
            PyArrayIterObject *VAR_4=VAR_0->iters[VAR_2];
            FUNC_3(VAR_1, VAR_2,
                             FUNC_1(VAR_4->dataptr, VAR_4->ao));
            FUNC_0(VAR_4);
        }
        VAR_0->index++;
        return VAR_1;
    }
    FUNC_4(VAR_1);
    return ((void*)0);
}
