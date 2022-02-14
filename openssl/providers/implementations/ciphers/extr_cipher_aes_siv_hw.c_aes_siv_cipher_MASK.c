
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enc; int siv; } ;
typedef int SIV128_CONTEXT ;
typedef TYPE_1__ PROV_AES_SIV_CTX ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 scalar_t__ FUNC_1 (int *,unsigned char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, unsigned char *VAR_1,
                          const unsigned char *VAR_2, size_t VAR_3)
{
    PROV_AES_SIV_CTX *VAR_4 = (PROV_AES_SIV_CTX *)VAR_0;
    SIV128_CONTEXT *VAR_5 = &VAR_4->siv;


    if (VAR_2 == ((void*)0))
        return FUNC_3(VAR_5) == 0;


    if (VAR_1 == ((void*)0))
        return (FUNC_0(VAR_5, VAR_2, VAR_3) == 1);

    if (VAR_4->enc)
        return FUNC_2(VAR_5, VAR_2, VAR_1, VAR_3) > 0;

    return FUNC_1(VAR_5, VAR_2, VAR_1, VAR_3) > 0;
}
