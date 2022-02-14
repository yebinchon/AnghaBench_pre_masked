
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,char**) ;

__attribute__((used)) static bool FUNC_6(char *VAR_2)
{
 bool VAR_3 = 0;
 char *VAR_4, *VAR_5 = ((void*)0);
 char VAR_6[VAR_1];
 char *VAR_7 = FUNC_2("PATH");

 if (!VAR_7)
  return 0;

 VAR_7 = FUNC_4(VAR_7);
 if (!VAR_7)
  return 0;

 VAR_4 = FUNC_5(VAR_7, ":", &VAR_5);
 while (VAR_4) {
  FUNC_3(VAR_6, sizeof(VAR_6), "%s/%s", VAR_4, VAR_2);
  if (FUNC_0(VAR_6, VAR_0) == 0) {
   VAR_3 = 1;
   break;
  }
  VAR_4 = FUNC_5(((void*)0), ":", &VAR_5);
 }
 FUNC_1(VAR_7);
 return VAR_3;
}
