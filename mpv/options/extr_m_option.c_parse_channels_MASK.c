
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct mp_chmap {int member_0; } ;
struct m_channels {int set; int auto_safe; int chmaps; int num_chmaps; int member_0; } ;
struct bstr {scalar_t__ len; } ;
struct TYPE_3__ {int min; } ;
typedef TYPE_1__ m_option_t ;
typedef struct bstr bstr ;


 int FUNC_0 (struct bstr) ;
 int FUNC_1 (int *,int ,int ,struct mp_chmap) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bstr,char*) ;
 int FUNC_3 (struct bstr,char*,struct bstr*,struct bstr*) ;
 int FUNC_4 (struct mp_chmap*,struct bstr) ;
 int FUNC_5 (struct mp_chmap*) ;
 int FUNC_6 (struct mp_log*) ;
 int FUNC_7 (struct mp_log*,char*,...) ;
 int FUNC_8 (struct mp_log*,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct mp_log *VAR_2, const m_option_t *VAR_3,
                          struct bstr VAR_4, struct bstr VAR_5, void *VAR_6)
{

    bool VAR_7 = VAR_3->min;

    struct m_channels VAR_8 = {0};

    if (FUNC_2(VAR_5, "help")) {
        FUNC_6(VAR_2);
        if (!VAR_7) {
            FUNC_8(VAR_2, "\nOther values:\n"
                         "    auto-safe\n");
        }
        return VAR_0;
    }

    bool VAR_9 = FUNC_2(VAR_5, "auto-safe");
    if (FUNC_2(VAR_5, "auto") || FUNC_2(VAR_5, "empty") || VAR_9) {
        if (VAR_7) {
            FUNC_7(VAR_2, "Disallowed parameter.\n");
            return VAR_1;
        }
        VAR_5.len = 0;
        VAR_8.set = 1;
        VAR_8.auto_safe = VAR_9;
    }

    while (VAR_5.len) {
        bstr VAR_10;
        if (VAR_7) {
            VAR_10 = VAR_5;
            VAR_5.len = 0;
        } else {
            FUNC_3(VAR_5, ",", &VAR_10, &VAR_5);
        }

        struct mp_chmap VAR_11 = {0};
        if (!FUNC_4(&VAR_11, VAR_10) || !FUNC_5(&VAR_11)) {
            FUNC_7(VAR_2, "Invalid channel layout: %.*s\n", FUNC_0(VAR_10));
            FUNC_9(VAR_8.chmaps);
            return VAR_1;
        }

        FUNC_1(((void*)0), VAR_8.chmaps, VAR_8.num_chmaps, VAR_11);
        VAR_8.set = 1;
    }

    if (VAR_6) {
        *(struct m_channels *)VAR_6 = VAR_8;
    } else {
        FUNC_9(VAR_8.chmaps);
    }

    return 1;
}
