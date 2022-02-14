
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {TYPE_1__* pmeth; TYPE_2__* data; } ;
struct TYPE_6__ {int * collected_info; int * collected_seed; int * kctx; } ;
struct TYPE_5__ {int pkey_id; } ;
typedef int OSSL_PARAM ;
typedef TYPE_2__ EVP_PKEY_KDF_CTX ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef int EVP_KDF_CTX ;
typedef int BUF_MEM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (char const*,unsigned char*,size_t) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*,char*,int ) ;
 int FUNC_8 (int **,void*,int) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(EVP_PKEY_CTX *VAR_14, int VAR_15, int VAR_16, void *VAR_17)
{
    EVP_PKEY_KDF_CTX *VAR_18 = VAR_14->data;
    EVP_KDF_CTX *VAR_19 = VAR_18->kctx;
    enum { T_OCTET_STRING, T_UINT64, T_DIGEST, T_INT } VAR_20;
    const char *VAR_21, *VAR_22;
    BUF_MEM **VAR_23 = ((void*)0);
    OSSL_PARAM VAR_24[2] = { VAR_13, VAR_13 };

    switch (VAR_15) {
    case 136:
        VAR_20 = T_OCTET_STRING;
        VAR_21 = VAR_5;
        break;
    case 137:
    case 131:
        VAR_20 = T_OCTET_STRING;
        VAR_21 = VAR_6;
        break;
    case 130:
    case 139:
        VAR_20 = T_DIGEST;
        VAR_21 = VAR_1;
        break;
    case 129:
        VAR_20 = T_OCTET_STRING;
        VAR_21 = VAR_11;




        if (VAR_14->pmeth->pkey_id == VAR_0) {
            FUNC_0(VAR_18->collected_seed);
            VAR_18->collected_seed = ((void*)0);
        }
        break;
    case 128:
        VAR_20 = T_OCTET_STRING;
        VAR_21 = VAR_12;
        VAR_23 = &VAR_18->collected_seed;
        break;
    case 140:
        VAR_20 = T_OCTET_STRING;
        VAR_21 = VAR_3;
        break;
    case 141:
        VAR_20 = T_OCTET_STRING;
        VAR_21 = VAR_2;
        VAR_23 = &VAR_18->collected_info;
        break;
    case 138:
        VAR_20 = T_INT;
        VAR_21 = VAR_4;
        break;
    case 134:
        VAR_20 = T_UINT64;
        VAR_21 = VAR_8;
        break;
    case 132:
        VAR_20 = T_UINT64;
        VAR_21 = VAR_10;
        break;
    case 133:
        VAR_20 = T_UINT64;
        VAR_21 = VAR_9;
        break;
    case 135:
        VAR_20 = T_UINT64;
        VAR_21 = VAR_7;
        break;
    default:
        return -2;
    }

    if (VAR_23 != ((void*)0)) {
        switch (VAR_20) {
        case T_OCTET_STRING:
            return FUNC_8(VAR_23, VAR_17, VAR_16);
        default:
            FUNC_3("You shouldn't be here");
            break;
        }
        return 1;
    }

    switch (VAR_20) {
    case T_OCTET_STRING:
        VAR_24[0] =
            FUNC_5(VAR_21, (unsigned char *)VAR_17,
                                              (size_t)VAR_16);
        break;

    case T_DIGEST:
        VAR_22 = FUNC_2((const EVP_MD *)VAR_17);
        VAR_24[0] = FUNC_7(VAR_21, (char *)VAR_22,
                                                     FUNC_9(VAR_22) + 1);
        break;





    case T_INT:
        VAR_24[0] = FUNC_4(VAR_21, &VAR_16);
        break;

    case T_UINT64:
        VAR_24[0] = FUNC_6(VAR_21, (uint64_t *)VAR_17);
        break;
    }

    return FUNC_1(VAR_19, VAR_24);
}
