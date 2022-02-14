
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ real ;
typedef scalar_t__ doublereal ;
struct TYPE_4__ {scalar_t__ r; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

doublereal FUNC_2(complex *VAR_0)
{

    real VAR_1, VAR_2, VAR_3;
    VAR_1 = (VAR_2 = VAR_0->r, FUNC_0(VAR_2)) + (VAR_3 = FUNC_1(VAR_0), FUNC_0(VAR_3));
    return VAR_1;
}
