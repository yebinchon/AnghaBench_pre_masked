
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v; int * s; int * g; int * N; int * info; } ;
struct TYPE_5__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;
typedef int const BIGNUM ;


 int FUNC_0 (int *,int const*) ;
 void* FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;

int FUNC_5(SSL *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                             BIGNUM *VAR_3, BIGNUM *VAR_4, char *VAR_5)
{
    if (VAR_1 != ((void*)0)) {
        if (VAR_0->srp_ctx.N != ((void*)0)) {
            if (!FUNC_0(VAR_0->srp_ctx.N, VAR_1)) {
                FUNC_2(VAR_0->srp_ctx.N);
                VAR_0->srp_ctx.N = ((void*)0);
            }
        } else
            VAR_0->srp_ctx.N = FUNC_1(VAR_1);
    }
    if (VAR_2 != ((void*)0)) {
        if (VAR_0->srp_ctx.g != ((void*)0)) {
            if (!FUNC_0(VAR_0->srp_ctx.g, VAR_2)) {
                FUNC_2(VAR_0->srp_ctx.g);
                VAR_0->srp_ctx.g = ((void*)0);
            }
        } else
            VAR_0->srp_ctx.g = FUNC_1(VAR_2);
    }
    if (VAR_3 != ((void*)0)) {
        if (VAR_0->srp_ctx.s != ((void*)0)) {
            if (!FUNC_0(VAR_0->srp_ctx.s, VAR_3)) {
                FUNC_2(VAR_0->srp_ctx.s);
                VAR_0->srp_ctx.s = ((void*)0);
            }
        } else
            VAR_0->srp_ctx.s = FUNC_1(VAR_3);
    }
    if (VAR_4 != ((void*)0)) {
        if (VAR_0->srp_ctx.v != ((void*)0)) {
            if (!FUNC_0(VAR_0->srp_ctx.v, VAR_4)) {
                FUNC_2(VAR_0->srp_ctx.v);
                VAR_0->srp_ctx.v = ((void*)0);
            }
        } else
            VAR_0->srp_ctx.v = FUNC_1(VAR_4);
    }
    if (VAR_5 != ((void*)0)) {
        if (VAR_0->srp_ctx.info)
            FUNC_3(VAR_0->srp_ctx.info);
        if ((VAR_0->srp_ctx.info = FUNC_4(VAR_5)) == ((void*)0))
            return -1;
    }

    if (!(VAR_0->srp_ctx.N) ||
        !(VAR_0->srp_ctx.g) || !(VAR_0->srp_ctx.s) || !(VAR_0->srp_ctx.v))
        return -1;

    return 1;
}
