
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int post_handshake_auth; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

int FUNC_2(SSL *VAR_4, PACKET *VAR_5, unsigned int VAR_6,
                                       X509 *VAR_7, size_t VAR_8)
{
    if (FUNC_0(VAR_5) != 0) {
        FUNC_1(VAR_4, VAR_0, VAR_1,
                 VAR_3);
        return 0;
    }

    VAR_4->post_handshake_auth = VAR_2;

    return 1;
}
