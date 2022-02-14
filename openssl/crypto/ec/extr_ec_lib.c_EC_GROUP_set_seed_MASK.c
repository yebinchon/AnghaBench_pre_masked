
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t seed_len; int * seed; } ;
typedef TYPE_1__ EC_GROUP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;

size_t FUNC_4(EC_GROUP *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
    FUNC_1(VAR_2->seed);
    VAR_2->seed = ((void*)0);
    VAR_2->seed_len = 0;

    if (!VAR_4 || !VAR_3)
        return 1;

    if ((VAR_2->seed = FUNC_2(VAR_4)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    FUNC_3(VAR_2->seed, VAR_3, VAR_4);
    VAR_2->seed_len = VAR_4;

    return VAR_4;
}
