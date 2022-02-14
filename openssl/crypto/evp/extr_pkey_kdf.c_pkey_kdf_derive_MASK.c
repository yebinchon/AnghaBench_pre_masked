
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* data; } ;
struct TYPE_9__ {TYPE_2__* collected_info; TYPE_1__* collected_seed; int * kctx; } ;
struct TYPE_8__ {int length; int data; } ;
struct TYPE_7__ {int length; int data; } ;
typedef int OSSL_PARAM ;
typedef TYPE_3__ EVP_PKEY_KDF_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_KDF_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 size_t FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 size_t VAR_3 ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_4, unsigned char *VAR_5,
                           size_t *VAR_6)
{
    EVP_PKEY_KDF_CTX *VAR_7 = VAR_4->data;
    EVP_KDF_CTX *VAR_8 = VAR_7->kctx;
    size_t VAR_9 = FUNC_2(VAR_8);
    int VAR_10;

    if (VAR_7->collected_seed != ((void*)0)) {
        OSSL_PARAM VAR_11[] = { VAR_2, VAR_2 };

        VAR_11[0] =
            FUNC_3(VAR_1,
                                              VAR_7->collected_seed->data,
                                              VAR_7->collected_seed->length);

        VAR_10 = FUNC_0(VAR_8, VAR_11);
        FUNC_4(VAR_7);
        if (!VAR_10)
            return 0;
    }
    if (VAR_7->collected_info != ((void*)0)) {
        OSSL_PARAM VAR_12[] = { VAR_2, VAR_2 };

        VAR_12[0] =
            FUNC_3(VAR_0,
                                              VAR_7->collected_info->data,
                                              VAR_7->collected_info->length);

        VAR_10 = FUNC_0(VAR_8, VAR_12);
        FUNC_4(VAR_7);
        if (!VAR_10)
            return 0;
    }
    if (VAR_9 == 0 || VAR_9 == VAR_3) {

        if (VAR_5 == ((void*)0))
            return 0;
    } else {

        *VAR_6 = VAR_9;
        if (VAR_5 == ((void*)0))
            return 1;
    }
    return FUNC_1(VAR_8, VAR_5, *VAR_6);
}
