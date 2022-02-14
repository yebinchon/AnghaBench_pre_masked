
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int N; int b; int v; int A; int B; } ;
struct TYPE_7__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;
typedef int BIGNUM ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 unsigned char* FUNC_3 (int) ;
 int * FUNC_4 (int ,int ,int *,int ,int ) ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,unsigned char*,int,int) ;

int FUNC_9(SSL *VAR_3)
{
    BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6 = -1, VAR_7 = 0;
    unsigned char *VAR_8 = ((void*)0);

    if (!FUNC_6(VAR_3->srp_ctx.A, VAR_3->srp_ctx.N))
        goto err;
    if ((VAR_5 = FUNC_5(VAR_3->srp_ctx.A, VAR_3->srp_ctx.B, VAR_3->srp_ctx.N)) == ((void*)0))
        goto err;
    if ((VAR_4 = FUNC_4(VAR_3->srp_ctx.A, VAR_3->srp_ctx.v, VAR_5, VAR_3->srp_ctx.b,
                                 VAR_3->srp_ctx.N)) == ((void*)0))
        goto err;

    VAR_7 = FUNC_2(VAR_4);
    if ((VAR_8 = FUNC_3(VAR_7)) == ((void*)0)) {
        FUNC_7(VAR_3, VAR_1,
                 VAR_2, VAR_0);
        goto err;
    }
    FUNC_0(VAR_4, VAR_8);

    VAR_6 = FUNC_8(VAR_3, VAR_8, VAR_7, 1);
 err:
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    return VAR_6;
}
