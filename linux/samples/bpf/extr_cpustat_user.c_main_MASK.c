
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;
 int * VAR_4 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,char*,char*) ;

int FUNC_9(int VAR_5, char **VAR_6)
{
 char VAR_7[256];
 int VAR_8;

 FUNC_8(VAR_7, sizeof(VAR_7), "%s_kern.o", VAR_6[0]);

 if (FUNC_4(VAR_7)) {
  FUNC_5("%s", VAR_2);
  return 1;
 }

 VAR_8 = FUNC_1();
 if (VAR_8 < 0)
  return 1;

 VAR_8 = FUNC_0();
 if (VAR_8 < 0)
  return 1;

 FUNC_6(VAR_0, VAR_3);
 FUNC_6(VAR_1, VAR_3);

 while (1) {
  FUNC_3(VAR_4[1], VAR_4[2]);
  FUNC_2();
  FUNC_7(5);
 }

 return 0;
}
