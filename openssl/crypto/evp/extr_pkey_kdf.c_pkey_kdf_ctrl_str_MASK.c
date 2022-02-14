
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* data; } ;
struct TYPE_11__ {int * collected_info; int * collected_seed; int * kctx; } ;
struct TYPE_10__ {char const* key; int data; int data_size; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef TYPE_2__ EVP_PKEY_KDF_CTX ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;
typedef int BUF_MEM ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__ const*,char const*,char const*,int ) ;
 int FUNC_5 (int **,int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(EVP_PKEY_CTX *VAR_5, const char *VAR_6,
                             const char *VAR_7)
{
    EVP_PKEY_KDF_CTX *VAR_8 = VAR_5->data;
    EVP_KDF_CTX *VAR_9 = VAR_8->kctx;
    const EVP_KDF *VAR_10 = FUNC_0(VAR_9);
    BUF_MEM **VAR_11 = ((void*)0);
    const OSSL_PARAM *VAR_12 = FUNC_2(VAR_10);
    OSSL_PARAM VAR_13[2] = { VAR_4, VAR_4 };
    int VAR_14 = 0;


    if (FUNC_6(VAR_6, "md") == 0)
        VAR_6 = VAR_0;

    if (FUNC_6(VAR_6, "N") == 0)
        VAR_6 = VAR_2;

    if (!FUNC_4(&VAR_13[0], VAR_12, VAR_6,
                                       VAR_7, FUNC_7(VAR_7)))
        return 0;





    if (FUNC_6(VAR_13[0].key, VAR_3) == 0)
        VAR_11 = &VAR_8->collected_seed;
    else if (FUNC_6(VAR_13[0].key, VAR_1) == 0)
        VAR_11 = &VAR_8->collected_info;

    if (VAR_11 != ((void*)0))
        VAR_14 = FUNC_5(VAR_11, VAR_13[0].data, VAR_13[0].data_size);
    else
        VAR_14 = FUNC_1(VAR_9, VAR_13);
    FUNC_3(VAR_13[0].data);
    return VAR_14;
}
