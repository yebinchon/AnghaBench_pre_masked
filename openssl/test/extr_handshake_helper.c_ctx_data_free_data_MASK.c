
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * session_ticket_app_data; int * srp_password; int * srp_user; int * alpn_protocols; int * npn_protocols; } ;
typedef TYPE_1__ CTX_DATA ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(CTX_DATA *VAR_0)
{
    FUNC_0(VAR_0->npn_protocols);
    VAR_0->npn_protocols = ((void*)0);
    FUNC_0(VAR_0->alpn_protocols);
    VAR_0->alpn_protocols = ((void*)0);
    FUNC_0(VAR_0->srp_user);
    VAR_0->srp_user = ((void*)0);
    FUNC_0(VAR_0->srp_password);
    VAR_0->srp_password = ((void*)0);
    FUNC_0(VAR_0->session_ticket_app_data);
    VAR_0->session_ticket_app_data = ((void*)0);
}
