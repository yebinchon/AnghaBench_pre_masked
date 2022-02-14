
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1[], char *VAR_2[], const int VAR_3[])
{
 int VAR_4[2];

 VAR_4[0] = FUNC_1(VAR_1[0], VAR_2[0]);
 VAR_4[1] = FUNC_1(VAR_1[1], VAR_2[1]);

 FUNC_0(VAR_0, "info: count=%d,%d, expect=%d,%d\n",
   VAR_4[0], VAR_4[1], VAR_3[0], VAR_3[1]);

 if ((!(VAR_4[0] == VAR_3[0] && VAR_4[1] == VAR_3[1])) &&
     (!(VAR_4[0] == VAR_3[1] && VAR_4[1] == VAR_3[0]))) {
  FUNC_0(VAR_0, "warning: incorrect queue lengths\n");
  return 1;
 }

 return 0;
}
