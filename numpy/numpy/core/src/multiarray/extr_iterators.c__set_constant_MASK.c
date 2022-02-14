
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int elsize; } ;
struct TYPE_8__ {scalar_t__ ao; } ;
struct TYPE_7__ {TYPE_3__* _internal_iter; } ;
struct TYPE_6__ {int flags; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayObject_fields ;
typedef int PyArrayObject ;
typedef TYPE_2__ PyArrayNeighborhoodIterObject ;
typedef TYPE_3__ PyArrayIterObject ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int) ;

__attribute__((used)) static char* FUNC_11(PyArrayNeighborhoodIterObject* VAR_2,
        PyArrayObject *VAR_3)
{
    char *VAR_4;
    PyArrayIterObject *VAR_5 = VAR_2->_internal_iter;
    int VAR_6, VAR_7;

    VAR_4 = FUNC_7(FUNC_1(VAR_5->ao)->elsize);
    if (VAR_4 == ((void*)0)) {
        FUNC_8(VAR_1);
        return ((void*)0);
    }

    if (FUNC_4(VAR_5->ao)) {
        FUNC_10(VAR_4, FUNC_0(VAR_3), sizeof(PyObject*));
        FUNC_9(*(PyObject**)VAR_4);
    } else {


        VAR_6 = FUNC_3(VAR_5->ao);
        FUNC_2(VAR_5->ao, VAR_0);
        VAR_7 = FUNC_5(VAR_5->ao, VAR_4, (PyObject*)VAR_3);
        ((PyArrayObject_fields *)VAR_5->ao)->flags = VAR_6;

        if (VAR_7 < 0) {
            FUNC_6(VAR_4);
            return ((void*)0);
        }
    }

    return VAR_4;
}
