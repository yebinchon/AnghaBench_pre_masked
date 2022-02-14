
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {int dummy; } ;
struct bstr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bstr,char*) ;
 char* FUNC_1 (int *,struct bstr) ;
 int FUNC_2 (struct mp_log*) ;
 int FUNC_3 (struct mp_log*,char*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct mp_log *VAR_2, const struct m_option *VAR_3,
                                 struct bstr VAR_4, struct bstr VAR_5)
{
    if (FUNC_0(VAR_5, "help")) {
        FUNC_2(VAR_2);
        return VAR_0;
    }

    char *VAR_6 = FUNC_1(((void*)0), VAR_5);
    if (!FUNC_4(VAR_6, ((void*)0))) {
        FUNC_3(VAR_2, "Invalid value for option drm-mode. Must be a positive number, a string of the format WxH[@R] or 'help'\n");
        FUNC_5(VAR_6);
        return VAR_1;
    }
    FUNC_5(VAR_6);

    return 1;
}
