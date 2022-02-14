
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Z; int * Y; int * X; } ;
typedef TYPE_1__ EC_POINT ;


 int FUNC_0 (int *) ;
 void* FUNC_1 () ;

int FUNC_2(EC_POINT *VAR_0)
{
    VAR_0->X = FUNC_1();
    VAR_0->Y = FUNC_1();
    VAR_0->Z = FUNC_1();

    if (VAR_0->X == ((void*)0) || VAR_0->Y == ((void*)0) || VAR_0->Z == ((void*)0)) {
        FUNC_0(VAR_0->X);
        FUNC_0(VAR_0->Y);
        FUNC_0(VAR_0->Z);
        return 0;
    }
    return 1;
}
