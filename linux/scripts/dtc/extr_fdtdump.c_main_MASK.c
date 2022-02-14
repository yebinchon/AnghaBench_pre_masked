
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 char* FUNC_2 (char*) ;

int FUNC_3(int VAR_1, char *VAR_2[])
{
 char *VAR_3;

 if (VAR_1 < 2) {
  FUNC_1(VAR_0, "supply input filename\n");
  return 5;
 }

 VAR_3 = FUNC_2(VAR_2[1]);
 if (VAR_3)
  FUNC_0(VAR_3);
 else
  return 10;

 return 0;
}
