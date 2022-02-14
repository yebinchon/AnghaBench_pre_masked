
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


struct TYPE_15__ {TYPE_3__* group; } ;
struct TYPE_14__ {int cofactor_mode; int kdf_type; size_t kdf_outlen; unsigned char* kdf_ukm; int kdf_ukmlen; int * md; int * kdf_md; int * co_key; int * gen_group; } ;
struct TYPE_13__ {TYPE_2__* pkey; TYPE_5__* data; } ;
struct TYPE_12__ {int cofactor; } ;
struct TYPE_10__ {TYPE_6__* ec; } ;
struct TYPE_11__ {TYPE_1__ pkey; } ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef TYPE_5__ EC_PKEY_CTX ;
typedef TYPE_6__ EC_KEY ;
typedef int EC_GROUP ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int const*) ;
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
 int FUNC_11 (unsigned char*) ;

__attribute__((used)) static int FUNC_12(EVP_PKEY_CTX *VAR_18, int VAR_19, int VAR_20, void *VAR_21)
{
    EC_PKEY_CTX *VAR_22 = VAR_18->data;
    EC_GROUP *VAR_23;
    switch (VAR_19) {
    case 136:
        VAR_23 = FUNC_2(VAR_20);
        if (VAR_23 == ((void*)0)) {
            FUNC_9(VAR_1, VAR_2);
            return 0;
        }
        FUNC_1(VAR_22->gen_group);
        VAR_22->gen_group = VAR_23;
        return 1;

    case 135:
        if (!VAR_22->gen_group) {
            FUNC_9(VAR_1, VAR_4);
            return 0;
        }
        FUNC_3(VAR_22->gen_group, VAR_20);
        return 1;


    case 141:
        if (VAR_20 == -2) {
            if (VAR_22->cofactor_mode != -1)
                return VAR_22->cofactor_mode;
            else {
                EC_KEY *VAR_24 = VAR_18->pkey->pkey.ec;
                return FUNC_7(VAR_24) & VAR_0 ? 1 : 0;
            }
        } else if (VAR_20 < -1 || VAR_20 > 1)
            return -2;
        VAR_22->cofactor_mode = VAR_20;
        if (VAR_20 != -1) {
            EC_KEY *VAR_25 = VAR_18->pkey->pkey.ec;
            if (!VAR_25->group)
                return -2;

            if (FUNC_0(VAR_25->group->cofactor))
                return 1;
            if (!VAR_22->co_key) {
                VAR_22->co_key = FUNC_5(VAR_25);
                if (!VAR_22->co_key)
                    return 0;
            }
            if (VAR_20)
                FUNC_8(VAR_22->co_key, VAR_0);
            else
                FUNC_4(VAR_22->co_key, VAR_0);
        } else {
            FUNC_6(VAR_22->co_key);
            VAR_22->co_key = ((void*)0);
        }
        return 1;


    case 138:
        if (VAR_20 == -2)
            return VAR_22->kdf_type;
        if (VAR_20 != VAR_5 && VAR_20 != VAR_6)
            return -2;
        VAR_22->kdf_type = VAR_20;
        return 1;

    case 140:
        VAR_22->kdf_md = VAR_21;
        return 1;

    case 134:
        *(const EVP_MD **)VAR_21 = VAR_22->kdf_md;
        return 1;

    case 139:
        if (VAR_20 <= 0)
            return -2;
        VAR_22->kdf_outlen = (size_t)VAR_20;
        return 1;

    case 133:
        *(int *)VAR_21 = VAR_22->kdf_outlen;
        return 1;

    case 137:
        FUNC_11(VAR_22->kdf_ukm);
        VAR_22->kdf_ukm = VAR_21;
        if (VAR_21)
            VAR_22->kdf_ukmlen = VAR_20;
        else
            VAR_22->kdf_ukmlen = 0;
        return 1;

    case 132:
        *(unsigned char **)VAR_21 = VAR_22->kdf_ukm;
        return VAR_22->kdf_ukmlen;

    case 130:
        if (FUNC_10((const EVP_MD *)VAR_21) != VAR_8 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_7 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_9 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_10 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_11 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_16 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_12 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_13 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_14 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_15 &&
            FUNC_10((const EVP_MD *)VAR_21) != VAR_17) {
            FUNC_9(VAR_1, VAR_3);
            return 0;
        }
        VAR_22->md = VAR_21;
        return 1;

    case 131:
        *(const EVP_MD **)VAR_21 = VAR_22->md;
        return 1;

    case 129:

    case 142:
    case 128:
    case 143:
        return 1;

    default:
        return -2;

    }
}
