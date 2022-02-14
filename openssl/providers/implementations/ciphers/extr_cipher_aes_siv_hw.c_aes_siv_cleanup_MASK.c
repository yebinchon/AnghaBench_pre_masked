
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctr; int cbc; int siv; } ;
typedef int SIV128_CONTEXT ;
typedef TYPE_1__ PROV_AES_SIV_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    PROV_AES_SIV_CTX *VAR_1 = (PROV_AES_SIV_CTX *)VAR_0;
    SIV128_CONTEXT *VAR_2 = &VAR_1->siv;

    FUNC_0(VAR_2);
    FUNC_1(VAR_1->cbc);
    FUNC_1(VAR_1->ctr);
}
