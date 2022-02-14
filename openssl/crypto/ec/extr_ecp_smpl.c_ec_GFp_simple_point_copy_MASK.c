
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int curve_name; int Z_is_one; int Z; int Y; int X; } ;
typedef TYPE_1__ EC_POINT ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(EC_POINT *VAR_0, const EC_POINT *VAR_1)
{
    if (!FUNC_0(VAR_0->X, VAR_1->X))
        return 0;
    if (!FUNC_0(VAR_0->Y, VAR_1->Y))
        return 0;
    if (!FUNC_0(VAR_0->Z, VAR_1->Z))
        return 0;
    VAR_0->Z_is_one = VAR_1->Z_is_one;
    VAR_0->curve_name = VAR_1->curve_name;

    return 1;
}
