
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
struct TYPE_3__ {scalar_t__ min; } ;
typedef TYPE_1__ m_option_t ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bstr,char*) ;
 int FUNC_2 (struct bstr,char*) ;
 int FUNC_3 (struct mp_log*,char*,int ,int ) ;
 unsigned int FUNC_4 (struct bstr) ;
 char** FUNC_5 () ;
 int FUNC_6 (struct mp_log*,char*,...) ;
 int FUNC_7 (char**) ;

__attribute__((used)) static int FUNC_8(struct mp_log *VAR_3, const m_option_t *VAR_4,
                        struct bstr VAR_5, struct bstr VAR_6, void *VAR_7)
{
    bool VAR_8 = VAR_4->min < 0;

    if (VAR_6.len == 0)
        return VAR_2;

    if (!FUNC_2(VAR_6, "help")) {
        FUNC_6(VAR_3, "Available formats:");
        char **VAR_9 = FUNC_5();
        for (int VAR_10 = 0; VAR_9[VAR_10]; VAR_10++)
            FUNC_6(VAR_3, " %s", VAR_9[VAR_10]);
        if (VAR_8)
            FUNC_6(VAR_3, " no");
        FUNC_6(VAR_3, "\n");
        FUNC_7(VAR_9);
        return VAR_0;
    }

    unsigned int VAR_11 = FUNC_4(VAR_6);
    if (!VAR_11 && !(VAR_8 && FUNC_1(VAR_6, "no"))) {
        FUNC_3(VAR_3, "Option %.*s: unknown format name: '%.*s'\n",
               FUNC_0(VAR_5), FUNC_0(VAR_6));
        return VAR_1;
    }

    if (VAR_7)
        *((int *)VAR_7) = VAR_11;

    return 1;
}
