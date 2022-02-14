
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int operation; TYPE_1__* data; } ;
struct TYPE_6__ {void* md; int pad_mode; int saltlen; int min_saltlen; int nbits; int primes; void* mgf1md; unsigned char* oaep_label; int oaep_labellen; void* pub_exp; } ;
typedef TYPE_1__ RSA_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef void EVP_MD ;
typedef int BIGNUM ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_5 () ;
 int FUNC_6 (unsigned char*) ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(EVP_PKEY_CTX *VAR_24, int VAR_25, int VAR_26, void *VAR_27)
{
    RSA_PKEY_CTX *VAR_28 = VAR_24->data;

    switch (VAR_25) {
    case 129:
        if ((VAR_26 >= VAR_8) && (VAR_26 <= VAR_9)) {
            if (!FUNC_8(VAR_28->md, VAR_26))
                return 0;
            if (VAR_26 == VAR_9) {
                if (!(VAR_24->operation &
                      (VAR_0 | VAR_2)))
                    goto bad_pad;
                if (!VAR_28->md)
                    VAR_28->md = FUNC_5();
            } else if (FUNC_9(VAR_24)) {
                goto bad_pad;
            }
            if (VAR_26 == VAR_7) {
                if (!(VAR_24->operation & VAR_1))
                    goto bad_pad;
                if (!VAR_28->md)
                    VAR_28->md = FUNC_5();
            }
            VAR_28->pad_mode = VAR_26;
            return 1;
        }
 bad_pad:
        FUNC_7(VAR_4,
               VAR_15);
        return -2;

    case 142:
        *(int *)VAR_27 = VAR_28->pad_mode;
        return 1;

    case 128:
    case 141:
        if (VAR_28->pad_mode != VAR_9) {
            FUNC_7(VAR_4, VAR_18);
            return -2;
        }
        if (VAR_25 == 141) {
            *(int *)VAR_27 = VAR_28->saltlen;
        } else {
            if (VAR_26 < VAR_12)
                return -2;
            if (FUNC_10(VAR_28)) {
                if (VAR_26 == VAR_10
                    && VAR_24->operation == VAR_2) {
                    FUNC_7(VAR_4, VAR_18);
                    return -2;
                }
                if ((VAR_26 == VAR_11
                     && VAR_28->min_saltlen > FUNC_3(VAR_28->md))
                    || (VAR_26 >= 0 && VAR_26 < VAR_28->min_saltlen)) {
                    FUNC_7(VAR_4, VAR_23);
                    return 0;
                }
            }
            VAR_28->saltlen = VAR_26;
        }
        return 1;

    case 135:
        if (VAR_26 < VAR_6) {
            FUNC_7(VAR_4, VAR_20);
            return -2;
        }
        VAR_28->nbits = VAR_26;
        return 1;

    case 133:
        if (VAR_27 == ((void*)0) || !FUNC_1((BIGNUM *)VAR_27) || FUNC_2((BIGNUM *)VAR_27)) {
            FUNC_7(VAR_4, VAR_13);
            return -2;
        }
        FUNC_0(VAR_28->pub_exp);
        VAR_28->pub_exp = VAR_27;
        return 1;

    case 134:
        if (VAR_26 < VAR_3 || VAR_26 > VAR_5) {
            FUNC_7(VAR_4, VAR_19);
            return -2;
        }
        VAR_28->primes = VAR_26;
        return 1;

    case 130:
    case 143:
        if (VAR_28->pad_mode != VAR_7) {
            FUNC_7(VAR_4, VAR_17);
            return -2;
        }
        if (VAR_25 == 143)
            *(const EVP_MD **)VAR_27 = VAR_28->md;
        else
            VAR_28->md = VAR_27;
        return 1;

    case 140:
        if (!FUNC_8(VAR_27, VAR_28->pad_mode))
            return 0;
        if (FUNC_10(VAR_28)) {
            if (FUNC_4(VAR_28->md) == FUNC_4(VAR_27))
                return 1;
            FUNC_7(VAR_4, VAR_14);
            return 0;
        }
        VAR_28->md = VAR_27;
        return 1;

    case 146:
        *(const EVP_MD **)VAR_27 = VAR_28->md;
        return 1;

    case 132:
    case 145:
        if (VAR_28->pad_mode != VAR_9
            && VAR_28->pad_mode != VAR_7) {
            FUNC_7(VAR_4, VAR_16);
            return -2;
        }
        if (VAR_25 == 145) {
            if (VAR_28->mgf1md)
                *(const EVP_MD **)VAR_27 = VAR_28->mgf1md;
            else
                *(const EVP_MD **)VAR_27 = VAR_28->md;
        } else {
            if (FUNC_10(VAR_28)) {
                if (FUNC_4(VAR_28->mgf1md) == FUNC_4(VAR_27))
                    return 1;
                FUNC_7(VAR_4, VAR_21);
                return 0;
            }
            VAR_28->mgf1md = VAR_27;
        }
        return 1;

    case 131:
        if (VAR_28->pad_mode != VAR_7) {
            FUNC_7(VAR_4, VAR_17);
            return -2;
        }
        FUNC_6(VAR_28->oaep_label);
        if (VAR_27 && VAR_26 > 0) {
            VAR_28->oaep_label = VAR_27;
            VAR_28->oaep_labellen = VAR_26;
        } else {
            VAR_28->oaep_label = ((void*)0);
            VAR_28->oaep_labellen = 0;
        }
        return 1;

    case 144:
        if (VAR_28->pad_mode != VAR_7) {
            FUNC_7(VAR_4, VAR_17);
            return -2;
        }
        *(unsigned char **)VAR_27 = VAR_28->oaep_label;
        return VAR_28->oaep_labellen;

    case 147:
    case 136:

    case 148:

    return 1;

    case 137:
    case 138:

    case 150:
    case 149:

    if (!FUNC_9(VAR_24))
        return 1;

    case 139:
        FUNC_7(VAR_4,
               VAR_22);
        return -2;

    default:
        return -2;

    }
}
