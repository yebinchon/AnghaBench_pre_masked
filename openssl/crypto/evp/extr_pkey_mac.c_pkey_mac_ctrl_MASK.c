
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {void* data; int length; } ;
struct TYPE_14__ {int * engine; TYPE_2__* pkey; } ;
struct TYPE_12__ {void* md; int ktmp; } ;
struct TYPE_13__ {int * ctx; TYPE_3__ raw_data; int type; } ;
struct TYPE_10__ {scalar_t__ ptr; } ;
struct TYPE_11__ {TYPE_1__ pkey; } ;
typedef int OSSL_PARAM ;
typedef TYPE_4__ MAC_PKEY_CTX ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef int EVP_MAC_CTX ;
typedef TYPE_6__ ASN1_OCTET_STRING ;


 int FUNC_0 (int *,void*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*) ;





 TYPE_4__* FUNC_9 (TYPE_5__*) ;


 scalar_t__ FUNC_10 (int ) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,void*,int) ;
 int FUNC_13 (int ,size_t*) ;
 int FUNC_14 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_15(EVP_PKEY_CTX *VAR_5, int VAR_6, int VAR_7, void *VAR_8)
{
    MAC_PKEY_CTX *VAR_9 = FUNC_9(VAR_5);

    switch (VAR_6) {

    case 134:
        switch (VAR_9->type) {
        case 128:
            return -2;
        case 129:
            {
                OSSL_PARAM VAR_10[3];
                size_t VAR_11 = 0;
                char *VAR_12 = (char *)FUNC_10(FUNC_2(VAR_8));

                char *VAR_13 = (char *)FUNC_1(VAR_5->engine);

                VAR_10[VAR_11++] =
                    FUNC_14("engine", VAR_13, 0);

                VAR_10[VAR_11++] =
                    FUNC_14(VAR_0,
                                                     VAR_12, 0);
                VAR_10[VAR_11] = FUNC_11();

                if (!FUNC_6(VAR_9->ctx, VAR_10)
                    || !FUNC_7(VAR_9->ctx))
                    return 0;
            }
            break;
        default:

            return 0;
        }
        break;

    case 132:
        switch (VAR_9->type) {
        case 128:
            VAR_9->raw_data.md = VAR_8;
            break;
        case 129: {
                EVP_MAC_CTX *VAR_14;

                if (VAR_5->pkey == ((void*)0))
                    return 0;
                VAR_14 = FUNC_3((EVP_MAC_CTX *)VAR_5->pkey
                                              ->pkey.ptr);
                if (VAR_14 == ((void*)0))
                    return 0;
                FUNC_4(VAR_9->ctx);
                VAR_9->ctx = VAR_14;
            }
            break;
        default:

            return 0;
        }
        break;

    case 131:
        {
            OSSL_PARAM VAR_15[2] = { VAR_4, VAR_4 };
            size_t VAR_16 = (size_t)VAR_7;
            size_t VAR_17 = 0;
            VAR_15[0] =
                FUNC_13(VAR_3, &VAR_16);

            if (!FUNC_6(VAR_9->ctx, VAR_15))
                return 0;

            VAR_15[0] =
                FUNC_13(VAR_3, &VAR_17);

            if (!FUNC_5(VAR_9->ctx, VAR_15))
                return 0;






            if (VAR_17 != VAR_16)
                return -2;
        }
        break;
    case 130:
        switch (VAR_9->type) {
        case 128:
            if ((!VAR_8 && VAR_7 > 0) || (VAR_7 < -1))
                return 0;
            if (!FUNC_0(&VAR_9->raw_data.ktmp, VAR_8, VAR_7))
                return 0;
            break;
        case 129:
            {
                OSSL_PARAM VAR_18[2];
                size_t VAR_19 = 0;

                VAR_18[VAR_19++] =
                    FUNC_12(VAR_2,
                                                      VAR_8, VAR_7);
                VAR_18[VAR_19] = FUNC_11();

                return FUNC_6(VAR_9->ctx, VAR_18);
            }
            break;
        default:

            return 0;
        }
        break;

    case 133:
        switch (VAR_9->type) {
        case 128:

            if (!FUNC_7(VAR_9->ctx))
                return 0;
            {
                ASN1_OCTET_STRING *VAR_20 =
                    (ASN1_OCTET_STRING *)VAR_5->pkey->pkey.ptr;
                OSSL_PARAM VAR_21[4];
                size_t VAR_22 = 0;
                char *VAR_23 =
                    (char *)FUNC_10(FUNC_8(VAR_9->raw_data.md));

                char *VAR_24 = VAR_5->engine == ((void*)0)
                    ? ((void*)0) : (char *)FUNC_1(VAR_5->engine);

                if (VAR_24 != ((void*)0))
                    VAR_21[VAR_22++] =
                        FUNC_14("engine", VAR_24, 0);

                VAR_21[VAR_22++] =
                    FUNC_14(VAR_1,
                                                     VAR_23, 0);
                VAR_21[VAR_22++] =
                    FUNC_12(VAR_2,
                                                      VAR_20->data, VAR_20->length);
                VAR_21[VAR_22] = FUNC_11();

                return FUNC_6(VAR_9->ctx, VAR_21);
            }
            break;
        case 129:
            return -2;
        default:

            return 0;
        }
        break;

    default:
        return -2;

    }
    return 1;
}
