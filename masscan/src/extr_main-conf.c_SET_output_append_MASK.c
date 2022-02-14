
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_append; } ;
struct Masscan {TYPE_1__ output; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    if (VAR_1->echo) {
        if (VAR_1->output.is_append || VAR_1->echo_all)
            FUNC_1(VAR_1->echo, "output-append = %s\n",
                    VAR_1->output.is_append?"true":"false");
        return 0;
    }
    if (FUNC_0("overwrite", VAR_2) || !FUNC_2(VAR_3))
        VAR_1->output.is_append = 0;
    else
        VAR_1->output.is_append = 1;
    return VAR_0;
}
