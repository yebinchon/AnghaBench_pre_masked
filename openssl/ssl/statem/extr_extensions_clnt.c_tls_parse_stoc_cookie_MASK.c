
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int tls13_cookie_len; int tls13_cookie; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;

int FUNC_3(SSL *VAR_3, PACKET *VAR_4, unsigned int VAR_5, X509 *VAR_6,
                       size_t VAR_7)
{
    PACKET VAR_8;

    if (!FUNC_0(VAR_4, &VAR_8)
            || !FUNC_1(&VAR_8, &VAR_3->ext.tls13_cookie,
                              &VAR_3->ext.tls13_cookie_len)) {
        FUNC_2(VAR_3, VAR_0, VAR_1,
                 VAR_2);
        return 0;
    }

    return 1;
}
