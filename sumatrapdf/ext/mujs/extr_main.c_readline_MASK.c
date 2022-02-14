
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char const*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

char *FUNC_5(const char *VAR_2)
{
 static char VAR_3[500], *VAR_4;
 int VAR_5;
 FUNC_1(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_3, sizeof VAR_3, VAR_0);
 if (VAR_4) {
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5 > 0 && VAR_3[VAR_5-1] == '\n')
   VAR_3[--VAR_5] = 0;
  VAR_4 = FUNC_2(VAR_5+1);
  FUNC_3(VAR_4, VAR_3, VAR_5+1);
  return VAR_4;
 }
 return ((void*)0);
}
