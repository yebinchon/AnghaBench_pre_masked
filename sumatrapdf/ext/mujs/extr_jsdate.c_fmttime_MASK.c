
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 int FUNC_2 (double) ;
 double FUNC_3 (double) ;
 int FUNC_4 (double) ;
 int FUNC_5 (double) ;
 int FUNC_6 (char*,char*,int,int,int,int,...) ;

__attribute__((used)) static char *FUNC_7(char *VAR_0, double VAR_1, double VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = FUNC_5(VAR_1);
 int VAR_7 = FUNC_0(FUNC_3(VAR_2));
 int VAR_8 = FUNC_1(FUNC_3(VAR_2));
 if (!FUNC_4(VAR_1))
  return "Invalid Date";
 if (VAR_2 == 0)
  FUNC_6(VAR_0, "%02d:%02d:%02d.%03dZ", VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_2 < 0)
  FUNC_6(VAR_0, "%02d:%02d:%02d.%03d-%02d:%02d", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 else
  FUNC_6(VAR_0, "%02d:%02d:%02d.%03d+%02d:%02d", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return VAR_0;
}
