
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int npy_bool ;
struct TYPE_2__ {scalar_t__ type_num; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static npy_bool
FUNC_4(PyObject *VAR_2)
{
    return (FUNC_2(VAR_2, VAR_1) ||
        (FUNC_0(VAR_2) && (
            FUNC_1((PyArrayObject *)VAR_2)->type_num == VAR_0)) ||
        FUNC_3(VAR_2));
}
