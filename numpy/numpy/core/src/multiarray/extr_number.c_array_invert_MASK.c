
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invert; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_1)
{
    if (FUNC_2(VAR_1)) {
        return FUNC_0(VAR_1, VAR_0.invert);
    }
    return FUNC_1(VAR_1, VAR_0.invert);
}
