
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* ctrl ) (TYPE_1__*,int,int,void*) ;int * prov; } ;
struct TYPE_6__ {TYPE_3__* cipher; int provctx; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (int ,size_t*) ;
 int FUNC_3 (int ,unsigned int*) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int,int,void*) ;

int FUNC_7(EVP_CIPHER_CTX *VAR_18, int VAR_19, int VAR_20, void *VAR_21)
{
    int VAR_22 = VAR_0;
    int VAR_23 = 1;
    size_t VAR_24 = VAR_20;
    unsigned int VAR_25;
    OSSL_PARAM VAR_26[2] = { VAR_17, VAR_17 };

    if (VAR_18 == ((void*)0) || VAR_18->cipher == ((void*)0)) {
        FUNC_0(VAR_1, VAR_4);
        return 0;
    }

    if (VAR_18->cipher->prov == ((void*)0))
        goto legacy;

    switch (VAR_19) {
    case 132:
        VAR_26[0] = FUNC_2(VAR_12, &VAR_24);
        break;
    case 133:
        VAR_23 = 0;
        VAR_26[0] =
            FUNC_1(VAR_13,
                                              VAR_21, VAR_24);
        break;

    case 134:







        return 1;
    case 131:
    default:
        goto end;
    case 137:
        VAR_23 = 0;
        VAR_26[0] = FUNC_1(VAR_10,
                                                      VAR_21, VAR_24);
        break;
    case 142:
        if (VAR_20 < 0)
            return 0;
        VAR_26[0] = FUNC_2(VAR_11, &VAR_24);
        break;
    case 138:
        VAR_26[0] =
            FUNC_1(VAR_9,
                                              VAR_21, VAR_24);
        break;
    case 135:
        VAR_23 = 0;
    case 129:
        if (VAR_20 < 0)
            return 0;
        VAR_25 = (unsigned int)VAR_20;
        VAR_26[0] = FUNC_3(VAR_15, &VAR_25);
        break;
    case 128:
        if (VAR_20 < 0)
            return 0;
        VAR_25 = (unsigned int)VAR_20;
        VAR_26[0] = FUNC_3(VAR_16, &VAR_25);
        break;
    case 143:
        VAR_23 = 0;
    case 140:
        VAR_26[0] = FUNC_1(VAR_6,
                                                      VAR_21, VAR_24);
        break;
    case 141:
        VAR_26[0] =
            FUNC_1(VAR_5,
                                              VAR_21, VAR_24);
        break;
    case 139:

        VAR_26[0] =
            FUNC_1(VAR_7,
                                              VAR_21, VAR_24);
        VAR_22 = FUNC_5(VAR_18->cipher, VAR_18->provctx, VAR_26);
        if (VAR_22 <= 0)
            goto end;
        VAR_26[0] =
            FUNC_2(VAR_8, &VAR_24);
        VAR_22 = FUNC_4(VAR_18->cipher, VAR_18->provctx, VAR_26);
        if (VAR_22 <= 0)
            goto end;
        return VAR_24;

    case 136:
        VAR_23 = 0;
    case 130:
        VAR_26[0] = FUNC_2(VAR_14, &VAR_24);
        break;

    }

    if (VAR_23)
        VAR_22 = FUNC_5(VAR_18->cipher, VAR_18->provctx, VAR_26);
    else
        VAR_22 = FUNC_4(VAR_18->cipher, VAR_18->provctx, VAR_26);
    goto end;


legacy:
    if (VAR_18->cipher->ctrl == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return 0;
    }

    VAR_22 = VAR_18->cipher->ctrl(VAR_18, VAR_19, VAR_20, VAR_21);

 end:
    if (VAR_22 == VAR_0) {
        FUNC_0(VAR_1,
               VAR_3);
        return 0;
    }
    return VAR_22;
}
