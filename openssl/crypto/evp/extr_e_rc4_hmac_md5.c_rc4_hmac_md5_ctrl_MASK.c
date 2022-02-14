
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hmac_key ;
struct TYPE_3__ {unsigned int payload_length; int md; int head; int tail; } ;
typedef TYPE_1__ EVP_RC4_HMAC_MD5 ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;


 unsigned int VAR_1 ;
 int FUNC_1 (unsigned char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (unsigned char*,void*,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_8(EVP_CIPHER_CTX *VAR_2, int VAR_3, int VAR_4,
                             void *VAR_5)
{
    EVP_RC4_HMAC_MD5 *VAR_6 = FUNC_5(VAR_2);

    switch (VAR_3) {
    case 129:
        {
            unsigned int VAR_7;
            unsigned char VAR_8[64];

            FUNC_7(VAR_8, 0, sizeof(VAR_8));

            if (VAR_4 > (int)sizeof(VAR_8)) {
                FUNC_2(&VAR_6->head);
                FUNC_3(&VAR_6->head, VAR_5, VAR_4);
                FUNC_1(VAR_8, &VAR_6->head);
            } else {
                FUNC_6(VAR_8, VAR_5, VAR_4);
            }

            for (VAR_7 = 0; VAR_7 < sizeof(VAR_8); VAR_7++)
                VAR_8[VAR_7] ^= 0x36;
            FUNC_2(&VAR_6->head);
            FUNC_3(&VAR_6->head, VAR_8, sizeof(VAR_8));

            for (VAR_7 = 0; VAR_7 < sizeof(VAR_8); VAR_7++)
                VAR_8[VAR_7] ^= 0x36 ^ 0x5c;
            FUNC_2(&VAR_6->tail);
            FUNC_3(&VAR_6->tail, VAR_8, sizeof(VAR_8));

            FUNC_4(VAR_8, sizeof(VAR_8));

            return 1;
        }
    case 128:
        {
            unsigned char *VAR_9 = VAR_5;
            unsigned int VAR_10;

            if (VAR_4 != VAR_0)
                return -1;

            VAR_10 = VAR_9[VAR_4 - 2] << 8 | VAR_9[VAR_4 - 1];

            if (!FUNC_0(VAR_2)) {
                if (VAR_10 < VAR_1)
                    return -1;
                VAR_10 -= VAR_1;
                VAR_9[VAR_4 - 2] = VAR_10 >> 8;
                VAR_9[VAR_4 - 1] = VAR_10;
            }
            VAR_6->payload_length = VAR_10;
            VAR_6->md = VAR_6->head;
            FUNC_3(&VAR_6->md, VAR_9, VAR_4);

            return VAR_1;
        }
    default:
        return -1;
    }
}
