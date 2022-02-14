
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char const* V; int blocklen; int vtmp; int md; int * ctx; } ;
struct TYPE_6__ {TYPE_2__ hash; } ;
struct TYPE_8__ {size_t seedlen; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HASH ;
typedef TYPE_3__ RAND_DRBG ;
typedef int EVP_MD_CTX ;


 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_3__*,unsigned char const*,int ,int ) ;

__attribute__((used)) static int FUNC_4(RAND_DRBG *VAR_0, unsigned char VAR_1,
                         const unsigned char *VAR_2, size_t VAR_3)
{
    RAND_DRBG_HASH *VAR_4 = &VAR_0->data.hash;
    EVP_MD_CTX *VAR_5 = VAR_4->ctx;

    return FUNC_1(VAR_5, VAR_4->md, ((void*)0))
           && FUNC_2(VAR_5, &VAR_1, 1)
           && FUNC_2(VAR_5, VAR_4->V, VAR_0->seedlen)
           && (VAR_2 == ((void*)0) || FUNC_2(VAR_5, VAR_2, VAR_3))
           && FUNC_0(VAR_5, VAR_4->vtmp, ((void*)0))
           && FUNC_3(VAR_0, VAR_4->V, VAR_4->vtmp, VAR_4->blocklen);
}
