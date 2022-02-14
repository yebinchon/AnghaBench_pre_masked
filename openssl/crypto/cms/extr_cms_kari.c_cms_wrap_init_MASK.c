
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctx; } ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef TYPE_1__ CMS_KeyAgreeRecipientInfo ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int const*,int *,int *,int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_9(CMS_KeyAgreeRecipientInfo *VAR_2,
                         const EVP_CIPHER *VAR_3)
{
    EVP_CIPHER_CTX *VAR_4 = VAR_2->ctx;
    const EVP_CIPHER *VAR_5;
    int VAR_6 = FUNC_2(VAR_3);

    VAR_5 = FUNC_0(VAR_4);

    if (VAR_5) {
        if (FUNC_1(VAR_4) != VAR_0)
            return 0;
        return 1;
    }





    if (FUNC_3(VAR_3) == VAR_1)
        VAR_5 = FUNC_8();
    else

    if (VAR_6 <= 16)
        VAR_5 = FUNC_5();
    else if (VAR_6 <= 24)
        VAR_5 = FUNC_6();
    else
        VAR_5 = FUNC_7();
    return FUNC_4(VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0));
}
