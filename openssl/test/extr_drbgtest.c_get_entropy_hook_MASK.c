
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fail; size_t (* get_entropy ) (int *,unsigned char**,int,size_t,size_t,int) ;int reseed_count; } ;
typedef int RAND_DRBG ;
typedef TYPE_1__ HOOK_CTX ;


 TYPE_1__* FUNC_0 (int *) ;
 size_t FUNC_1 (int *,unsigned char**,int,size_t,size_t,int) ;

__attribute__((used)) static size_t FUNC_2(RAND_DRBG *VAR_0, unsigned char **VAR_1,
                              int VAR_2, size_t VAR_3, size_t VAR_4,
                              int VAR_5)
{
    size_t VAR_6;
    HOOK_CTX *VAR_7 = FUNC_0(VAR_0);

    if (VAR_7->fail != 0)
        return 0;

    VAR_6 = VAR_7->get_entropy(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
                           VAR_5);

    if (VAR_6 != 0)
        VAR_7->reseed_count++;
    return VAR_6;
}
