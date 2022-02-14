
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_5__ {scalar_t__ tls13_cookie_len; int * tls13_cookie; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

EXT_RETURN FUNC_6(SSL *VAR_7, WPACKET *VAR_8, unsigned int VAR_9,
                                     X509 *VAR_10, size_t VAR_11)
{
    EXT_RETURN VAR_12 = VAR_1;


    if (VAR_7->ext.tls13_cookie_len == 0)
        return VAR_2;

    if (!FUNC_3(VAR_8, VAR_6)

            || !FUNC_4(VAR_8)
            || !FUNC_5(VAR_8, VAR_7->ext.tls13_cookie,
                                       VAR_7->ext.tls13_cookie_len)
            || !FUNC_2(VAR_8)) {
        FUNC_1(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        goto end;
    }

    VAR_12 = VAR_3;
 end:
    FUNC_0(VAR_7->ext.tls13_cookie);
    VAR_7->ext.tls13_cookie = ((void*)0);
    VAR_7->ext.tls13_cookie_len = 0;

    return VAR_12;
}
