
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_2__ {double value; } ;


 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;

int FUNC_4(json_t *VAR_0, double VAR_1)
{
    if(!FUNC_2(VAR_0) || FUNC_1(VAR_1) || FUNC_0(VAR_1))
        return -1;

    FUNC_3(VAR_0)->value = VAR_1;

    return 0;
}
