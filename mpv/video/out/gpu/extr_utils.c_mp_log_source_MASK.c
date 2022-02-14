
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;


 int FUNC_0 (struct mp_log*,int,char*,int,int,char const*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

void FUNC_3(struct mp_log *VAR_0, int VAR_1, const char *VAR_2)
{
    int VAR_3 = 1;
    if (!VAR_2)
        return;
    while (*VAR_2) {
        const char *VAR_4 = FUNC_1(VAR_2, '\n');
        const char *VAR_5 = VAR_4 + 1;
        if (!VAR_4)
            VAR_5 = VAR_4 = VAR_2 + FUNC_2(VAR_2);
        FUNC_0(VAR_0, VAR_1, "[%3d] %.*s\n", VAR_3, (int)(VAR_4 - VAR_2), VAR_2);
        VAR_3++;
        VAR_2 = VAR_5;
    }
}
