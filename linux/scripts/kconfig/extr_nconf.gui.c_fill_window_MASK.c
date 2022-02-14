
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,int,int ,char*,char*) ;
 int FUNC_6 (char*,char const*,int) ;

void FUNC_7(WINDOW *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 FUNC_3(VAR_0, VAR_3, VAR_2);

 VAR_4 = FUNC_4(VAR_4, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  char VAR_6[VAR_2+10];
  const char *VAR_7 = FUNC_0(VAR_1, VAR_5);
  int VAR_8 = FUNC_1(VAR_7);
  FUNC_6(VAR_6, VAR_7, FUNC_4(VAR_8, VAR_2));
  VAR_6[VAR_8] = '\0';
  FUNC_5(VAR_0, VAR_5, 0, "%s", VAR_6);
 }
}
