
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int data; } ;
struct TYPE_12__ {TYPE_2__* pmeth; } ;
struct TYPE_9__ {TYPE_8__ ktmp; } ;
struct TYPE_11__ {int type; int ctx; TYPE_1__ raw_data; } ;
struct TYPE_10__ {int pkey_id; } ;
typedef TYPE_3__ MAC_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_MAC_CTX ;
typedef int ASN1_OCTET_STRING ;


 int * FUNC_0 (TYPE_8__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int,int *) ;



__attribute__((used)) static int FUNC_6(EVP_PKEY_CTX *VAR_0, EVP_PKEY *VAR_1)
{
    MAC_PKEY_CTX *VAR_2 = FUNC_4(VAR_0);
    int VAR_3 = VAR_0->pmeth->pkey_id;

    switch (VAR_2->type) {
    case 128:
        {
            ASN1_OCTET_STRING *VAR_4 = ((void*)0);

            if (!VAR_2->raw_data.ktmp.data)
                return 0;
            VAR_4 = FUNC_0(&VAR_2->raw_data.ktmp);
            if (!VAR_4)
                return 0;
            FUNC_5(VAR_1, VAR_3, VAR_4);
        }
        break;
    case 129:
        {
            EVP_MAC_CTX *VAR_5 = FUNC_1(VAR_2->ctx);

            if (VAR_5 == ((void*)0))
                return 0;
            if (!FUNC_3(FUNC_2(VAR_2->ctx)))
                return 0;
            FUNC_5(VAR_1, VAR_3, VAR_5);
        }
        break;
    default:

        return 0;
    }

    return 1;
}
