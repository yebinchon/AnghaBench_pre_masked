
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int blocklen; int * md; int * ctx; } ;
struct TYPE_5__ {TYPE_2__ hash; } ;
struct TYPE_7__ {int strength; int min_entropylen; int min_noncelen; int max_request; void* max_adinlen; void* max_perslen; void* max_noncelen; void* max_entropylen; int seedlen; int * meth; int type; int libctx; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_HASH ;
typedef TYPE_3__ RAND_DRBG ;
typedef int EVP_MD ;


 void* VAR_0 ;
 int * FUNC_0 () ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

int FUNC_6(RAND_DRBG *VAR_6)
{
    EVP_MD *VAR_7;
    RAND_DRBG_HASH *VAR_8 = &VAR_6->data.hash;






    VAR_7 = FUNC_1(VAR_6->libctx, FUNC_5(VAR_6->type), "");
    if (VAR_7 == ((void*)0))
        return 0;

    if ((FUNC_2(VAR_7) & VAR_1) != 0)
        return 0;

    VAR_6->meth = &VAR_5;

    if (VAR_8->ctx == ((void*)0)) {
        VAR_8->ctx = FUNC_0();
        if (VAR_8->ctx == ((void*)0)) {
            FUNC_3(VAR_7);
            return 0;
        }
    }

    FUNC_3(VAR_8->md);
    VAR_8->md = VAR_7;


    VAR_8->blocklen = FUNC_4(VAR_7);

    VAR_6->strength = 64 * (VAR_8->blocklen >> 3);
    if (VAR_6->strength > 256)
        VAR_6->strength = 256;
    if (VAR_8->blocklen > VAR_4)
        VAR_6->seedlen = VAR_2;
    else
        VAR_6->seedlen = VAR_3;

    VAR_6->min_entropylen = VAR_6->strength / 8;
    VAR_6->max_entropylen = VAR_0;

    VAR_6->min_noncelen = VAR_6->min_entropylen / 2;
    VAR_6->max_noncelen = VAR_0;

    VAR_6->max_perslen = VAR_0;
    VAR_6->max_adinlen = VAR_0;


    VAR_6->max_request = 1 << 16;

    return 1;
}
