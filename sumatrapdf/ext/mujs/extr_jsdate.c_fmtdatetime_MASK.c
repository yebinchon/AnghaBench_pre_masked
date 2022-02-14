
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,double) ;
 int FUNC_1 (char*,double,double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (char*,char*,char*,char*) ;

__attribute__((used)) static char *FUNC_4(char *VAR_0, double VAR_1, double VAR_2)
{
 char VAR_3[20], VAR_4[20];
 if (!FUNC_2(VAR_1))
  return "Invalid Date";
 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_4, VAR_1, VAR_2);
 FUNC_3(VAR_0, "%sT%s", VAR_3, VAR_4);
 return VAR_0;
}
