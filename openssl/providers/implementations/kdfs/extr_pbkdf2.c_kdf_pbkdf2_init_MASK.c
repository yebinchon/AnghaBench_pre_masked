
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lower_bound_checks; int iter; int digest; int provctx; } ;
typedef int OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ KDF_PBKDF2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(KDF_PBKDF2 *VAR_5)
{
    OSSL_PARAM VAR_6[2] = { VAR_1, VAR_1 };
    OPENSSL_CTX *VAR_7 = FUNC_1(VAR_5->provctx);

    VAR_6[0] = FUNC_0(VAR_0,
                                                 VAR_3, 0);
    if (!FUNC_2(&VAR_5->digest, VAR_6, VAR_7))

        FUNC_3(&VAR_5->digest);
    VAR_5->iter = VAR_2;
    VAR_5->lower_bound_checks = VAR_4;
}
