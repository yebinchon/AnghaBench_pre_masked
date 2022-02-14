
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct Masscan {int is_scripting; TYPE_1__ scripting; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    if (VAR_1->echo) {
        if ((VAR_1->scripting.name && VAR_1->scripting.name[0]) || VAR_1->echo_all)
            FUNC_1(VAR_1->echo, "script = %s\n", VAR_1->scripting.name);
        return 0;
    }
    if (VAR_3 && VAR_3[0])
        VAR_1->is_scripting = 1;
    else
        VAR_1->is_scripting = 0;

    if (VAR_1->scripting.name)
        FUNC_2(VAR_1->scripting.name);

    VAR_1->scripting.name = FUNC_3(VAR_3);

    return VAR_0;
}
