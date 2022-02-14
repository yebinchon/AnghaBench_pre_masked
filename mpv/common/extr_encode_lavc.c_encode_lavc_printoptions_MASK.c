
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_log {int dummy; } ;
typedef int optbuf ;
struct TYPE_4__ {int flags; int type; char* unit; char* name; int help; } ;
typedef TYPE_1__ AVOption ;
 TYPE_1__* FUNC_0 (void const*,TYPE_1__ const*) ;
 int FUNC_1 (struct mp_log*,char*,...) ;
 int FUNC_2 (char*,int,char*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(struct mp_log *VAR_0, const void *VAR_1,
                                     const char *VAR_2, const char *VAR_3,
                                     const char *VAR_4, int VAR_5,
                                     int VAR_6)
{
    const AVOption *VAR_7 = ((void*)0);
    char VAR_8[32];
    while ((VAR_7 = FUNC_0(VAR_1, VAR_7))) {


        if (VAR_7->flags)
            if ((VAR_7->flags & VAR_5) != VAR_6)
                continue;




        if (!VAR_4 && VAR_7->type == 135) {
            continue;
        } else if (VAR_4 && VAR_7->type != 135) {
            continue;
        } else if (VAR_4 && VAR_7->type == 135
                 && FUNC_3(VAR_4, VAR_7->unit))
        {
            continue;
        } else if (VAR_4 && VAR_7->type == 135) {
            FUNC_1(VAR_0, "%s", VAR_3);
        } else {
            FUNC_1(VAR_0, "%s", VAR_2);
        }

        switch (VAR_7->type) {
        case 133:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<flags>", VAR_7->name);
            break;
        case 131:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<int>", VAR_7->name);
            break;
        case 130:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<int64>", VAR_7->name);
            break;
        case 134:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<double>", VAR_7->name);
            break;
        case 132:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<float>", VAR_7->name);
            break;
        case 128:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<string>", VAR_7->name);
            break;
        case 129:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<rational>", VAR_7->name);
            break;
        case 136:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s=<binary>", VAR_7->name);
            break;
        case 135:
            FUNC_2(VAR_8, sizeof(VAR_8), "  [+-]%s", VAR_7->name);
            break;
        default:
            FUNC_2(VAR_8, sizeof(VAR_8), "%s", VAR_7->name);
            break;
        }
        VAR_8[sizeof(VAR_8) - 1] = 0;
        FUNC_1(VAR_0, "%-32s ", VAR_8);
        if (VAR_7->help)
            FUNC_1(VAR_0, " %s", VAR_7->help);
        FUNC_1(VAR_0, "\n");
        if (VAR_7->unit && VAR_7->type != 135)
            FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7->unit,
                                     VAR_5, VAR_6);
    }
}
