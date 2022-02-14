
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* V; size_t blocklen; int md; int K; int * ctx; } ;
struct TYPE_6__ {TYPE_2__ hmac; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HMAC ;
typedef TYPE_3__ RAND_DRBG ;
typedef int HMAC_CTX ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,size_t,int ,int *) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_3__*,unsigned char const*,size_t,int *,int ,int *,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_5(RAND_DRBG *VAR_0,
                              unsigned char *VAR_1, size_t VAR_2,
                              const unsigned char *VAR_3, size_t VAR_4)
{
    RAND_DRBG_HMAC *VAR_5 = &VAR_0->data.hmac;
    HMAC_CTX *VAR_6 = VAR_5->ctx;
    const unsigned char *VAR_7 = VAR_5->V;


    if (VAR_3 != ((void*)0)
            && VAR_4 > 0
            && !FUNC_3(VAR_0, VAR_3, VAR_4, ((void*)0), 0, ((void*)0), 0))
        return 0;
    for (;;) {
        if (!FUNC_1(VAR_6, VAR_5->K, VAR_5->blocklen, VAR_5->md, ((void*)0))
                || !FUNC_2(VAR_6, VAR_7, VAR_5->blocklen))
            return 0;

        if (VAR_2 > VAR_5->blocklen) {
            if (!FUNC_0(VAR_6, VAR_1, ((void*)0)))
                return 0;
            VAR_7 = VAR_1;
        } else {
            if (!FUNC_0(VAR_6, VAR_5->V, ((void*)0)))
                return 0;
            FUNC_4(VAR_1, VAR_5->V, VAR_2);
            break;
        }
        VAR_1 += VAR_5->blocklen;
        VAR_2 -= VAR_5->blocklen;
    }

    if (!FUNC_3(VAR_0, VAR_3, VAR_4, ((void*)0), 0, ((void*)0), 0))
        return 0;

    return 1;
}
