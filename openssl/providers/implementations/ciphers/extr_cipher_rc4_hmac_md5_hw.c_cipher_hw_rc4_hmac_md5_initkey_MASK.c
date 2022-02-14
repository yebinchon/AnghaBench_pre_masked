
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ks; } ;
struct TYPE_4__ {int payload_length; int head; int md; int tail; TYPE_1__ ks; } ;
typedef TYPE_2__ PROV_RC4_HMAC_MD5_CTX ;
typedef int PROV_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,size_t,int const*) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_1,
                                          const uint8_t *VAR_2, size_t VAR_3)
{
    PROV_RC4_HMAC_MD5_CTX *VAR_4 = (PROV_RC4_HMAC_MD5_CTX *)VAR_1;

    FUNC_1(&VAR_4->ks.ks, VAR_3, VAR_2);
    FUNC_0(&VAR_4->head);
    VAR_4->tail = VAR_4->head;
    VAR_4->md = VAR_4->head;
    VAR_4->payload_length = VAR_0;
    return 1;
}
