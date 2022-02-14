
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* stylesheet; scalar_t__ format; } ;
struct Masscan {TYPE_1__ output; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 int FUNC_2 (char*,int,char const*) ;

__attribute__((used)) static int FUNC_3(struct Masscan *VAR_2, const char *VAR_3, const char *VAR_4)
{
    FUNC_0(VAR_3);
    if (VAR_2->echo) {
        if (VAR_2->output.stylesheet[0] || VAR_2->echo_all)
            FUNC_1(VAR_2->echo, "stylesheet = %s\n", VAR_2->output.stylesheet);
        return 0;
    }

    if (VAR_2->output.format == 0)
        VAR_2->output.format = VAR_1;

    FUNC_2(VAR_2->output.stylesheet, sizeof(VAR_2->output.stylesheet), VAR_4);
    return VAR_0;
}
