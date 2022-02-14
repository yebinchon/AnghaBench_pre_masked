
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int session_ticket_do_not_call; } ;
typedef int SSL ;
typedef int HMAC_CTX ;
typedef TYPE_1__ HANDSHAKE_EX_DATA ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(SSL *VAR_1, unsigned char *VAR_2,
                                         unsigned char *VAR_3,
                                         EVP_CIPHER_CTX *VAR_4,
                                         HMAC_CTX *VAR_5, int VAR_6)
{
    HANDSHAKE_EX_DATA *VAR_7 =
        (HANDSHAKE_EX_DATA*)(FUNC_0(VAR_1, VAR_0));
    VAR_7->session_ticket_do_not_call = 1;
    return 0;
}
