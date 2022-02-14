
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * sigprovctx; TYPE_1__* signature; } ;
struct TYPE_10__ {TYPE_2__ sig; } ;
struct TYPE_12__ {scalar_t__ operation; TYPE_4__* pmeth; TYPE_3__ op; } ;
struct TYPE_11__ {int (* verify ) (TYPE_5__*,unsigned char const*,size_t,unsigned char const*,size_t) ;} ;
struct TYPE_8__ {int (* verify ) (int *,unsigned char const*,size_t,unsigned char const*,size_t) ;} ;
typedef TYPE_5__ EVP_PKEY_CTX ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_5__*,unsigned char const*,size_t,unsigned char const*,size_t) ;

int FUNC_3(EVP_PKEY_CTX *VAR_3,
                    const unsigned char *VAR_4, size_t VAR_5,
                    const unsigned char *VAR_6, size_t VAR_7)
{
    int VAR_8;

    if (VAR_3 == ((void*)0)) {
        FUNC_0(0, VAR_1);
        return -2;
    }

    if (VAR_3->operation != VAR_0) {
        FUNC_0(0, VAR_2);
        return -1;
    }

    if (VAR_3->op.sig.sigprovctx == ((void*)0))
        goto legacy;

    VAR_8 = VAR_3->op.sig.signature->verify(VAR_3->op.sig.sigprovctx, VAR_4, VAR_5,
                                        VAR_6, VAR_7);

    return VAR_8;
 legacy:
    if (VAR_3->pmeth == ((void*)0) || VAR_3->pmeth->verify == ((void*)0)) {
        FUNC_0(0, VAR_1);
        return -2;
    }

    return VAR_3->pmeth->verify(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
