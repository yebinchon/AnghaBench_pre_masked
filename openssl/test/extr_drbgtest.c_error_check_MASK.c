
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ adinlen; int adin; scalar_t__ exlen; scalar_t__ perslen; int pers; int flags; int nid; } ;
struct TYPE_20__ {unsigned int reseed_gen_counter; unsigned int reseed_interval; int data; scalar_t__ min_entropylen; scalar_t__ max_entropylen; scalar_t__ max_adinlen; scalar_t__ max_request; scalar_t__ max_noncelen; scalar_t__ min_noncelen; scalar_t__ max_perslen; } ;
struct TYPE_19__ {unsigned int entropycnt; scalar_t__ entropylen; scalar_t__ noncelen; } ;
typedef TYPE_1__ TEST_CTX ;
typedef TYPE_2__ RAND_DRBG ;
typedef TYPE_3__ DRBG_SELFTEST_DATA ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,scalar_t__,int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 TYPE_2__* FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (char*,int,int *,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_15(DRBG_SELFTEST_DATA *VAR_0)
{
    static char VAR_1[sizeof(RAND_DRBG)];
    RAND_DRBG *VAR_2 = ((void*)0);
    TEST_CTX VAR_3;
    unsigned char VAR_4[1024];
    unsigned int VAR_5;
    int VAR_6 = 0;

    if (!FUNC_9(VAR_2 = FUNC_3(VAR_0->nid, VAR_0->flags, ((void*)0)))
        || !FUNC_10(FUNC_11(VAR_2)))
        goto err;






    if (!FUNC_12(VAR_2, VAR_0, &VAR_3)
            || FUNC_2(VAR_2, VAR_0->pers, VAR_2->max_perslen + 1) > 0)
        goto err;






    VAR_3.entropylen = 0;
    if (FUNC_7(FUNC_2(VAR_2, VAR_0->pers, VAR_0->perslen), 0))
        goto err;


    if (!FUNC_5(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 0,
                                       VAR_0->adin, VAR_0->adinlen))
            || !FUNC_14(VAR_2))
        goto err;


    VAR_3.entropylen = VAR_2->min_entropylen - 1;
    if (!FUNC_12(VAR_2, VAR_0, &VAR_3)
            || FUNC_2(VAR_2, VAR_0->pers, VAR_0->perslen) > 0
            || !FUNC_14(VAR_2))
        goto err;


    VAR_3.entropylen = VAR_2->max_entropylen + 1;
    if (!FUNC_12(VAR_2, VAR_0, &VAR_3)
            || FUNC_2(VAR_2, VAR_0->pers, VAR_0->perslen) > 0
            || !FUNC_14(VAR_2))
        goto err;






    if (VAR_2->min_noncelen) {
        VAR_3.noncelen = VAR_2->min_noncelen - 1;
        if (!FUNC_12(VAR_2, VAR_0, &VAR_3)
                || FUNC_2(VAR_2, VAR_0->pers, VAR_0->perslen) > 0
                || !FUNC_14(VAR_2))
            goto err;
    }


    if (VAR_2->max_noncelen) {
        VAR_3.noncelen = VAR_2->max_noncelen + 1;
        if (!FUNC_12(VAR_2, VAR_0, &VAR_3)
                || FUNC_2(VAR_2, VAR_0->pers, VAR_0->perslen) > 0
                || !FUNC_14(VAR_2))
            goto err;
    }


    if (!FUNC_13(VAR_2, VAR_0, &VAR_3)
            || !FUNC_10(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 0,
                                             VAR_0->adin, VAR_0->adinlen)))
        goto err;


    if (!FUNC_5(FUNC_1(VAR_2, VAR_4, VAR_2->max_request + 1, 0,
                                       VAR_0->adin, VAR_0->adinlen)))
        goto err;


    if (!FUNC_5(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 0,
                                       VAR_0->adin, VAR_2->max_adinlen + 1)))
        goto err;





    VAR_3.entropylen = 0;
    if (FUNC_5(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 1,
                                      VAR_0->adin, VAR_0->adinlen))
            || !FUNC_14(VAR_2))
        goto err;


    if (!FUNC_13(VAR_2, VAR_0, &VAR_3))
        goto err;
    VAR_5 = VAR_2->reseed_gen_counter;
    VAR_2->reseed_gen_counter = VAR_2->reseed_interval;


    VAR_3.entropycnt = 0;
    if (!FUNC_10(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 0,
                                      VAR_0->adin, VAR_0->adinlen))
            || !FUNC_6(VAR_3.entropycnt, 1)
            || !FUNC_6(VAR_2->reseed_gen_counter, VAR_5 + 1)
            || !FUNC_14(VAR_2))
        goto err;





    VAR_3.entropylen = 0;
    if (!FUNC_5(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 1,
                                       VAR_0->adin, VAR_0->adinlen))
            || !FUNC_14(VAR_2))
        goto err;


    if (!FUNC_13(VAR_2, VAR_0, &VAR_3))
        goto err;
    VAR_5 = VAR_2->reseed_gen_counter;
    VAR_2->reseed_gen_counter = VAR_2->reseed_interval;


    VAR_3.entropycnt = 0;
    if (!FUNC_10(FUNC_1(VAR_2, VAR_4, VAR_0->exlen, 0,
                                      VAR_0->adin, VAR_0->adinlen))
            || !FUNC_6(VAR_3.entropycnt, 1)
            || !FUNC_6(VAR_2->reseed_gen_counter, VAR_5 + 1)
            || !FUNC_14(VAR_2))
        goto err;






    if (!FUNC_13(VAR_2, VAR_0, &VAR_3)
            || FUNC_4(VAR_2, VAR_0->adin, VAR_2->max_adinlen + 1, 0) > 0)
        goto err;


    VAR_3.entropylen = 0;
    if (!FUNC_7(FUNC_4(VAR_2, VAR_0->adin, VAR_0->adinlen, 0), 0)
            || !FUNC_14(VAR_2))
        goto err;


    if (!FUNC_13(VAR_2, VAR_0, &VAR_3))
        goto err;
    VAR_3.entropylen = VAR_2->max_entropylen + 1;
    if (!FUNC_7(FUNC_4(VAR_2, VAR_0->adin, VAR_0->adinlen, 0), 0)
            || !FUNC_14(VAR_2))
        goto err;


    if (!FUNC_13(VAR_2, VAR_0, &VAR_3))
        goto err;
    VAR_3.entropylen = VAR_2->min_entropylen - 1;
    if (!FUNC_7(FUNC_4(VAR_2, VAR_0->adin, VAR_0->adinlen, 0), 0)
            || !FUNC_14(VAR_2))
        goto err;


    if (!FUNC_8(VAR_1, sizeof(VAR_2->data), &VAR_2->data, sizeof(VAR_2->data)))
        goto err;

    VAR_6 = 1;

err:
    FUNC_14(VAR_2);
    FUNC_0(VAR_2);
    return VAR_6;
}
