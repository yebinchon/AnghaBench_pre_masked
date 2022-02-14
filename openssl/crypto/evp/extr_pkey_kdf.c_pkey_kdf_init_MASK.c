
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* data; TYPE_1__* pmeth; } ;
struct TYPE_8__ {int * kctx; } ;
struct TYPE_7__ {int pkey_id; } ;
typedef TYPE_2__ EVP_PKEY_KDF_CTX ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int EVP_KDF_CTX ;
typedef int EVP_KDF ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_0)
{
    EVP_PKEY_KDF_CTX *VAR_1;
    EVP_KDF_CTX *VAR_2;
    const char *VAR_3 = FUNC_3(VAR_0->pmeth->pkey_id);
    EVP_KDF *VAR_4;

    VAR_1 = FUNC_5(sizeof(*VAR_1));
    if (VAR_1 == ((void*)0))
        return 0;

    VAR_4 = FUNC_1(((void*)0), VAR_3, ((void*)0));
    VAR_2 = FUNC_0(VAR_4);
    FUNC_2(VAR_4);
    if (VAR_2 == ((void*)0)) {
        FUNC_4(VAR_1);
        return 0;
    }

    VAR_1->kctx = VAR_2;
    VAR_0->data = VAR_1;
    return 1;
}
