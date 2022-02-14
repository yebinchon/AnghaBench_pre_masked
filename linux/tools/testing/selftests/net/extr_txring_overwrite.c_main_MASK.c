
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int,char const) ;
 int FUNC_3 (int,char*,char const) ;
 int FUNC_4 () ;
 int FUNC_5 (char**) ;

int FUNC_6(int VAR_1, char **VAR_2)
{
 const char VAR_3[] = "ab";
 char *VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_4();
 VAR_6 = FUNC_5(&VAR_4);

 FUNC_3(VAR_6, VAR_4, VAR_3[0]);
 FUNC_3(VAR_6, VAR_4, VAR_3[1]);

 VAR_7 |= FUNC_2(VAR_5, VAR_3[0]);
 VAR_7 |= FUNC_2(VAR_5, VAR_3[1]);

 if (FUNC_0(VAR_6))
  FUNC_1(1, VAR_0, "close t");
 if (FUNC_0(VAR_5))
  FUNC_1(1, VAR_0, "close r");

 return VAR_7;
}
