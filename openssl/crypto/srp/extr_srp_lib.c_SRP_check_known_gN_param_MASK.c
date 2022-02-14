
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* id; int N; int g; } ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int ,int const*) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

char *FUNC_1(const BIGNUM *VAR_2, const BIGNUM *VAR_3)
{
    size_t VAR_4;
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (FUNC_0(VAR_1[VAR_4].g, VAR_2) == 0 && FUNC_0(VAR_1[VAR_4].N, VAR_3) == 0)
            return VAR_1[VAR_4].id;
    }
    return ((void*)0);
}
