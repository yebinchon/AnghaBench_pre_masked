
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int blocklen; int * md; int * ctx; } ;
struct TYPE_5__ {TYPE_2__ hmac; } ;
struct TYPE_7__ {int strength; int seedlen; int min_entropylen; int min_noncelen; int max_request; void* max_adinlen; void* max_perslen; void* max_noncelen; void* max_entropylen; int * meth; int type; int libctx; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HMAC ;
typedef TYPE_3__ RAND_DRBG ;
typedef int EVP_MD ;


 void* VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

int FUNC_6(RAND_DRBG *VAR_3)
{
    EVP_MD *VAR_4 = ((void*)0);
    RAND_DRBG_HMAC *VAR_5 = &VAR_3->data.hmac;






    VAR_4 = FUNC_0(VAR_3->libctx, FUNC_5(VAR_3->type), "");
    if (VAR_4 == ((void*)0))
        return 0;

    if ((FUNC_1(VAR_4) & VAR_1) != 0)
        return 0;

    VAR_3->meth = &VAR_2;

    if (VAR_5->ctx == ((void*)0)) {
        VAR_5->ctx = FUNC_4();
        if (VAR_5->ctx == ((void*)0)) {
            FUNC_2(VAR_4);
            return 0;
        }
    }


    FUNC_2(VAR_5->md);
    VAR_5->md = VAR_4;
    VAR_5->blocklen = FUNC_3(VAR_4);

    VAR_3->strength = 64 * (int)(VAR_5->blocklen >> 3);
    if (VAR_3->strength > 256)
        VAR_3->strength = 256;
    VAR_3->seedlen = VAR_5->blocklen;

    VAR_3->min_entropylen = VAR_3->strength / 8;
    VAR_3->max_entropylen = VAR_0;

    VAR_3->min_noncelen = VAR_3->min_entropylen / 2;
    VAR_3->max_noncelen = VAR_0;

    VAR_3->max_perslen = VAR_0;
    VAR_3->max_adinlen = VAR_0;


    VAR_3->max_request = 1 << 16;

    return 1;
}
