
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* poly; int b; int a; int field; } ;
typedef TYPE_1__ EC_GROUP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int) ;

int FUNC_3(EC_GROUP *VAR_1, const EC_GROUP *VAR_2)
{
    if (!FUNC_0(VAR_1->field, VAR_2->field))
        return 0;
    if (!FUNC_0(VAR_1->a, VAR_2->a))
        return 0;
    if (!FUNC_0(VAR_1->b, VAR_2->b))
        return 0;
    VAR_1->poly[0] = VAR_2->poly[0];
    VAR_1->poly[1] = VAR_2->poly[1];
    VAR_1->poly[2] = VAR_2->poly[2];
    VAR_1->poly[3] = VAR_2->poly[3];
    VAR_1->poly[4] = VAR_2->poly[4];
    VAR_1->poly[5] = VAR_2->poly[5];
    if (FUNC_2(VAR_1->a, (int)(VAR_1->poly[0] + VAR_0 - 1) / VAR_0) ==
        ((void*)0))
        return 0;
    if (FUNC_2(VAR_1->b, (int)(VAR_1->poly[0] + VAR_0 - 1) / VAR_0) ==
        ((void*)0))
        return 0;
    FUNC_1(VAR_1->a);
    FUNC_1(VAR_1->b);
    return 1;
}
