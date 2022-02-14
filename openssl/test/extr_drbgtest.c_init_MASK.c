
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int noncelen; int nonce; int entropylen; int entropy; int flags; int nid; } ;
struct TYPE_6__ {scalar_t__ noncecnt; scalar_t__ entropycnt; int noncelen; int nonce; int entropylen; int entropy; } ;
typedef TYPE_1__ TEST_CTX ;
typedef int RAND_DRBG ;
typedef TYPE_2__ DRBG_SELFTEST_DATA ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ,int *) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(RAND_DRBG *VAR_3, DRBG_SELFTEST_DATA *VAR_4, TEST_CTX *VAR_5)
{
    if (!FUNC_3(FUNC_0(VAR_3, VAR_4->nid, VAR_4->flags))
            || !FUNC_3(FUNC_1(VAR_3, VAR_1, ((void*)0),
                                                  VAR_2, ((void*)0))))
        return 0;
    FUNC_2(VAR_3, VAR_0, VAR_5);
    VAR_5->entropy = VAR_4->entropy;
    VAR_5->entropylen = VAR_4->entropylen;
    VAR_5->nonce = VAR_4->nonce;
    VAR_5->noncelen = VAR_4->noncelen;
    VAR_5->entropycnt = 0;
    VAR_5->noncecnt = 0;
    return 1;
}
