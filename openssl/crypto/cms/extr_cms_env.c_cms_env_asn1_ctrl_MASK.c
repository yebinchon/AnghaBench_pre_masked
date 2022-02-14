
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* kari; TYPE_1__* ktri; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_3__ d; } ;
struct TYPE_15__ {TYPE_4__* ameth; } ;
struct TYPE_14__ {int (* pkey_ctrl ) (TYPE_5__*,int ,int,TYPE_6__*) ;} ;
struct TYPE_12__ {int * pctx; } ;
struct TYPE_11__ {TYPE_5__* pkey; } ;
typedef int EVP_PKEY_CTX ;
typedef TYPE_5__ EVP_PKEY ;
typedef TYPE_6__ CMS_RecipientInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int ,int,TYPE_6__*) ;

int FUNC_3(CMS_RecipientInfo *VAR_6, int VAR_7)
{
    EVP_PKEY *VAR_8;
    int VAR_9;
    if (VAR_6->type == VAR_3)
        VAR_8 = VAR_6->d.ktri->pkey;
    else if (VAR_6->type == VAR_2) {
        EVP_PKEY_CTX *VAR_10 = VAR_6->d.kari->pctx;

        if (VAR_10 == ((void*)0))
            return 0;
        VAR_8 = FUNC_1(VAR_10);
        if (VAR_8 == ((void*)0))
            return 0;
    } else
        return 0;
    if (VAR_8->ameth == ((void*)0) || VAR_8->ameth->pkey_ctrl == ((void*)0))
        return 1;
    VAR_9 = VAR_8->ameth->pkey_ctrl(VAR_8, VAR_0, VAR_7, VAR_6);
    if (VAR_9 == -2) {
        FUNC_0(VAR_1,
               VAR_5);
        return 0;
    }
    if (VAR_9 <= 0) {
        FUNC_0(VAR_1, VAR_4);
        return 0;
    }
    return 1;
}
