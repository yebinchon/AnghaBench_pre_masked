
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int siv; } ;
typedef int SIV128_CONTEXT ;
typedef TYPE_1__ PROV_AES_SIV_CTX ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    PROV_AES_SIV_CTX *VAR_3 = (PROV_AES_SIV_CTX *)VAR_0;
    SIV128_CONTEXT *VAR_4 = &VAR_3->siv;

    return FUNC_0(VAR_4, VAR_1, VAR_2);
}
