
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* K; size_t blocklen; unsigned char const* V; int md; int * ctx; } ;
typedef TYPE_1__ RAND_DRBG_HMAC ;
typedef int HMAC_CTX ;


 scalar_t__ FUNC_0 (int *,unsigned char const*,int *) ;
 scalar_t__ FUNC_1 (int *,unsigned char const*,size_t,int ,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_3(RAND_DRBG_HMAC *VAR_0, unsigned char VAR_1,
                   const unsigned char *VAR_2, size_t VAR_3,
                   const unsigned char *VAR_4, size_t VAR_5,
                   const unsigned char *VAR_6, size_t VAR_7)
{
    HMAC_CTX *VAR_8 = VAR_0->ctx;

    return FUNC_1(VAR_8, VAR_0->K, VAR_0->blocklen, VAR_0->md, ((void*)0))

           && FUNC_2(VAR_8, VAR_0->V, VAR_0->blocklen)
           && FUNC_2(VAR_8, &VAR_1, 1)
           && (VAR_2 == ((void*)0) || VAR_3 == 0 || FUNC_2(VAR_8, VAR_2, VAR_3))
           && (VAR_4 == ((void*)0) || VAR_5 == 0 || FUNC_2(VAR_8, VAR_4, VAR_5))
           && (VAR_6 == ((void*)0) || VAR_7 == 0 || FUNC_2(VAR_8, VAR_6, VAR_7))
           && FUNC_0(VAR_8, VAR_0->K, ((void*)0))

           && FUNC_1(VAR_8, VAR_0->K, VAR_0->blocklen, VAR_0->md, ((void*)0))
           && FUNC_2(VAR_8, VAR_0->V, VAR_0->blocklen)
           && FUNC_0(VAR_8, VAR_0->V, ((void*)0));
}
