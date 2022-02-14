
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* digest; TYPE_1__* pctx; } ;
struct TYPE_9__ {int (* md_ctrl ) (TYPE_3__*,int,int,void*) ;int * prov; } ;
struct TYPE_8__ {scalar_t__ operation; } ;
typedef int OSSL_PARAM ;
typedef TYPE_3__ EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;



 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (int ,size_t*) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (TYPE_3__*,int,int,void*) ;

int FUNC_7(EVP_MD_CTX *VAR_10, int VAR_11, int VAR_12, void *VAR_13)
{
    int VAR_14 = VAR_1;
    int VAR_15 = 1;
    size_t VAR_16;
    OSSL_PARAM VAR_17[2] = { VAR_9, VAR_9 };

    if (VAR_10 == ((void*)0) || VAR_10->digest == ((void*)0)) {
        FUNC_0(VAR_0, VAR_5);
        return 0;
    }

    if (VAR_10->digest->prov == ((void*)0)
        && (VAR_10->pctx == ((void*)0)
            || (VAR_10->pctx->operation != VAR_3
                && VAR_10->pctx->operation != VAR_2)))
        goto legacy;

    switch (VAR_11) {
    case 128:
        VAR_16 = (size_t)VAR_12;
        VAR_17[0] = FUNC_4(VAR_8, &VAR_16);
        break;
    case 129:
        VAR_15 = 0;
        VAR_17[0] = FUNC_5(VAR_6,
                                                     VAR_13, VAR_12 ? VAR_12 : 9999);
        break;
    case 130:
        VAR_17[0] = FUNC_3(VAR_7,
                                                      VAR_13, VAR_12);
        break;
    default:
        goto conclude;
    }

    if (VAR_15)
        VAR_14 = FUNC_2(VAR_10, VAR_17);
    else
        VAR_14 = FUNC_1(VAR_10, VAR_17);
    goto conclude;



 legacy:
    if (VAR_10->digest->md_ctrl == ((void*)0)) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }

    VAR_14 = VAR_10->digest->md_ctrl(VAR_10, VAR_11, VAR_12, VAR_13);
 conclude:
    if (VAR_14 <= 0)
        return 0;
    return VAR_14;
}
