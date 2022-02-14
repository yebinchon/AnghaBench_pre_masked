
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const**,int*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 const char *VAR_2;
 char VAR_3[120];
 int VAR_4, VAR_5;

 if (FUNC_2() == 0)
  return;
 FUNC_3(VAR_0, "At main.c:%d:\n", VAR_1);

 while ((VAR_4 = FUNC_1(&VAR_2, &VAR_5))) {
  FUNC_0(VAR_4, VAR_3);
  FUNC_3(VAR_0, "- SSL %s: %s:%d\n", VAR_3, VAR_2, VAR_5);
 }
}
