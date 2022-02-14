
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* session_ticket_app_data; } ;
typedef int SSL_SESSION ;
typedef int SSL ;
typedef TYPE_1__ CTX_DATA ;


 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_0, void *VAR_1)
{
    CTX_DATA *VAR_2 = VAR_1;
    SSL_SESSION *VAR_3 = FUNC_1(VAR_0);
    char *VAR_4 = VAR_2->session_ticket_app_data;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
        return 0;

    return FUNC_0(VAR_3, VAR_4, FUNC_2(VAR_4));
}
