
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_log*,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct mp_log *VAR_1, char **VAR_2)
{
    for (int VAR_3 = 0; VAR_2 && VAR_2[VAR_3 * 2 + 0]; VAR_3++) {
        char *VAR_4 = VAR_2[VAR_3 * 2 + 1];
        if (FUNC_1(VAR_4) < 0 && FUNC_2(VAR_4, "no") != 0) {
            FUNC_0(VAR_1, "Invalid message level '%s'\n", VAR_4);
            return VAR_0;
        }
    }
    return 1;
}
