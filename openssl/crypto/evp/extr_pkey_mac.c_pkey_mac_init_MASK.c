
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ keygen_info_count; TYPE_3__* pmeth; } ;
struct TYPE_12__ {int type; } ;
struct TYPE_13__ {TYPE_1__ ktmp; } ;
struct TYPE_15__ {TYPE_2__ raw_data; int type; int * ctx; } ;
struct TYPE_14__ {int pkey_id; } ;
typedef TYPE_4__ MAC_PKEY_CTX ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef int EVP_MAC ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(EVP_PKEY_CTX *VAR_6)
{
    MAC_PKEY_CTX *VAR_7;

    int VAR_8 = VAR_6->pmeth->pkey_id;
    EVP_MAC *VAR_9 = FUNC_1(((void*)0), FUNC_4(VAR_8), ((void*)0));

    if ((VAR_7 = FUNC_6(sizeof(*VAR_7))) == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0);
        return 0;
    }

    VAR_7->ctx = FUNC_0(VAR_9);
    if (VAR_7->ctx == ((void*)0)) {
        FUNC_5(VAR_7);
        return 0;
    }

    if (VAR_8 == VAR_2) {
        VAR_7->type = VAR_3;
    } else {
        VAR_7->type = VAR_4;
        VAR_7->raw_data.ktmp.type = VAR_5;
    }

    FUNC_7(VAR_6);
    FUNC_2(VAR_6, VAR_7);
    VAR_6->keygen_info_count = 0;

    return 1;
}
