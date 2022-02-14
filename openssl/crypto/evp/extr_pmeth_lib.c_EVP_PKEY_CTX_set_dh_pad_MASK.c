
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * exchprovctx; } ;
struct TYPE_9__ {TYPE_1__ kex; } ;
struct TYPE_10__ {TYPE_2__ op; } ;
typedef int OSSL_PARAM ;
typedef TYPE_3__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,unsigned int*) ;

int FUNC_6(EVP_PKEY_CTX *VAR_6, int VAR_7)
{
    OSSL_PARAM VAR_8[2];
    unsigned int VAR_9 = VAR_7;


    if (VAR_6 == ((void*)0) || !FUNC_1(VAR_6)) {
        FUNC_0(VAR_0, VAR_4);
        return -2;
    }


    if (VAR_6->op.kex.exchprovctx == ((void*)0))
        return FUNC_2(VAR_6, VAR_2, VAR_3,
                                 VAR_1, VAR_7, ((void*)0));

    VAR_8[0] = FUNC_5(VAR_5, &VAR_9);
    VAR_8[1] = FUNC_4();

    return FUNC_3(VAR_6, VAR_8);
}
