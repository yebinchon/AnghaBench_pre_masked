
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
struct drbg_kat_pr_false {int retbytes; int addin2; int addin1; int addinreseed; int entropyinreseed; int persstr; int nonce; int entropyin; } ;
struct drbg_kat {int flags; int retbyteslen; int addinlen; int entropyinlen; int persstrlen; int noncelen; int nid; scalar_t__ t; } ;
struct TYPE_4__ {int entropylen; int entropy; int noncelen; int nonce; } ;
typedef TYPE_1__ TEST_CTX ;
typedef int RAND_DRBG ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int * FUNC_5 (int ,unsigned int,int *) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int *,int ,int *,int ,int *) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,unsigned char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_14(const struct drbg_kat *VAR_7)
{
    struct drbg_kat_pr_false *VAR_8 = (struct drbg_kat_pr_false *)VAR_7->t;
    RAND_DRBG *VAR_9 = ((void*)0);
    unsigned char *VAR_10 = ((void*)0);
    unsigned int VAR_11 = 0;
    int VAR_12 = 0;
    TEST_CTX VAR_13;

    if ((VAR_7->flags & VAR_2) == 0)
        VAR_11 |= VAR_0;
    if ((VAR_7->flags & VAR_3) != 0)
        VAR_11 |= VAR_1;

    if (!FUNC_11(VAR_9 = FUNC_5(VAR_7->nid, VAR_11, ((void*)0))))
        return 0;

    if (!FUNC_12(FUNC_7(VAR_9, VAR_5, ((void*)0),
                                           VAR_6, ((void*)0)))) {
        VAR_12++;
        goto err;
    }
    FUNC_13(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.entropy = VAR_8->entropyin;
    VAR_13.entropylen = VAR_7->entropyinlen;
    VAR_13.nonce = VAR_8->nonce;
    VAR_13.noncelen = VAR_7->noncelen;
    FUNC_8(VAR_9, VAR_4, &VAR_13);

    VAR_10 = FUNC_1(VAR_7->retbyteslen);
    if (VAR_10 == ((void*)0))
        goto err;

    if (!FUNC_12(FUNC_4(VAR_9, VAR_8->persstr, VAR_7->persstrlen)))
        VAR_12++;

    VAR_13.entropy = VAR_8->entropyinreseed;
    VAR_13.entropylen = VAR_7->entropyinlen;

    if (!FUNC_12(FUNC_6(VAR_9, VAR_8->addinreseed, VAR_7->addinlen, 0))
        || !FUNC_12(FUNC_3(VAR_9, VAR_10, VAR_7->retbyteslen, 0,
                                         VAR_8->addin1, VAR_7->addinlen))
        || !FUNC_12(FUNC_3(VAR_9, VAR_10, VAR_7->retbyteslen, 0,
                                         VAR_8->addin2, VAR_7->addinlen))
        || !FUNC_12(FUNC_9(VAR_9))
        || !FUNC_10(VAR_8->retbytes, VAR_7->retbyteslen, VAR_10,
                        VAR_7->retbyteslen))
        VAR_12++;

err:
    FUNC_0(VAR_10);
    FUNC_9(VAR_9);
    FUNC_2(VAR_9);
    return VAR_12 == 0;
}
