
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int digest; int cipher; } ;
struct key_ctx_bi {int dummy; } ;
struct key2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct key_ctx_bi*,struct key2 const*,int const,struct key_type*,char*) ;
 int FUNC_1 (int ,char*) ;
 struct key_type FUNC_2 () ;

__attribute__((used)) static inline void
FUNC_3(struct key_ctx_bi *VAR_3, const struct key2 *VAR_4,
                             bool VAR_5)
{
    const int VAR_6 = VAR_5 ?
                              VAR_1 : VAR_0;
    struct key_type VAR_7 = FUNC_2();
    if (!VAR_7.cipher || !VAR_7.digest)
    {
        FUNC_1(VAR_2, "ERROR: --tls-crypt-v2 not supported");
    }
    FUNC_0(VAR_3, VAR_4, VAR_6, &VAR_7,
                    "Control Channel Encryption");
}
