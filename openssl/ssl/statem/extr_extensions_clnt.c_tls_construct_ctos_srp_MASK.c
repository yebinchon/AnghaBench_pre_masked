
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_5__ {int * login; } ;
struct TYPE_6__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

EXT_RETURN FUNC_8(SSL *VAR_8, WPACKET *VAR_9, unsigned int VAR_10,
                                  X509 *VAR_11, size_t VAR_12)
{

    if (VAR_8->srp_ctx.login == ((void*)0))
        return VAR_2;

    if (!FUNC_3(VAR_9, VAR_6)

            || !FUNC_5(VAR_9)
            || !FUNC_6(VAR_9)

            || !FUNC_4(VAR_9, VAR_7)
            || !FUNC_2(VAR_9, VAR_8->srp_ctx.login,
                               FUNC_7(VAR_8->srp_ctx.login))
            || !FUNC_1(VAR_9)
            || !FUNC_1(VAR_9)) {
        FUNC_0(VAR_8, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
