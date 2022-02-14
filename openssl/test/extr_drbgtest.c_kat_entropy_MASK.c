
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t entropylen; scalar_t__ entropy; int entropycnt; } ;
typedef TYPE_1__ TEST_CTX ;
typedef int RAND_DRBG ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(RAND_DRBG *VAR_1, unsigned char **VAR_2,
                          int VAR_3, size_t VAR_4, size_t VAR_5,
                          int VAR_6)
{
    TEST_CTX *VAR_7 = (TEST_CTX *)FUNC_0(VAR_1, VAR_0);

    VAR_7->entropycnt++;
    *VAR_2 = (unsigned char *)VAR_7->entropy;
    return VAR_7->entropylen;
}
