
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* signature; } ;
struct TYPE_11__ {TYPE_2__ sig; } ;
struct TYPE_12__ {TYPE_3__ op; } ;
struct TYPE_9__ {int prov; } ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int * FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(EVP_PKEY_CTX *VAR_0, const char *VAR_1,
                                    const char *VAR_2)
{

    if (FUNC_7(VAR_1, "dh_pad") == 0) {
        int VAR_3;

        VAR_3 = FUNC_5(VAR_2);
        return FUNC_3(VAR_0, VAR_3);
    }

    if (FUNC_7(VAR_1, "digest") == 0) {
        int VAR_4;
        EVP_MD *VAR_5;

        if (!FUNC_2(VAR_0) || VAR_0->op.sig.signature == ((void*)0))
            return 0;
        VAR_5 = FUNC_0(FUNC_6(VAR_0->op.sig.signature->prov),
                          VAR_2, ((void*)0));
        if (VAR_5 == ((void*)0))
            return 0;
        VAR_4 = FUNC_4(VAR_0, VAR_5);
        FUNC_1(VAR_5);
        return VAR_4;
    }

    return 0;
}
