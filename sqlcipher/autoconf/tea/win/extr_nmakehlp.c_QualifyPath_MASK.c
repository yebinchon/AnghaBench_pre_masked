
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,char const*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static int
FUNC_5(
    const char *VAR_1)
{
    char VAR_2[VAR_0 + 1];
    char VAR_3[VAR_0 + 1];
    char *VAR_4;
    FUNC_0(VAR_0, VAR_2);
    while ((VAR_4 = FUNC_4(VAR_1, '/')) && *VAR_4)
 *VAR_4 = '\\';
    FUNC_2(VAR_3, VAR_2, VAR_1);
    FUNC_1(VAR_2, VAR_3);
    FUNC_3("%s\n", VAR_2);
    return 0;
}
