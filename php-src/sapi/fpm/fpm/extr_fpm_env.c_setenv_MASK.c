
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

int FUNC_4(char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_3(VAR_0);
 int VAR_4 = FUNC_3(VAR_1);
 char *VAR_5 = FUNC_0(VAR_3 + 1 + VAR_4 + 1);

 FUNC_1(VAR_5, VAR_0, VAR_3);

 VAR_5[VAR_3] = '=';

 FUNC_1(VAR_5 + VAR_3 + 1, VAR_1, VAR_4);

 VAR_5[VAR_3 + 1 + VAR_4] = '\0';

 return FUNC_2(VAR_5);
}
