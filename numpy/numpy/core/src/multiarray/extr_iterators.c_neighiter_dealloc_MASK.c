
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; TYPE_1__* _internal_iter; scalar_t__ constant; } ;
struct TYPE_5__ {int ao; } ;
typedef TYPE_1__ PyObject ;
typedef int PyArrayObject ;
typedef TYPE_2__ PyArrayNeighborhoodIterObject ;
typedef int PyArrayIterObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(PyArrayNeighborhoodIterObject* VAR_1)
{
    if (VAR_1->mode == VAR_0) {
        if (FUNC_0(VAR_1->_internal_iter->ao)) {
            FUNC_3(*(PyObject**)VAR_1->constant);
        }
    }
    FUNC_2(VAR_1->constant);
    FUNC_3(VAR_1->_internal_iter);

    FUNC_4((PyArrayIterObject*)VAR_1);
    FUNC_1((PyArrayObject*)VAR_1);
}
