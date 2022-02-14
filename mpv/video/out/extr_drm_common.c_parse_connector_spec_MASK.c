
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (struct mp_log*,char const*) ;

__attribute__((used)) static void FUNC_3(struct mp_log *VAR_0,
                                 const char *VAR_1,
                                 int *VAR_2, char **VAR_3)
{
    if (!VAR_1) {
        *VAR_2 = 0;
        *VAR_3 = ((void*)0);
        return;
    }
    char *VAR_4 = FUNC_1(VAR_1, '.');
    if (VAR_4) {
        *VAR_2 = FUNC_0(VAR_1);
        *VAR_3 = FUNC_2(VAR_0, VAR_4 + 1);
    } else {
        *VAR_2 = 0;
        *VAR_3 = FUNC_2(VAR_0, VAR_1);
    }
}
