
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static
char* FUNC_1(const char* VAR_0)
{
    static char VAR_1[2048];
    char* VAR_2;

    FUNC_0(VAR_1, VAR_0, 2047);
    VAR_1[2047] = 0;
    for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
            if (*VAR_2 == '\n' || *VAR_2 == '\r') *VAR_2 = ' ';

    return VAR_1;

}
