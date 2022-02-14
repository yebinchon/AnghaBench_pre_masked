
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enc; } ;
struct TYPE_4__ {unsigned int payload_length; int md; int head; } ;
typedef TYPE_1__ PROV_RC4_HMAC_MD5_CTX ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_2,
                                           unsigned char *VAR_3, size_t VAR_4)
{
    PROV_RC4_HMAC_MD5_CTX *VAR_5 = (PROV_RC4_HMAC_MD5_CTX *)VAR_2;
    unsigned int VAR_6;

    if (VAR_4 != VAR_0)
        return 0;

    VAR_6 = VAR_3[VAR_4 - 2] << 8 | VAR_3[VAR_4 - 1];

    if (!VAR_2->enc) {
        if (VAR_6 < VAR_1)
            return 0;
        VAR_6 -= VAR_1;
        VAR_3[VAR_4 - 2] = VAR_6 >> 8;
        VAR_3[VAR_4 - 1] = VAR_6;
    }
    VAR_5->payload_length = VAR_6;
    VAR_5->md = VAR_5->head;
    FUNC_0(&VAR_5->md, VAR_3, VAR_4);

    return VAR_1;
}
