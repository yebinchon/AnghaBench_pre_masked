
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct mp_log {int dummy; } ;
struct m_obj_list {int (* print_unknown_entry_help ) (struct mp_log*,int ) ;scalar_t__ use_global_options; } ;
struct m_obj_desc {int (* print_help ) (struct mp_log*) ;} ;
struct m_config {int dummy; } ;
struct bstr {scalar_t__ len; } ;
typedef int bstr ;


 int FUNC_0 (struct bstr) ;
 int FUNC_1 (int *,char**,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bstr*,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (char***) ;
 int FUNC_6 (struct mp_log*,struct bstr,struct bstr,struct m_config*,int ,int ,int,int,int*,int *,int *,char*,int) ;
 int FUNC_7 (struct m_config*,char*) ;
 int FUNC_8 (struct mp_log*,char*,...) ;
 int FUNC_9 (int,char*,int ) ;
 int FUNC_10 (struct mp_log*,char*,int ,int ) ;
 int FUNC_11 (struct mp_log*,struct bstr,struct bstr*,int *,int *) ;
 int FUNC_12 (struct mp_log*) ;
 int FUNC_13 (struct mp_log*,int ) ;

__attribute__((used)) static int FUNC_14(struct mp_log *VAR_2, struct bstr VAR_3,
                                  struct bstr VAR_4, struct bstr *VAR_5,
                                  struct m_config *VAR_6, int VAR_7, bool VAR_8,
                                  struct m_obj_desc *VAR_9,
                                  const struct m_obj_list *VAR_10, char ***VAR_11)
{
    int VAR_12 = 0;
    char **VAR_13 = ((void*)0);
    int VAR_14 = 0;
    int VAR_15 = 1;
    char VAR_16[80];

    if (VAR_11) {
        VAR_13 = *VAR_11;
        while (VAR_13 && VAR_13[VAR_14])
            VAR_14++;
    }

    while (VAR_5->len > 0) {
        bstr VAR_17, VAR_18;
        VAR_15 = FUNC_11(VAR_2, VAR_3, VAR_5, &VAR_17, &VAR_18);
        if (VAR_15 < 0)
            goto exit;

        if (VAR_10->use_global_options) {
            FUNC_8(VAR_2, "Option %.*s: this option does not accept sub-options.\n",
                   FUNC_0(VAR_3));
            FUNC_8(VAR_2, "Sub-options for --vo and --ao were removed from mpv in "
                   "release 0.23.0.\nSee https://0x0.st/uM for details.\n");
            VAR_15 = VAR_1;
            goto exit;
        }

        if (FUNC_3(VAR_17, "help"))
            goto print_help;
        VAR_15 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_6, VAR_17, VAR_18, VAR_7,
                          VAR_8, &VAR_12, &VAR_17, &VAR_18, VAR_16, sizeof(VAR_16));
        if (VAR_15 < 0)
            goto exit;

        if (VAR_15 > 0 && VAR_11) {
            FUNC_1(((void*)0), VAR_13, VAR_14, FUNC_4(((void*)0), VAR_17));
            FUNC_1(((void*)0), VAR_13, VAR_14, FUNC_4(((void*)0), VAR_18));
            FUNC_1(((void*)0), VAR_13, VAR_14, ((void*)0));
            FUNC_1(((void*)0), VAR_13, VAR_14, ((void*)0));
            VAR_14 -= 2;
        }

        if (!FUNC_2(VAR_5, ":"))
            break;
    }

    if (VAR_11) {
        if (VAR_14 > 0) {
            *VAR_11 = VAR_13;
            VAR_13 = ((void*)0);
        } else {
            *VAR_11 = ((void*)0);
        }
    }

    goto exit;

print_help: ;
    if (VAR_6) {
        if (VAR_9->print_help)
            VAR_9->print_help(VAR_2);
        FUNC_7(VAR_6, "*");
    } else if (VAR_10->print_unknown_entry_help) {
        VAR_10->print_unknown_entry_help(VAR_2, FUNC_9(80, "%.*s", FUNC_0(VAR_4)));
    } else {
        FUNC_10(VAR_2, "Option %.*s: item %.*s doesn't exist.\n",
               FUNC_0(VAR_3), FUNC_0(VAR_4));
    }
    VAR_15 = VAR_0;

exit:
    FUNC_5(&VAR_13);
    return VAR_15;
}
