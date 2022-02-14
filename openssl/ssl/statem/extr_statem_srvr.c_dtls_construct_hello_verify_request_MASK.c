
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_9__ {TYPE_1__* d1; TYPE_2__* ctx; } ;
struct TYPE_8__ {scalar_t__ (* app_gen_cookie_cb ) (TYPE_3__*,int ,unsigned int*) ;} ;
struct TYPE_7__ {unsigned int cookie_len; int cookie; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,unsigned int*) ;

int FUNC_3(SSL *VAR_4, WPACKET *VAR_5)
{
    unsigned int VAR_6;
    if (VAR_4->ctx->app_gen_cookie_cb == ((void*)0) ||
        VAR_4->ctx->app_gen_cookie_cb(VAR_4, VAR_4->d1->cookie,
                                  &VAR_6) == 0 ||
        VAR_6 > 255) {
        FUNC_0(VAR_4, VAR_1, VAR_2,
                 VAR_3);
        return 0;
    }
    VAR_4->d1->cookie_len = VAR_6;

    if (!FUNC_1(VAR_5, VAR_4->d1->cookie,
                                              VAR_4->d1->cookie_len)) {
        FUNC_0(VAR_4, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    return 1;
}
