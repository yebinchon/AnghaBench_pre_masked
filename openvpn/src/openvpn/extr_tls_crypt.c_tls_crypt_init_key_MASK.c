
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int digest; int cipher; } ;
struct key_ctx_bi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key_type*,struct key_ctx_bi*,char const*,char const*,int const,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 struct key_type FUNC_2 () ;

void
FUNC_3(struct key_ctx_bi *VAR_3, const char *VAR_4,
                   const char *VAR_5, bool VAR_6)
{
    const int VAR_7 = VAR_6 ?
                              VAR_1 : VAR_0;
    struct key_type VAR_8 = FUNC_2();
    if (!VAR_8.cipher || !VAR_8.digest)
    {
        FUNC_1(VAR_2, "ERROR: --tls-crypt not supported");
    }
    FUNC_0(&VAR_8, VAR_3, VAR_4, VAR_5, VAR_7,
                            "Control Channel Encryption", "tls-crypt");
}
