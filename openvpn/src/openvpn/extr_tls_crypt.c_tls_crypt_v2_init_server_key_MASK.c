
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int digest; int cipher; } ;
struct key_ctx {int dummy; } ;
struct key {int dummy; } ;
struct buffer {int dummy; } ;
typedef int srv_key ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*,void*,int) ;
 int FUNC_1 (struct key_ctx*,struct key*,struct key_type*,int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct buffer*,int ,char const*,char const*) ;
 int FUNC_4 (struct key*,int) ;
 struct key_type FUNC_5 () ;
 int VAR_1 ;

void
FUNC_6(struct key_ctx *VAR_2, bool VAR_3,
                             const char *VAR_4, const char *VAR_5)
{
    struct key VAR_6;
    struct buffer VAR_7;

    FUNC_0(&VAR_7, (void *)&VAR_6, sizeof(VAR_6));
    if (!FUNC_3(&VAR_7, VAR_1,
                           VAR_4, VAR_5))
    {
        FUNC_2(VAR_0, "ERROR: invalid tls-crypt-v2 server key format");
    }

    struct key_type VAR_8 = FUNC_5();
    if (!VAR_8.cipher || !VAR_8.digest)
    {
        FUNC_2(VAR_0, "ERROR: --tls-crypt-v2 not supported");
    }
    FUNC_1(VAR_2, &VAR_6, &VAR_8, VAR_3, "tls-crypt-v2 server key");
    FUNC_4(&VAR_6, sizeof(VAR_6));
}
