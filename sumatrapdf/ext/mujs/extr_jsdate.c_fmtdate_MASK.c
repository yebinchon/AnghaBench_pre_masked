
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 int FUNC_2 (double) ;
 int FUNC_3 (double) ;
 int FUNC_4 (char*,char*,int,int,int) ;

__attribute__((used)) static char *FUNC_5(char *VAR_0, double VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = FUNC_0(VAR_1);
 if (!FUNC_3(VAR_1))
  return "Invalid Date";
 FUNC_4(VAR_0, "%04d-%02d-%02d", VAR_2, VAR_3+1, VAR_4);
 return VAR_0;
}
