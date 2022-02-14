
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* tp_free ) (int *) ;} ;
struct TYPE_5__ {int arr; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayFlagsObject ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(PyArrayFlagsObject *VAR_0)
{
    FUNC_1(VAR_0->arr);
    FUNC_0(VAR_0)->tp_free((PyObject *)VAR_0);
}
