
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct bstr {scalar_t__ len; } ;
typedef int m_option_t ;


 int VAR_0 ;
 int FUNC_0 (struct bstr) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct bstr,int ) ;
 int FUNC_3 (struct bstr,char*) ;
 int FUNC_4 (struct mp_log*,char*,int ,int ) ;
 int FUNC_5 (struct mp_log*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct mp_log *VAR_4, const m_option_t *VAR_5,
                      struct bstr VAR_6, struct bstr VAR_7, void *VAR_8)
{
    if (VAR_7.len == 0)
        return VAR_3;

    if (!FUNC_3(VAR_7, "help")) {
        FUNC_5(VAR_4, "Available formats:");
        for (int VAR_9 = 1; VAR_9 < VAR_0; VAR_9++)
            FUNC_5(VAR_4, " %s", FUNC_1(VAR_9));
        FUNC_5(VAR_4, "\n");
        return VAR_1;
    }

    int VAR_10 = 0;
    for (int VAR_11 = 1; VAR_11 < VAR_0; VAR_11++) {
        if (FUNC_2(VAR_7, FUNC_1(VAR_11)))
            VAR_10 = VAR_11;
    }
    if (!VAR_10) {
        FUNC_4(VAR_4, "Option %.*s: unknown format name: '%.*s'\n",
               FUNC_0(VAR_6), FUNC_0(VAR_7));
        return VAR_2;
    }

    if (VAR_8)
        *((int *)VAR_8) = VAR_10;

    return 1;
}
