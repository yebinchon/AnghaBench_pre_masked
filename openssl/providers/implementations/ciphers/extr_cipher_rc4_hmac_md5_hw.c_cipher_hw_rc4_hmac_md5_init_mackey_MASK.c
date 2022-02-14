
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hmac_key ;
struct TYPE_2__ {int tail; int head; } ;
typedef TYPE_1__ PROV_RC4_HMAC_MD5_CTX ;
typedef int PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char const*,int) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_5 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_6(PROV_CIPHER_CTX *VAR_0,
                                               const unsigned char *VAR_1,
                                               size_t VAR_2)
{
    PROV_RC4_HMAC_MD5_CTX *VAR_3 = (PROV_RC4_HMAC_MD5_CTX *)VAR_0;
    unsigned int VAR_4;
    unsigned char VAR_5[64];

    FUNC_5(VAR_5, 0, sizeof(VAR_5));

    if (VAR_2 > (int)sizeof(VAR_5)) {
        FUNC_1(&VAR_3->head);
        FUNC_2(&VAR_3->head, VAR_1, VAR_2);
        FUNC_0(VAR_5, &VAR_3->head);
    } else {
        FUNC_4(VAR_5, VAR_1, VAR_2);
    }

    for (VAR_4 = 0; VAR_4 < sizeof(VAR_5); VAR_4++)
        VAR_5[VAR_4] ^= 0x36;
    FUNC_1(&VAR_3->head);
    FUNC_2(&VAR_3->head, VAR_5, sizeof(VAR_5));

    for (VAR_4 = 0; VAR_4 < sizeof(VAR_5); VAR_4++)
        VAR_5[VAR_4] ^= 0x36 ^ 0x5c;
    FUNC_1(&VAR_3->tail);
    FUNC_2(&VAR_3->tail, VAR_5, sizeof(VAR_5));

    FUNC_3(VAR_5, sizeof(VAR_5));
}
