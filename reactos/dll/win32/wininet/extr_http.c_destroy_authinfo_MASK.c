
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpAuthInfo {struct HttpAuthInfo* scheme; struct HttpAuthInfo* auth_data; int cred; int ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct HttpAuthInfo*) ;

__attribute__((used)) static void FUNC_4( struct HttpAuthInfo *VAR_0 )
{
    if (!VAR_0) return;

    if (FUNC_2(&VAR_0->ctx))
        FUNC_0(&VAR_0->ctx);
    if (FUNC_2(&VAR_0->cred))
        FUNC_1(&VAR_0->cred);

    FUNC_3(VAR_0->auth_data);
    FUNC_3(VAR_0->scheme);
    FUNC_3(VAR_0);
}
