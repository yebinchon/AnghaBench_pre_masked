
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * sigprovctx; } ;
struct TYPE_11__ {int * exchprovctx; } ;
struct TYPE_13__ {TYPE_2__ sig; TYPE_1__ kex; } ;
struct TYPE_15__ {int operation; TYPE_4__* pmeth; TYPE_3__ op; } ;
struct TYPE_14__ {int (* ctrl ) (TYPE_5__*,int,int,void*) ;int pkey_id; int * digest_custom; } ;
typedef TYPE_5__ EVP_PKEY_CTX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,int,int,int,int,void*) ;
 int FUNC_4 (TYPE_5__*,int,int,void*) ;

int FUNC_5(EVP_PKEY_CTX *VAR_5, int VAR_6, int VAR_7,
                      int VAR_8, int VAR_9, void *VAR_10)
{
    int VAR_11;

    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_2);
        return -2;
    }

    if ((FUNC_0(VAR_5) && VAR_5->op.kex.exchprovctx != ((void*)0))
            || (FUNC_1(VAR_5)
                && VAR_5->op.sig.sigprovctx != ((void*)0)))
        return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

    if (VAR_5->pmeth == ((void*)0) || VAR_5->pmeth->ctrl == ((void*)0)) {
        FUNC_2(VAR_0, VAR_2);
        return -2;
    }
    if ((VAR_6 != -1) && (VAR_5->pmeth->pkey_id != VAR_6))
        return -1;


    if (VAR_5->pmeth->digest_custom != ((void*)0))
        goto doit;

    if (VAR_5->operation == VAR_1) {
        FUNC_2(VAR_0, VAR_4);
        return -1;
    }

    if ((VAR_7 != -1) && !(VAR_5->operation & VAR_7)) {
        FUNC_2(VAR_0, VAR_3);
        return -1;
    }

 doit:
    VAR_11 = VAR_5->pmeth->ctrl(VAR_5, VAR_8, VAR_9, VAR_10);

    if (VAR_11 == -2)
        FUNC_2(VAR_0, VAR_2);

    return VAR_11;
}
