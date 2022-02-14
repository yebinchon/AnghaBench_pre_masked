
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct m_option {int flags; struct m_opt_choice_alternatives* priv; } ;
struct m_opt_choice_alternatives {char* name; int value; } ;
struct bstr {scalar_t__ len; } ;


 int FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bstr,char*) ;
 int FUNC_2 (struct mp_log*,char*,int ,int ) ;
 int FUNC_3 (struct mp_log*,char*,...) ;
 int VAR_5 ;
 int FUNC_4 (int ,struct m_option const*,struct bstr,struct bstr,long long*) ;
 int FUNC_5 (struct mp_log*,struct m_option const*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct mp_log *VAR_6, const struct m_option *VAR_7,
                        struct bstr VAR_8, struct bstr VAR_9, void *VAR_10)
{
    struct m_opt_choice_alternatives *VAR_11 = VAR_7->priv;
    for ( ; VAR_11->name; VAR_11++) {
        if (!FUNC_1(VAR_9, VAR_11->name))
            break;
    }
    if (!VAR_11->name && VAR_9.len == 0) {

        for (VAR_11 = VAR_7->priv; VAR_11->name; VAR_11++) {
            if (!FUNC_6("yes", VAR_11->name))
                break;
        }
    }
    if (!VAR_11->name) {
        if (!FUNC_1(VAR_9, "help")) {
            FUNC_3(VAR_6, "Valid values for option %.*s are:\n", FUNC_0(VAR_8));
            FUNC_5(VAR_6, VAR_7);
            return VAR_0;
        }
        if (VAR_9.len == 0)
            return VAR_4;
        if ((VAR_7->flags & VAR_3) && (VAR_7->flags & VAR_2)) {
            long long VAR_12;
            if (FUNC_4(VAR_5, VAR_7, VAR_8, VAR_9, &VAR_12) == 1) {
                if (VAR_10)
                    *(int *)VAR_10 = VAR_12;
                return 1;
            }
        }
        FUNC_2(VAR_6, "Invalid value for option %.*s: %.*s\n",
                 FUNC_0(VAR_8), FUNC_0(VAR_9));
        FUNC_3(VAR_6, "Valid values are:\n");
        FUNC_5(VAR_6, VAR_7);
        return VAR_1;
    }
    if (VAR_10)
        *(int *)VAR_10 = VAR_11->value;

    return 1;
}
