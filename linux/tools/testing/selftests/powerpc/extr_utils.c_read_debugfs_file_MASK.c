
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(char *VAR_2, int *VAR_3)
{
 int VAR_4 = -1, VAR_5;
 char VAR_6[VAR_1];
 char VAR_7[16];

 FUNC_4(VAR_6, "/sys/kernel/debug/");
 FUNC_6(VAR_6, VAR_2, VAR_1 - FUNC_5(VAR_6) - 1);

 if ((VAR_5 = FUNC_2(VAR_6, VAR_0)) < 0)
  return VAR_4;

 if ((VAR_4 = FUNC_3(VAR_5, VAR_7, sizeof(VAR_7))) < 0)
  return VAR_4;

 VAR_7[15] = 0;
 *VAR_3 = FUNC_0(VAR_7);
 FUNC_1(VAR_5);

 return 0;
}
