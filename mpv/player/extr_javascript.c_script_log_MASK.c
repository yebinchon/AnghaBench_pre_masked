
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int dummy; } ;
typedef int js_State ;
struct TYPE_2__ {struct mp_log* log; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (struct mp_log*,int,char*,...) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(js_State *VAR_0)
{
    const char *VAR_1 = FUNC_3(VAR_0, 1);
    int VAR_2 = FUNC_5(VAR_1);
    if (VAR_2 < 0)
        FUNC_1(VAR_0, "Invalid log level '%s'", VAR_1);

    struct mp_log *VAR_3 = FUNC_0(VAR_0)->log;
    for (int VAR_4 = FUNC_2(VAR_0), VAR_5 = 2; VAR_5 < VAR_4; VAR_5++)
        FUNC_4(VAR_3, VAR_2, (VAR_5 == 2 ? "%s" : " %s"), FUNC_3(VAR_0, VAR_5));
    FUNC_4(VAR_3, VAR_2, "\n");
    FUNC_6(VAR_0);
}
