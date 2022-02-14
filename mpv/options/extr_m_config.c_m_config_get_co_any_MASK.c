
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_config_option {int warning_was_printed; TYPE_1__* opt; int name; } ;
struct m_config {scalar_t__ is_toplevel; } ;
struct bstr {int dummy; } ;
struct TYPE_2__ {char* priv; scalar_t__* deprecation_message; int * type; } ;


 int FUNC_0 (struct m_config const*,char*,char const*,int ,...) ;
 int FUNC_1 (struct m_config const*,char*,char const*,int ,char const*,...) ;
 struct bstr FUNC_2 (char const*) ;
 struct m_config_option* FUNC_3 (struct m_config const*,struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct m_config_option *FUNC_4(const struct m_config *VAR_2,
                                                   struct bstr VAR_3)
{
    struct m_config_option *VAR_4 = FUNC_3(VAR_2, VAR_3);
    if (!VAR_4)
        return ((void*)0);

    const char *VAR_5 = VAR_2->is_toplevel ? "--" : "";
    if (VAR_4->opt->type == &VAR_0) {
        const char *VAR_6 = (const char *)VAR_4->opt->priv;
        if (VAR_4->opt->deprecation_message && !VAR_4->warning_was_printed) {
            if (VAR_4->opt->deprecation_message[0]) {
                FUNC_1(VAR_2, "Warning: option %s%s was replaced with "
                        "%s%s: %s\n", VAR_5, VAR_4->name, VAR_5, VAR_6,
                        VAR_4->opt->deprecation_message);
            } else {
                FUNC_1(VAR_2, "Warning: option %s%s was replaced with "
                        "%s%s and might be removed in the future.\n",
                        VAR_5, VAR_4->name, VAR_5, VAR_6);
            }
            VAR_4->warning_was_printed = 1;
        }
        return FUNC_4(VAR_2, FUNC_2(VAR_6));
    } else if (VAR_4->opt->type == &VAR_1) {
        if (!VAR_4->warning_was_printed) {
            char *VAR_7 = VAR_4->opt->priv;
            if (VAR_7) {
                FUNC_0(VAR_2, "Option %s%s was removed: %s\n",
                         VAR_5, VAR_4->name, VAR_7);
            } else {
                FUNC_0(VAR_2, "Option %s%s was removed.\n",
                         VAR_5, VAR_4->name);
            }
            VAR_4->warning_was_printed = 1;
        }
        return ((void*)0);
    } else if (VAR_4->opt->deprecation_message) {
        if (!VAR_4->warning_was_printed) {
            FUNC_1(VAR_2, "Warning: option %s%s is deprecated "
                    "and might be removed in the future (%s).\n",
                    VAR_5, VAR_4->name, VAR_4->opt->deprecation_message);
            VAR_4->warning_was_printed = 1;
        }
    }
    return VAR_4;
}
