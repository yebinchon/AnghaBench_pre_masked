
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,char*,int) ;

int FUNC_7(char *VAR_2, int VAR_3)
{
 int VAR_4 = -1, VAR_5;
 char VAR_6[VAR_1];
 char VAR_7[16];

 FUNC_3(VAR_6, "/sys/kernel/debug/");
 FUNC_5(VAR_6, VAR_2, VAR_1 - FUNC_4(VAR_6) - 1);

 if ((VAR_5 = FUNC_1(VAR_6, VAR_0)) < 0)
  return VAR_4;

 FUNC_2(VAR_7, 16, "%d", VAR_3);

 if ((VAR_4 = FUNC_6(VAR_5, VAR_7, FUNC_4(VAR_7))) < 0)
  return VAR_4;

 FUNC_0(VAR_5);

 return 0;
}
