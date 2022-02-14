
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_2, char *VAR_3)
{
    char VAR_4[VAR_1];
    char VAR_5[VAR_1];

    *VAR_3 = '\0';

    FUNC_0(VAR_2, 13, VAR_4);
    FUNC_0(VAR_2, 14, VAR_5);

    if (*VAR_4 != VAR_0 && *VAR_5 != VAR_0)
 FUNC_3(VAR_3, VAR_1, "%s-%s", VAR_4, VAR_5);
    if (!FUNC_1(VAR_3, " "))
 FUNC_2(VAR_3, "-");
}
