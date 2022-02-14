
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ctx; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef TYPE_2__ MAC_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MAC ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int const*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_5 (TYPE_1__*,int ,char const*,char const*,scalar_t__) ;
 TYPE_1__ FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(EVP_PKEY_CTX *VAR_2,
                              const char *VAR_3, const char *VAR_4)
{
    MAC_PKEY_CTX *VAR_5 = FUNC_3(VAR_2);
    const EVP_MAC *VAR_6 = FUNC_0(VAR_5->ctx);
    OSSL_PARAM VAR_7[2];
    int VAR_8 = 0;
    if (FUNC_7(VAR_3, "md") == 0)
        VAR_3 = VAR_0;
    else if (FUNC_7(VAR_3, "digestsize") == 0)
        VAR_3 = VAR_1;

    if (!FUNC_5(&VAR_7[0],
                                       FUNC_2(VAR_6),
                                       VAR_3, VAR_4, FUNC_8(VAR_4) + 1))
        return 0;
    VAR_7[1] = FUNC_6();
    VAR_8 = FUNC_1(VAR_5->ctx, VAR_7);
    FUNC_4(VAR_7[0].data);
    return VAR_8;
}
