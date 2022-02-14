
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;

int FUNC_4(int VAR_2, char *VAR_3[])
{
 if (VAR_2 > 1) {
  if (FUNC_2(VAR_3[1], "-h") == 0) {
   FUNC_1("Syntax:\t [<num loops>]\n");
   return 0;
  } else {
   VAR_0 = FUNC_0(VAR_3[1]);
  }
 }
 return FUNC_3(VAR_1, "tm_tmspr");
}
