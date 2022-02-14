
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {struct m_opt_choice_alternatives* priv; } ;
struct m_opt_choice_alternatives {scalar_t__ name; } ;
struct bstr {scalar_t__ len; } ;
typedef struct bstr bstr ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct m_option const*,int*,struct bstr) ;
 int FUNC_2 (struct bstr,char*,struct bstr*,struct bstr*) ;
 int FUNC_3 (struct mp_log*,char*,int ,int ) ;
 int FUNC_4 (struct mp_log*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct mp_log *VAR_2, const struct m_option *VAR_3,
                       struct bstr VAR_4, struct bstr VAR_5, void *VAR_6)
{
    int VAR_7 = 0;
    while (VAR_5.len) {
        bstr VAR_8;
        FUNC_2(VAR_5, "+", &VAR_8, &VAR_5);
        int VAR_9 = FUNC_1(VAR_3, &VAR_7, VAR_8);
        if (VAR_9 == VAR_1) {
            FUNC_3(VAR_2, "Invalid flag for option %.*s: %.*s\n",
                     FUNC_0(VAR_4), FUNC_0(VAR_8));
            FUNC_4(VAR_2, "Valid flags are:\n");
            struct m_opt_choice_alternatives *VAR_10;
            for (VAR_10 = VAR_3->priv; VAR_10->name; VAR_10++)
                FUNC_4(VAR_2, "    %s\n", VAR_10->name);
            FUNC_4(VAR_2, "Flags can usually be combined with '+'.\n");
            return VAR_0;
        } else if (VAR_9 < 0) {
            FUNC_3(VAR_2, "Option %.*s: flag '%.*s' conflicts with a previous "
                     "flag value.\n", FUNC_0(VAR_4), FUNC_0(VAR_8));
            return VAR_0;
        }
    }
    if (VAR_6)
        *(int *)VAR_6 = VAR_7;
    return 1;
}
