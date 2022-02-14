
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int length; int data; } ;
struct TYPE_7__ {TYPE_1__ ktmp; } ;
struct TYPE_8__ {int type; int ctx; TYPE_2__ raw_data; } ;
typedef TYPE_3__ MAC_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_MAC ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(EVP_PKEY_CTX *VAR_0)
{





    MAC_PKEY_CTX *VAR_1 = VAR_0 == ((void*)0) ? ((void*)0) : FUNC_3(VAR_0);

    if (VAR_1 != ((void*)0)) {
        EVP_MAC *VAR_2 = FUNC_1(VAR_1->ctx);

        switch (VAR_1->type) {
        case 128:
            FUNC_5(VAR_1->raw_data.ktmp.data,
                               VAR_1->raw_data.ktmp.length);
            break;
        }
        FUNC_0(VAR_1->ctx);
        FUNC_2(VAR_2);
        FUNC_6(VAR_1);
        FUNC_4(VAR_0, ((void*)0));
    }
}
