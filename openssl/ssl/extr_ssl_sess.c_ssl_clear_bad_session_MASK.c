
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int shutdown; int * session; int session_ctx; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int FUNC_3(SSL *VAR_1)
{
    if ((VAR_1->session != ((void*)0)) &&
        !(VAR_1->shutdown & VAR_0) &&
        !(FUNC_2(VAR_1) || FUNC_1(VAR_1))) {
        FUNC_0(VAR_1->session_ctx, VAR_1->session);
        return 1;
    } else
        return 0;
}
