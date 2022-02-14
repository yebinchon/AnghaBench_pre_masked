
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct filter_window {int dummy; } ;
struct bstr {int dummy; } ;
typedef int s ;
typedef int m_option_t ;
struct TYPE_2__ {scalar_t__ name; } ;


 char* FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bstr,char*) ;
 int FUNC_2 (struct mp_log*,char*,char*) ;
 TYPE_1__* VAR_2 ;
 struct filter_window* FUNC_3 (char*) ;
 int FUNC_4 (struct mp_log*,char*,...) ;
 int FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct mp_log *VAR_3, const m_option_t *VAR_4,
                               struct bstr VAR_5, struct bstr VAR_6)
{
    char VAR_7[20] = {0};
    int VAR_8 = 1;
    if (FUNC_1(VAR_6, "help")) {
        VAR_8 = VAR_0;
    } else {
        FUNC_5(VAR_7, sizeof(VAR_7), "%.*s", FUNC_0(VAR_6));
        const struct filter_window *VAR_9 = FUNC_3(VAR_7);
        if (!VAR_9)
            VAR_8 = VAR_1;
    }
    if (VAR_8 < 1) {
        FUNC_4(VAR_3, "Available windows:\n");
        for (int VAR_10 = 0; VAR_2[VAR_10].name; VAR_10++)
            FUNC_4(VAR_3, "    %s\n", VAR_2[VAR_10].name);
        if (VAR_7[0])
            FUNC_2(VAR_3, "No window named '%s' found!\n", VAR_7);
    }
    return VAR_8;
}
