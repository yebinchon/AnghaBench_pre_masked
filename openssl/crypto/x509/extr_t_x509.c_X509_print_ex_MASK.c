
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
typedef int X509 ;
struct TYPE_4__ {int length; scalar_t__ type; int * data; } ;
typedef int EVP_PKEY ;
typedef int BIO ;
typedef int ASN1_OBJECT ;
typedef TYPE_1__ ASN1_INTEGER ;
typedef int ASN1_BIT_STRING ;


 long FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *,int,int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (int *,char*,int ,unsigned long,int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 scalar_t__ FUNC_11 (int *,int ,int,unsigned long) ;
 int FUNC_12 (int **,int *,int *,int *,int *) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int const**,int const**,int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *,int const**,int const**) ;
 int * FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 TYPE_1__* FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 long FUNC_25 (int *) ;
 int FUNC_26 (int *,int const*,int) ;
 scalar_t__ FUNC_27 (int *,int const*,int const*) ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 scalar_t__ FUNC_28 (int *,int *) ;

int FUNC_29(BIO *VAR_16, X509 *VAR_17, unsigned long VAR_18,
                  unsigned long VAR_19)
{
    long VAR_20;
    int VAR_21 = 0, VAR_22;
    char *VAR_23 = ((void*)0), VAR_24 = ' ';
    int VAR_25 = 0;
    ASN1_INTEGER *VAR_26;
    EVP_PKEY *VAR_27 = ((void*)0);
    const char *VAR_28;

    if ((VAR_18 & VAR_14) == VAR_15) {
        VAR_24 = '\n';
        VAR_25 = 12;
    }

    if (VAR_18 == VAR_1)
        VAR_25 = 16;

    if (!(VAR_19 & VAR_4)) {
        if (FUNC_4(VAR_16, "Certificate:\n", 13) <= 0)
            goto err;
        if (FUNC_4(VAR_16, "    Data:\n", 10) <= 0)
            goto err;
    }
    if (!(VAR_19 & VAR_13)) {
        VAR_20 = FUNC_25(VAR_17);
        if (VAR_20 >= 0 && VAR_20 <= 2) {
            if (FUNC_2(VAR_16, "%8sVersion: %ld (0x%lx)\n", "", VAR_20 + 1, (unsigned long)VAR_20) <= 0)
                goto err;
        } else {
            if (FUNC_2(VAR_16, "%8sVersion: Unknown (%ld)\n", "", VAR_20) <= 0)
                goto err;
        }
    }
    if (!(VAR_19 & VAR_8)) {

        if (FUNC_4(VAR_16, "        Serial Number:", 22) <= 0)
            goto err;

        VAR_26 = FUNC_23(VAR_17);
        if (VAR_26->length <= (int)sizeof(long)) {
                FUNC_7();
                VAR_20 = FUNC_0(VAR_26);
                FUNC_5();
        } else {
            VAR_20 = -1;
        }
        if (VAR_20 != -1) {
            unsigned long VAR_29;
            if (VAR_26->type == VAR_0) {
                VAR_29 = 0 - (unsigned long)VAR_20;
                VAR_28 = "-";
            } else {
                VAR_29 = VAR_20;
                VAR_28 = "";
            }
            if (FUNC_2(VAR_16, " %s%lu (%s0x%lx)\n", VAR_28, VAR_29, VAR_28, VAR_29) <= 0)
                goto err;
        } else {
            VAR_28 = (VAR_26->type == VAR_0) ? " (Negative)" : "";
            if (FUNC_2(VAR_16, "\n%12s%s", "", VAR_28) <= 0)
                goto err;

            for (VAR_22 = 0; VAR_22 < VAR_26->length; VAR_22++) {
                if (FUNC_2(VAR_16, "%02x%c", VAR_26->data[VAR_22],
                               ((VAR_22 + 1 == VAR_26->length) ? '\n' : ':')) <= 0)
                    goto err;
            }
        }

    }

    if (!(VAR_19 & VAR_10)) {
        const X509_ALGOR *VAR_30 = FUNC_19(VAR_17);

        if (FUNC_3(VAR_16, "    ") <= 0)
            goto err;
        if (FUNC_27(VAR_16, VAR_30, ((void*)0)) <= 0)
            goto err;
    }

    if (!(VAR_19 & VAR_6)) {
        if (FUNC_2(VAR_16, "        Issuer:%c", VAR_24) <= 0)
            goto err;
        if (FUNC_11(VAR_16, FUNC_22(VAR_17), VAR_25, VAR_18)
            < 0)
            goto err;
        if (FUNC_4(VAR_16, "\n", 1) <= 0)
            goto err;
    }
    if (!(VAR_19 & VAR_12)) {
        if (FUNC_4(VAR_16, "        Validity\n", 17) <= 0)
            goto err;
        if (FUNC_4(VAR_16, "            Not Before: ", 24) <= 0)
            goto err;
        if (!FUNC_1(VAR_16, FUNC_16(VAR_17)))
            goto err;
        if (FUNC_4(VAR_16, "\n            Not After : ", 25) <= 0)
            goto err;
        if (!FUNC_1(VAR_16, FUNC_15(VAR_17)))
            goto err;
        if (FUNC_4(VAR_16, "\n", 1) <= 0)
            goto err;
    }
    if (!(VAR_19 & VAR_11)) {
        if (FUNC_2(VAR_16, "        Subject:%c", VAR_24) <= 0)
            goto err;
        if (FUNC_11
            (VAR_16, FUNC_24(VAR_17), VAR_25, VAR_18) < 0)
            goto err;
        if (FUNC_4(VAR_16, "\n", 1) <= 0)
            goto err;
    }
    if (!(VAR_19 & VAR_7)) {
        X509_PUBKEY *VAR_31 = FUNC_21(VAR_17);
        ASN1_OBJECT *VAR_32;
        FUNC_12(&VAR_32, ((void*)0), ((void*)0), ((void*)0), VAR_31);
        if (FUNC_4(VAR_16, "        Subject Public Key Info:\n", 33) <= 0)
            goto err;
        if (FUNC_2(VAR_16, "%12sPublic Key Algorithm: ", "") <= 0)
            goto err;
        if (FUNC_28(VAR_16, VAR_32) <= 0)
            goto err;
        if (FUNC_3(VAR_16, "\n") <= 0)
            goto err;

        VAR_27 = FUNC_17(VAR_17);
        if (VAR_27 == ((void*)0)) {
            FUNC_2(VAR_16, "%12sUnable to load Public Key\n", "");
            FUNC_6(VAR_16);
        } else {
            FUNC_8(VAR_16, VAR_27, 16, ((void*)0));
        }
    }

    if (!(VAR_19 & VAR_5)) {
        const ASN1_BIT_STRING *VAR_33, *VAR_34;
        FUNC_20(VAR_17, &VAR_33, &VAR_34);
        if (VAR_33 != ((void*)0)) {
            if (FUNC_2(VAR_16, "%8sIssuer Unique ID: ", "") <= 0)
                goto err;
            if (!FUNC_26(VAR_16, VAR_33, 12))
                goto err;
        }
        if (VAR_34 != ((void*)0)) {
            if (FUNC_2(VAR_16, "%8sSubject Unique ID: ", "") <= 0)
                goto err;
            if (!FUNC_26(VAR_16, VAR_34, 12))
                goto err;
        }
    }

    if (!(VAR_19 & VAR_3))
        FUNC_10(VAR_16, "X509v3 extensions",
                                FUNC_14(VAR_17), VAR_19, 8);

    if (!(VAR_19 & VAR_9)) {
        const X509_ALGOR *VAR_35;
        const ASN1_BIT_STRING *VAR_36;
        FUNC_18(&VAR_36, &VAR_35, VAR_17);
        if (FUNC_27(VAR_16, VAR_35, VAR_36) <= 0)
            goto err;
    }
    if (!(VAR_19 & VAR_2)) {
        if (!FUNC_13(VAR_16, VAR_17, 0))
            goto err;
    }
    VAR_21 = 1;
 err:
    FUNC_9(VAR_23);
    return VAR_21;
}
