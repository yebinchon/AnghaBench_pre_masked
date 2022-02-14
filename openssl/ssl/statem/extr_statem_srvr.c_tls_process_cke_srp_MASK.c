
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int login; int * A; int N; } ;
struct TYPE_9__ {TYPE_2__* session; TYPE_1__ srp_ctx; } ;
struct TYPE_8__ {int * srp_username; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int * FUNC_0 (unsigned char const*,unsigned int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned char const**,unsigned int) ;
 int FUNC_6 (int *,unsigned int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(SSL *VAR_9, PACKET *VAR_10)
{

    unsigned int VAR_11;
    const unsigned char *VAR_12;

    if (!FUNC_6(VAR_10, &VAR_11)
        || !FUNC_5(VAR_10, &VAR_12, VAR_11)) {
        FUNC_7(VAR_9, VAR_3, VAR_6,
                 VAR_7);
        return 0;
    }
    if ((VAR_9->srp_ctx.A = FUNC_0(VAR_12, VAR_11, ((void*)0))) == ((void*)0)) {
        FUNC_7(VAR_9, VAR_5, VAR_6,
                 VAR_0);
        return 0;
    }
    if (FUNC_2(VAR_9->srp_ctx.A, VAR_9->srp_ctx.N) >= 0 || FUNC_1(VAR_9->srp_ctx.A)) {
        FUNC_7(VAR_9, VAR_4, VAR_6,
                 VAR_8);
        return 0;
    }
    FUNC_3(VAR_9->session->srp_username);
    VAR_9->session->srp_username = FUNC_4(VAR_9->srp_ctx.login);
    if (VAR_9->session->srp_username == ((void*)0)) {
        FUNC_7(VAR_9, VAR_5, VAR_6,
                 VAR_2);
        return 0;
    }

    if (!FUNC_8(VAR_9)) {

        return 0;
    }

    return 1;






}
