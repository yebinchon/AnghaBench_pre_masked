
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t noncelen; scalar_t__ nonce; int noncecnt; } ;
typedef TYPE_1__ TEST_CTX ;
typedef int RAND_DRBG ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(RAND_DRBG *VAR_1, unsigned char **VAR_2,
                        int VAR_3, size_t VAR_4, size_t VAR_5)
{
    TEST_CTX *VAR_6 = (TEST_CTX *)FUNC_0(VAR_1, VAR_0);

    VAR_6->noncecnt++;
    *VAR_2 = (unsigned char *)VAR_6->nonce;
    return VAR_6->noncelen;
}
