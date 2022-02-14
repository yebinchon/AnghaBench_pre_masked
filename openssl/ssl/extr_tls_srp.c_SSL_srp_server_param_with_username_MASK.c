
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int b ;
struct TYPE_5__ {int (* TLS_ext_srp_username_callback ) (TYPE_2__*,int*,int ) ;int * v; int * g; int * N; int b; int * B; int * s; int SRP_cb_arg; } ;
struct TYPE_6__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (unsigned char*,int,int *) ;
 int FUNC_1 (unsigned char*,int) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;
 int * FUNC_3 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int*,int ) ;

int FUNC_5(SSL *VAR_5, int *VAR_6)
{
    unsigned char VAR_7[VAR_4];
    int VAR_8;

    *VAR_6 = VAR_2;
    if ((VAR_5->srp_ctx.TLS_ext_srp_username_callback != ((void*)0)) &&
        ((VAR_8 =
          VAR_5->srp_ctx.TLS_ext_srp_username_callback(VAR_5, VAR_6,
                                                   VAR_5->srp_ctx.SRP_cb_arg)) !=
         VAR_3))
        return VAR_8;

    *VAR_6 = VAR_1;
    if ((VAR_5->srp_ctx.N == ((void*)0)) ||
        (VAR_5->srp_ctx.g == ((void*)0)) ||
        (VAR_5->srp_ctx.s == ((void*)0)) || (VAR_5->srp_ctx.v == ((void*)0)))
        return VAR_0;

    if (FUNC_2(VAR_7, sizeof(VAR_7)) <= 0)
        return VAR_0;
    VAR_5->srp_ctx.b = FUNC_0(VAR_7, sizeof(VAR_7), ((void*)0));
    FUNC_1(VAR_7, sizeof(VAR_7));



    return ((VAR_5->srp_ctx.B =
             FUNC_3(VAR_5->srp_ctx.b, VAR_5->srp_ctx.N, VAR_5->srp_ctx.g,
                        VAR_5->srp_ctx.v)) !=
            ((void*)0)) ? VAR_3 : VAR_0;
}
