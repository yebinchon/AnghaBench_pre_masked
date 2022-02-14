
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* poly; } ;
typedef TYPE_1__ EC_GROUP ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_3(const EC_GROUP *VAR_3, unsigned int *VAR_4)
{
    if (VAR_3 == ((void*)0))
        return 0;

    if (FUNC_1(FUNC_0(VAR_3)) !=
        VAR_2
        || !((VAR_3->poly[0] != 0) && (VAR_3->poly[1] != 0)
             && (VAR_3->poly[2] == 0))) {
        FUNC_2(VAR_0,
              VAR_1);
        return 0;
    }

    if (VAR_4)
        *VAR_4 = VAR_3->poly[1];

    return 1;
}
