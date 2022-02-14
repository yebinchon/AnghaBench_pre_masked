
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int signedAttrs; TYPE_1__* digestAlgorithm; } ;
struct TYPE_4__ {int algorithm; } ;
typedef int EVP_MD ;
typedef TYPE_2__ CMS_SignerInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ,unsigned char*,unsigned int*) ;
 int VAR_0 ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(CMS_SignerInfo *VAR_1,
                            unsigned char *VAR_2, unsigned int *VAR_3)
{
    const EVP_MD *VAR_4;
    VAR_4 = FUNC_2(VAR_1->digestAlgorithm->algorithm);
    if (VAR_4 == ((void*)0))
        return 0;
    if (!FUNC_1(FUNC_0(VAR_0), VAR_4,
                          VAR_1->signedAttrs, VAR_2, VAR_3))
        return 0;
    return 1;
}
