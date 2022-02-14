
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int t ;
struct TYPE_7__ {int kat2len_pr; int kat2_pr; int adinglen_pr; int ading_pr; int entropyglen_pr; int entropyg_pr; int katlen_pr; int kat_pr; int adinlen_pr; int adin_pr; int entropyprlen_pr; int entropypr_pr; int perslen_pr; int pers_pr; int noncelen_pr; int nonce_pr; int entropylen_pr; int entropy_pr; int flags; int nid; int kat2len; int kat2; int adin2len; int adin2; int adinreseedlen; int adinreseed; int entropyreseedlen; int entropyreseed; int exlen; int expected; int adinlen; int adin; int perslen; int pers; int noncelen; int nonce; int entropylen; int entropy; } ;
struct TYPE_6__ {int entropylen; int entropy; scalar_t__ noncecnt; scalar_t__ entropycnt; int noncelen; int nonce; } ;
typedef TYPE_1__ TEST_CTX ;
typedef int RAND_DRBG ;
typedef TYPE_2__ DRBG_SELFTEST_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int ,int,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int ,unsigned char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 int VAR_0 ;
 int FUNC_11 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(DRBG_SELFTEST_DATA *VAR_3)
{
    RAND_DRBG *VAR_4 = ((void*)0);
    TEST_CTX VAR_5;
    int VAR_6 = 0;
    unsigned char VAR_7[1024];





    if (!FUNC_9(VAR_4 = FUNC_3(VAR_3->nid, VAR_3->flags, ((void*)0))))
        return 0;
    if (!FUNC_10(FUNC_6(VAR_4, VAR_1, ((void*)0),
                                           VAR_2, ((void*)0)))
        || !FUNC_10(FUNC_11(VAR_4))) {
        VAR_6++;
        goto err;
    }
    FUNC_12(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.entropy = VAR_3->entropy;
    VAR_5.entropylen = VAR_3->entropylen;
    VAR_5.nonce = VAR_3->nonce;
    VAR_5.noncelen = VAR_3->noncelen;
    FUNC_7(VAR_4, VAR_0, &VAR_5);

    if (!FUNC_10(FUNC_2(VAR_4, VAR_3->pers, VAR_3->perslen))
            || !FUNC_10(FUNC_1(VAR_4, VAR_7, VAR_3->exlen, 0,
                                             VAR_3->adin, VAR_3->adinlen))
            || !FUNC_8(VAR_3->expected, VAR_3->exlen, VAR_7, VAR_3->exlen))
        VAR_6++;


    VAR_5.entropy = VAR_3->entropyreseed;
    VAR_5.entropylen = VAR_3->entropyreseedlen;
    if (!FUNC_10(FUNC_4(VAR_4, VAR_3->adinreseed, VAR_3->adinreseedlen, 0)
            || !FUNC_10(FUNC_1(VAR_4, VAR_7, VAR_3->kat2len, 0,
                                             VAR_3->adin2, VAR_3->adin2len))
            || !FUNC_8(VAR_3->kat2, VAR_3->kat2len, VAR_7, VAR_3->kat2len)))
        VAR_6++;
    FUNC_13(VAR_4);





    if (!FUNC_10(FUNC_5(VAR_4, VAR_3->nid, VAR_3->flags))
            || !FUNC_10(FUNC_6(VAR_4, VAR_1, ((void*)0),
                                                  VAR_2, ((void*)0))))
        VAR_6++;
    FUNC_7(VAR_4, VAR_0, &VAR_5);
    VAR_5.entropy = VAR_3->entropy_pr;
    VAR_5.entropylen = VAR_3->entropylen_pr;
    VAR_5.nonce = VAR_3->nonce_pr;
    VAR_5.noncelen = VAR_3->noncelen_pr;
    VAR_5.entropycnt = 0;
    VAR_5.noncecnt = 0;
    if (!FUNC_10(FUNC_2(VAR_4, VAR_3->pers_pr, VAR_3->perslen_pr)))
        VAR_6++;





    VAR_5.entropy = VAR_3->entropypr_pr;
    VAR_5.entropylen = VAR_3->entropyprlen_pr;
    if (!FUNC_10(FUNC_1(VAR_4, VAR_7, VAR_3->katlen_pr, 1,
                                      VAR_3->adin_pr, VAR_3->adinlen_pr))
            || !FUNC_8(VAR_3->kat_pr, VAR_3->katlen_pr, VAR_7, VAR_3->katlen_pr))
        VAR_6++;




    VAR_5.entropy = VAR_3->entropyg_pr;
    VAR_5.entropylen = VAR_3->entropyglen_pr;

    if (!FUNC_10(FUNC_1(VAR_4, VAR_7, VAR_3->kat2len_pr, 1,
                                      VAR_3->ading_pr, VAR_3->adinglen_pr))
                || !FUNC_8(VAR_3->kat2_pr, VAR_3->kat2len_pr,
                                VAR_7, VAR_3->kat2len_pr))
        VAR_6++;

err:
    FUNC_13(VAR_4);
    FUNC_0(VAR_4);
    return VAR_6 == 0;
}
