
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_11__ {unsigned char* data; int length; } ;
struct TYPE_10__ {int dirty_cnt; int p; int * priv_key; int g; int * pub_key; } ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef int EVP_PKEY ;
typedef TYPE_1__ DSA ;
typedef int BN_CTX ;
typedef TYPE_2__ ASN1_STRING ;
typedef TYPE_3__ ASN1_INTEGER ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int *,int ,int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_4 ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,unsigned char const**,int*,int const**,int const*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int *,int*,void const**,int const*) ;
 TYPE_3__* FUNC_13 (int *,unsigned char const**,int) ;
 TYPE_1__* FUNC_14 (int *,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_15(EVP_PKEY *VAR_7, const PKCS8_PRIV_KEY_INFO *VAR_8)
{
    const unsigned char *VAR_9, *VAR_10;
    int VAR_11, VAR_12;
    int VAR_13;
    const void *VAR_14;
    const ASN1_STRING *VAR_15;
    const X509_ALGOR *VAR_16;
    ASN1_INTEGER *VAR_17 = ((void*)0);
    BN_CTX *VAR_18 = ((void*)0);

    DSA *VAR_19 = ((void*)0);

    int VAR_20 = 0;

    if (!FUNC_11(((void*)0), &VAR_9, &VAR_11, &VAR_16, VAR_8))
        return 0;
    FUNC_12(((void*)0), &VAR_13, &VAR_14, VAR_16);

    if ((VAR_17 = FUNC_13(((void*)0), &VAR_9, VAR_11)) == ((void*)0))
        goto decerr;
    if (VAR_17->type == VAR_5 || VAR_13 != VAR_6)
        goto decerr;

    VAR_15 = VAR_14;
    VAR_10 = VAR_15->data;
    VAR_12 = VAR_15->length;
    if ((VAR_19 = FUNC_14(((void*)0), &VAR_10, VAR_12)) == ((void*)0))
        goto decerr;

    if ((VAR_19->priv_key = FUNC_6()) == ((void*)0)
        || !FUNC_0(VAR_17, VAR_19->priv_key)) {
        FUNC_9(VAR_1, VAR_2);
        goto dsaerr;
    }

    if ((VAR_19->pub_key = FUNC_5()) == ((void*)0)) {
        FUNC_9(VAR_1, VAR_4);
        goto dsaerr;
    }
    if ((VAR_18 = FUNC_3()) == ((void*)0)) {
        FUNC_9(VAR_1, VAR_4);
        goto dsaerr;
    }

    FUNC_7(VAR_19->priv_key, VAR_0);
    if (!FUNC_4(VAR_19->pub_key, VAR_19->g, VAR_19->priv_key, VAR_19->p, VAR_18)) {
        FUNC_9(VAR_1, VAR_2);
        goto dsaerr;
    }

    VAR_19->dirty_cnt++;
    FUNC_10(VAR_7, VAR_19);

    VAR_20 = 1;
    goto done;

 decerr:
    FUNC_9(VAR_1, VAR_3);
 dsaerr:
    FUNC_8(VAR_19);
 done:
    FUNC_2(VAR_18);
    FUNC_1(VAR_17);
    return VAR_20;
}
