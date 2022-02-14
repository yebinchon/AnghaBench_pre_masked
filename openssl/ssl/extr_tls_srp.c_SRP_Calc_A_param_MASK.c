
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rnd ;
struct TYPE_4__ {int g; int N; int a; int A; } ;
struct TYPE_5__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (unsigned char*,int,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;

int FUNC_4(SSL *VAR_1)
{
    unsigned char VAR_2[VAR_0];

    if (FUNC_2(VAR_2, sizeof(VAR_2)) <= 0)
        return 0;
    VAR_1->srp_ctx.a = FUNC_0(VAR_2, sizeof(VAR_2), VAR_1->srp_ctx.a);
    FUNC_1(VAR_2, sizeof(VAR_2));

    if (!(VAR_1->srp_ctx.A = FUNC_3(VAR_1->srp_ctx.a, VAR_1->srp_ctx.N, VAR_1->srp_ctx.g)))
        return 0;

    return 1;
}
