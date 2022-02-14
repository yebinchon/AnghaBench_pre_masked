
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_show_closed; scalar_t__ is_show_host; scalar_t__ is_show_open; } ;
struct Masscan {TYPE_1__ output; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*,unsigned int) ;
 unsigned int FUNC_1 (char const*,char) ;
 int FUNC_2 (int ,char*,unsigned int,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_3(VAR_2);
    if (VAR_1->echo) {
        if (VAR_1->echo_all) {
            FUNC_5(VAR_1->echo, "output-noshow = %s%s%s\n",
                    (!VAR_1->output.is_show_open)?"open,":"",
                    (!VAR_1->output.is_show_closed)?"closed,":"",
                    (!VAR_1->output.is_show_host)?"host,":""
                    );
        }
        return 0;
    }
    for (;;) {
        const char *VAR_4 = VAR_3;
        unsigned VAR_5 = FUNC_1(VAR_4, ',');
        if (VAR_5 == 0)
            break;
        if (FUNC_0("open", VAR_4, VAR_5))
            VAR_1->output.is_show_open = 0;
        else if (FUNC_0("closed", VAR_4, VAR_5) || FUNC_0("close", VAR_4, VAR_5))
            VAR_1->output.is_show_closed = 0;
        else if (FUNC_0("open", VAR_4, VAR_5))
            VAR_1->output.is_show_host = 0;
        else if (FUNC_0("all",VAR_4,VAR_5)) {
            VAR_1->output.is_show_open = 0;
            VAR_1->output.is_show_host = 0;
            VAR_1->output.is_show_closed = 0;
        }
        else {
            FUNC_2(0, "FAIL: unknown 'noshow' spec: %.*s\n", VAR_5, VAR_4);
            FUNC_4(1);
        }
        VAR_3 += VAR_5;
        while (*VAR_3 == ',')
            VAR_3++;
    }
    return VAR_0;
}
