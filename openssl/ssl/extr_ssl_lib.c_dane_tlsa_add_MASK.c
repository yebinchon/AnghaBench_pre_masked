
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_11__ {scalar_t__ usage; scalar_t__ selector; size_t mtype; size_t dlen; int * spki; int * data; } ;
typedef TYPE_2__ danetls_record ;
typedef int X509 ;
struct TYPE_12__ {int umask; int * trecs; TYPE_1__* dctx; int * certs; } ;
struct TYPE_10__ {scalar_t__* mdord; } ;
typedef TYPE_3__ SSL_DANE ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 TYPE_2__* FUNC_4 (int) ;
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
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,unsigned char const**,int) ;
 int FUNC_9 (int **,unsigned char const**,int) ;
 int FUNC_10 (int *,unsigned char const*,size_t) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,TYPE_2__*,int) ;
 int FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_2__*) ;
 int * FUNC_17 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_18(SSL_DANE *VAR_16,
                         uint8_t VAR_17,
                         uint8_t VAR_18,
                         uint8_t VAR_19, unsigned const char *VAR_20, size_t VAR_21)
{
    danetls_record *VAR_22;
    const EVP_MD *VAR_23 = ((void*)0);
    int VAR_24 = (int)VAR_21;
    int VAR_25;
    int VAR_26;

    if (VAR_16->trecs == ((void*)0)) {
        FUNC_5(VAR_6, VAR_7);
        return -1;
    }

    if (VAR_24 < 0 || VAR_21 != (size_t)VAR_24) {
        FUNC_5(VAR_6, VAR_10);
        return 0;
    }

    if (VAR_17 > VAR_4) {
        FUNC_5(VAR_6, VAR_9);
        return 0;
    }

    if (VAR_18 > VAR_1) {
        FUNC_5(VAR_6, VAR_14);
        return 0;
    }

    if (VAR_19 != VAR_0) {
        VAR_23 = FUNC_17(VAR_16, VAR_19);
        if (VAR_23 == ((void*)0)) {
            FUNC_5(VAR_6, VAR_12);
            return 0;
        }
    }

    if (VAR_23 != ((void*)0) && VAR_21 != (size_t)FUNC_1(VAR_23)) {
        FUNC_5(VAR_6, VAR_11);
        return 0;
    }
    if (!VAR_20) {
        FUNC_5(VAR_6, VAR_15);
        return 0;
    }

    if ((VAR_22 = FUNC_4(sizeof(*VAR_22))) == ((void*)0)) {
        FUNC_5(VAR_6, VAR_5);
        return -1;
    }

    VAR_22->usage = VAR_17;
    VAR_22->selector = VAR_18;
    VAR_22->mtype = VAR_19;
    VAR_22->data = FUNC_3(VAR_21);
    if (VAR_22->data == ((void*)0)) {
        FUNC_16(VAR_22);
        FUNC_5(VAR_6, VAR_5);
        return -1;
    }
    FUNC_10(VAR_22->data, VAR_20, VAR_21);
    VAR_22->dlen = VAR_21;


    if (VAR_19 == VAR_0) {
        const unsigned char *VAR_27 = VAR_20;
        X509 *VAR_28 = ((void*)0);
        EVP_PKEY *VAR_29 = ((void*)0);

        switch (VAR_18) {
        case 129:
            if (!FUNC_9(&VAR_28, &VAR_27, VAR_24) || VAR_27 < VAR_20 ||
                VAR_21 != (size_t)(VAR_27 - VAR_20)) {
                FUNC_16(VAR_22);
                FUNC_5(VAR_6, VAR_8);
                return 0;
            }
            if (FUNC_7(VAR_28) == ((void*)0)) {
                FUNC_16(VAR_22);
                FUNC_5(VAR_6, VAR_8);
                return 0;
            }

            if ((FUNC_0(VAR_17) & VAR_2) == 0) {
                FUNC_6(VAR_28);
                break;
            }
            if ((VAR_16->certs == ((void*)0) &&
                 (VAR_16->certs = FUNC_11()) == ((void*)0)) ||
                !FUNC_12(VAR_16->certs, VAR_28)) {
                FUNC_5(VAR_6, VAR_5);
                FUNC_6(VAR_28);
                FUNC_16(VAR_22);
                return -1;
            }
            break;

        case 128:
            if (!FUNC_8(&VAR_29, &VAR_27, VAR_24) || VAR_27 < VAR_20 ||
                VAR_21 != (size_t)(VAR_27 - VAR_20)) {
                FUNC_16(VAR_22);
                FUNC_5(VAR_6, VAR_13);
                return 0;
            }






            if (VAR_17 == VAR_3)
                VAR_22->spki = VAR_29;
            else
                FUNC_2(VAR_29);
            break;
        }
    }
    VAR_26 = FUNC_14(VAR_16->trecs);
    for (VAR_25 = 0; VAR_25 < VAR_26; ++VAR_25) {
        danetls_record *VAR_30 = FUNC_15(VAR_16->trecs, VAR_25);

        if (VAR_30->usage > VAR_17)
            continue;
        if (VAR_30->usage < VAR_17)
            break;
        if (VAR_30->selector > VAR_18)
            continue;
        if (VAR_30->selector < VAR_18)
            break;
        if (VAR_16->dctx->mdord[VAR_30->mtype] > VAR_16->dctx->mdord[VAR_19])
            continue;
        break;
    }

    if (!FUNC_13(VAR_16->trecs, VAR_22, VAR_25)) {
        FUNC_16(VAR_22);
        FUNC_5(VAR_6, VAR_5);
        return -1;
    }
    VAR_16->umask |= FUNC_0(VAR_17);

    return 1;
}
