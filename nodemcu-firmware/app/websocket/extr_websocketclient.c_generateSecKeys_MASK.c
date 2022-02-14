
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(char **VAR_2, char **VAR_3) {
  char VAR_4[16];
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
    VAR_4[VAR_5] = (char) FUNC_4();
  }

  *VAR_2 = FUNC_0(VAR_4, 16);


  char VAR_6[24 + VAR_1];
  FUNC_2(VAR_6, *VAR_2, 24);
  FUNC_2(VAR_6 + 24, VAR_0, VAR_1);

  char *VAR_7 = FUNC_1(VAR_6, 24 + VAR_1);
  *VAR_3 = FUNC_0(VAR_7, 20);

  FUNC_3(VAR_7);
}
