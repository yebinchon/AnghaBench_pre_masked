
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct bstr {int dummy; } ;
typedef int s ;
typedef int m_option_t ;
struct TYPE_3__ {char const* const name; } ;
struct TYPE_4__ {TYPE_1__ f; int polar; } ;


 char* FUNC_0 (struct bstr) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bstr,char*) ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct mp_log*,char*,char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (struct mp_log*,char*,...) ;
 int FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct mp_log *VAR_5, const m_option_t *VAR_6,
                               struct bstr VAR_7, struct bstr VAR_8)
{
    char VAR_9[20] = {0};
    int VAR_10 = 1;
    bool VAR_11 = FUNC_1(VAR_7, "tscale");
    if (FUNC_1(VAR_8, "help")) {
        VAR_10 = VAR_0;
    } else {
        FUNC_5(VAR_9, sizeof(VAR_9), "%.*s", FUNC_0(VAR_8));
        if (!FUNC_2(VAR_9, VAR_11))
            VAR_10 = VAR_1;
    }
    if (VAR_10 < 1) {
        FUNC_4(VAR_5, "Available scalers:\n");
        for (const char *const *VAR_12 = VAR_11 ? VAR_3
                                                : VAR_2;
             *VAR_12; VAR_12++) {
            FUNC_4(VAR_5, "    %s\n", *VAR_12);
        }
        for (int VAR_13 = 0; VAR_4[VAR_13].f.name; VAR_13++) {
            if (!VAR_11 || !VAR_4[VAR_13].polar)
                FUNC_4(VAR_5, "    %s\n", VAR_4[VAR_13].f.name);
        }
        if (VAR_9[0])
            FUNC_3(VAR_5, "No scaler named '%s' found!\n", VAR_9);
    }
    return VAR_10;
}
