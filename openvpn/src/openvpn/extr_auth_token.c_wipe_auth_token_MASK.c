
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_multi {int * auth_token_initial; int * auth_token; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct tls_multi *VAR_0)
{
    if (VAR_0)
    {
        if (VAR_0->auth_token)
        {
            FUNC_1(VAR_0->auth_token, FUNC_2(VAR_0->auth_token));
            FUNC_0(VAR_0->auth_token);
        }
        if (VAR_0->auth_token_initial)
        {
            FUNC_1(VAR_0->auth_token_initial,
                           FUNC_2(VAR_0->auth_token_initial));
            FUNC_0(VAR_0->auth_token_initial);
        }
        VAR_0->auth_token = ((void*)0);
        VAR_0->auth_token_initial = ((void*)0);
    }
}
