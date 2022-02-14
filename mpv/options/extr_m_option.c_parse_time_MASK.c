
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
typedef int m_option_t ;


 int FUNC_0 (struct bstr) ;
 scalar_t__ FUNC_1 (int const*) ;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct bstr,char*) ;
 int FUNC_3 (struct mp_log*,char*,int ,int ) ;
 int FUNC_4 (struct bstr,double*,int ) ;

__attribute__((used)) static int FUNC_5(struct mp_log *VAR_3, const m_option_t *VAR_4,
                      struct bstr VAR_5, struct bstr VAR_6, void *VAR_7)
{
    if (VAR_6.len == 0)
        return VAR_2;

    double VAR_8 = VAR_0;
    if (FUNC_1(VAR_4) && FUNC_2(VAR_6, "no")) {

    } else if (!FUNC_4(VAR_6, &VAR_8, 0)) {
        FUNC_3(VAR_3, "Option %.*s: invalid time: '%.*s'\n",
               FUNC_0(VAR_5), FUNC_0(VAR_6));
        return VAR_1;
    }

    if (VAR_7)
        *(double *)VAR_7 = VAR_8;
    return 1;
}
