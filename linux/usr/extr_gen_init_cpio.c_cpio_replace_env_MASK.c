
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static char *FUNC_5(char *VAR_1)
{
 char VAR_2[VAR_0 + 1];
 char *VAR_3, *VAR_4, *VAR_5;

 while ((VAR_3 = FUNC_4(VAR_1, "${")) &&
        (VAR_4 = FUNC_2(VAR_3 + 2, '}'))) {
  *VAR_3 = *VAR_4 = 0;
  VAR_5 = FUNC_0(VAR_3 + 2);
  FUNC_1(VAR_2, sizeof VAR_2, "%s%s%s",
    VAR_1, VAR_5 ? VAR_5 : "", VAR_4 + 1);
  FUNC_3(VAR_1, VAR_2);
 }

 return VAR_1;
}
