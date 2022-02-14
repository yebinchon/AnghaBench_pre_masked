
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_schedule {int tls_crypt_v2_server_key; int ssl_ctx; int static_key; } ;


 int FUNC_0 (struct key_schedule) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct key_schedule *VAR_0, bool VAR_1)
{
    FUNC_2(&VAR_0->static_key);
    if (FUNC_4(&VAR_0->ssl_ctx) && VAR_1)
    {
        FUNC_3(&VAR_0->ssl_ctx);
        FUNC_1(&VAR_0->tls_crypt_v2_server_key);
    }
    FUNC_0(*VAR_0);
}
