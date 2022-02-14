
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * sigprovctx; } ;
struct TYPE_15__ {int * exchprovctx; } ;
struct TYPE_13__ {TYPE_1__ sig; TYPE_4__ kex; } ;
struct TYPE_16__ {TYPE_3__* pmeth; TYPE_2__ op; } ;
struct TYPE_14__ {int (* ctrl_str ) (TYPE_5__*,char const*,char const*) ;} ;
typedef TYPE_5__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (TYPE_5__*,char const*,char const*) ;

int FUNC_7(EVP_PKEY_CTX *VAR_4,
                          const char *VAR_5, const char *VAR_6)
{
    if (VAR_4 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_3);
        return -2;
    }

    if ((FUNC_0(VAR_4) && VAR_4->op.kex.exchprovctx != ((void*)0))
            || (FUNC_1(VAR_4)
                && VAR_4->op.sig.sigprovctx != ((void*)0)))
        return FUNC_4(VAR_4, VAR_5, VAR_6);

    if (!VAR_4 || !VAR_4->pmeth || !VAR_4->pmeth->ctrl_str) {
        FUNC_3(VAR_0, VAR_3);
        return -2;
    }
    if (FUNC_5(VAR_5, "digest") == 0)
        return FUNC_2(VAR_4, VAR_2, VAR_1,
                               VAR_6);
    return VAR_4->pmeth->ctrl_str(VAR_4, VAR_5, VAR_6);
}
