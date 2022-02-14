
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_8__ {int * priv_class; } ;
struct TYPE_7__ {scalar_t__ type; int offset; int help; int name; } ;
typedef TYPE_1__ AVOption ;
typedef TYPE_2__ AVFilter ;
typedef int AVClass ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int const**,TYPE_1__ const*) ;
 TYPE_2__* FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__ const*,int) ;
 int FUNC_5 (struct mp_log*,char*,char const*) ;
 int FUNC_6 (struct mp_log*,char*,...) ;
 char* FUNC_7 (int,char*,char const*) ;

void FUNC_8(struct mp_log *VAR_1, const char *VAR_2, int VAR_3)
{
    const AVFilter *VAR_4 = FUNC_2(VAR_2);
    if (!VAR_4) {
        FUNC_5(VAR_1, "Filter '%s' not found.\n", VAR_2);
        return;
    }
    if (!FUNC_4(VAR_4, VAR_3)) {
        FUNC_5(VAR_1, "Filter '%s' is not usable in this context (wrong media \n"
               "types or wrong number of inputs/outputs).\n", VAR_2);
    }
    FUNC_6(VAR_1, "Options:\n\n");
    const AVClass *VAR_5 = VAR_4->priv_class;

    const AVClass **VAR_6 = &VAR_5;
    int VAR_7= -1;
    int VAR_8 = 0;
    for (const AVOption *VAR_9 = FUNC_1(VAR_6, 0); VAR_9; VAR_9 = FUNC_1(VAR_6, VAR_9)) {



        if (VAR_9->type == VAR_0 || VAR_9->offset == VAR_7)
            continue;
        VAR_7 = VAR_9->offset;

        const char *VAR_10 = FUNC_3(VAR_9->type);
        char *VAR_11 = VAR_10 ? FUNC_7(30, "<%s>", VAR_10) : "?";
        FUNC_6(VAR_1, " %-10s %-12s %s\n", VAR_9->name, VAR_11, FUNC_0(VAR_9->help));

        const AVOption *VAR_12 = VAR_9;
        while (1) {
            VAR_12 = FUNC_1(VAR_6, VAR_12);
            if (!VAR_12 || VAR_12->type != VAR_0)
                break;
            FUNC_6(VAR_1, " %3s%-23s %s\n", "", VAR_12->name, FUNC_0(VAR_12->help));
        }

        VAR_8++;
    }
    FUNC_6(VAR_1, "\nTotal: %d options\n", VAR_8);
}
