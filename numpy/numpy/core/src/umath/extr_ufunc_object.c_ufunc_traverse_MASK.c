
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int visitproc ;
struct TYPE_3__ {scalar_t__ identity; int identity_value; int obj; } ;
typedef TYPE_1__ PyUFuncObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(PyUFuncObject *VAR_1, visitproc VAR_2, void *VAR_3)
{
    FUNC_0(VAR_1->obj);
    if (VAR_1->identity == VAR_0) {
        FUNC_0(VAR_1->identity_value);
    }
    return 0;
}
