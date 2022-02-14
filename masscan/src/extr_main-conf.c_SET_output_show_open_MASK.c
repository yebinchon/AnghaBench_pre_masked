
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_show_open; scalar_t__ is_show_host; scalar_t__ is_show_closed; } ;
struct Masscan {TYPE_1__ output; scalar_t__ echo; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    if (VAR_1->echo) {
        return 0;
    }

    VAR_1->output.is_show_open = 1;
    VAR_1->output.is_show_closed = 0;
    VAR_1->output.is_show_host = 0;
    return VAR_0;
}
