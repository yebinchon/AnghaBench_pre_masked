
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* get_asn1_parameters ) (TYPE_1__*,int *) ;int * prov; } ;
struct TYPE_9__ {TYPE_2__* cipher; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;
typedef TYPE_2__ EVP_CIPHER ;
typedef int ASN1_TYPE ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__ const*) ;

 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned char*) ;
 int VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,unsigned char*,size_t) ;
 int FUNC_8 (int *,unsigned char**) ;
 int FUNC_9 (TYPE_1__*,int *) ;

int FUNC_10(EVP_CIPHER_CTX *VAR_5, ASN1_TYPE *VAR_6)
{
    int VAR_7 = -1;
    const EVP_CIPHER *VAR_8 = VAR_5->cipher;
    if (VAR_8->get_asn1_parameters != ((void*)0)) {
        VAR_7 = VAR_8->get_asn1_parameters(VAR_5, VAR_6);
    } else if ((FUNC_1(VAR_8) & VAR_0) == 0) {
        switch (FUNC_3(VAR_8)) {
        case 129:
            VAR_7 = 1;
            break;

        case 131:
        case 132:
        case 128:
        case 130:
            VAR_7 = -2;
            break;

        default:
            VAR_7 = FUNC_2(VAR_5, VAR_6);
        }
    } else if (VAR_8->prov != ((void*)0)) {
        OSSL_PARAM VAR_9[3], *VAR_10 = VAR_9;
        unsigned char *VAR_11 = ((void*)0);
        int VAR_12 = -1;

        if ((VAR_12 = FUNC_8(VAR_6, &VAR_11)) >= 0) {
            *VAR_10++ =
                FUNC_7(VAR_4,
                                                  VAR_11, (size_t)VAR_12);
            *VAR_10 = FUNC_6();
            if (FUNC_0(VAR_5, VAR_9))
                VAR_7 = 1;
            FUNC_5(VAR_11);
        }
    } else {
        VAR_7 = -2;
    }

    if (VAR_7 == -2)
        FUNC_4(VAR_1, VAR_3);
    else if (VAR_7 <= 0)
        FUNC_4(VAR_1, VAR_2);
    if (VAR_7 < -1)
        VAR_7 = -1;
    return VAR_7;
}
