
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* directory; } ;
struct TYPE_4__ {TYPE_1__ rotate; } ;
struct Masscan {TYPE_2__ output; scalar_t__ echo; scalar_t__ echo_all; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct Masscan *VAR_1, const char *VAR_2, const char *VAR_3)
{
    char *VAR_4;
    FUNC_0(VAR_2);
    if (VAR_1->echo) {
        if (FUNC_2(VAR_1->output.rotate.directory, ".",2) != 0 || VAR_1->echo_all) {
            FUNC_1(VAR_1->echo, "rotate-dir = %s\n", VAR_1->output.rotate.directory);
        }
        return 0;
    }
    FUNC_3( VAR_1->output.rotate.directory,
             sizeof(VAR_1->output.rotate.directory),
             VAR_3);

    VAR_4 = VAR_1->output.rotate.directory;
    while (*VAR_4 && (VAR_4[FUNC_4(VAR_4)-1] == '/' || VAR_4[FUNC_4(VAR_4)-1] == '/'))
        VAR_4[FUNC_4(VAR_4)-1] = '\0';
    return VAR_0;
}
