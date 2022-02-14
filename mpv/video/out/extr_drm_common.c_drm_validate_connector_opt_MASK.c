
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {int dummy; } ;
struct bstr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bstr,char*) ;
 int FUNC_1 (struct mp_log*) ;

__attribute__((used)) static int FUNC_2(struct mp_log *VAR_1, const struct m_option *VAR_2,
                                      struct bstr VAR_3, struct bstr VAR_4)
{
    if (FUNC_0(VAR_4, "help")) {
        FUNC_1(VAR_1);
        return VAR_0;
    }
    return 1;
}
