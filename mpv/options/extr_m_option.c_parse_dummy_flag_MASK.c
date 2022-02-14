
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
typedef int m_option_t ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int FUNC_1 (struct mp_log*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mp_log *VAR_1, const m_option_t *VAR_2,
                            struct bstr VAR_3, struct bstr VAR_4, void *VAR_5)
{
    if (VAR_4.len) {
        FUNC_1(VAR_1, "Invalid parameter for %.*s flag: %.*s\n",
               FUNC_0(VAR_3), FUNC_0(VAR_4));
        return VAR_0;
    }
    return 0;
}
