
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static BOOL FUNC_4(void)
{
  VAR_1 = FUNC_0("shlwapi.dll");


  if(!FUNC_1(VAR_1, "SHCreateStreamOnFileEx")){
      FUNC_3("Too old shlwapi version\n");
      return VAR_0;
  }

  VAR_4 = (void *)FUNC_1( VAR_1, (LPSTR)17);
  FUNC_2(VAR_4 != 0, "No Ordinal 17\n");
  VAR_5 = (void *)FUNC_1( VAR_1, (LPSTR)18);
  FUNC_2(VAR_5 != 0, "No Ordinal 18\n");
  VAR_7 = (void *)FUNC_1( VAR_1, (LPSTR)19);
  FUNC_2(VAR_7 != 0, "No Ordinal 19\n");
  VAR_8 = (void *)FUNC_1( VAR_1, (LPSTR)20);
  FUNC_2(VAR_8 != 0, "No Ordinal 20\n");
  VAR_9 = (void *)FUNC_1( VAR_1, (LPSTR)21);
  FUNC_2(VAR_9 != 0, "No Ordinal 21\n");
  VAR_13 = (void *)FUNC_1( VAR_1, (LPSTR)22);
  FUNC_2(VAR_13 != 0, "No Ordinal 22\n");
  VAR_3 = (void *)FUNC_1( VAR_1, (LPSTR)166);
  FUNC_2(VAR_3 != 0, "No Ordinal 166\n");
  VAR_6 = (void *)FUNC_1( VAR_1, (LPSTR)184);
  FUNC_2(VAR_6 != 0, "No Ordinal 184\n");
  VAR_10 = (void *)FUNC_1( VAR_1, (LPSTR)212);
  FUNC_2(VAR_10 != 0, "No Ordinal 212\n");
  VAR_11 = (void *)FUNC_1( VAR_1, (LPSTR)213);
  FUNC_2(VAR_11 != 0, "No Ordinal 213\n");
  VAR_12 = (void *)FUNC_1( VAR_1, (LPSTR)214);
  FUNC_2(VAR_12 != 0, "No Ordinal 214\n");

  return VAR_2;
}
