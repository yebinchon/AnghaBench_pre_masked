
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * file; } ;
struct TYPE_7__ {TYPE_1__ file; } ;
struct TYPE_8__ {int type; TYPE_2__ _; } ;
typedef TYPE_3__ OSSL_STORE_LOADER_CTX ;
typedef int BIO ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;

OSSL_STORE_LOADER_CTX *FUNC_2(BIO *VAR_3)
{
    OSSL_STORE_LOADER_CTX *VAR_4 = FUNC_0(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1,
                      VAR_0);
        return ((void*)0);
    }

    VAR_4->_.file.file = VAR_3;
    VAR_4->type = VAR_2;

    return VAR_4;
}
