
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,char*,char*,...) ;

__attribute__((used)) static void FUNC_5(CHAR *VAR_5, CHAR *VAR_6)
{
  CHAR VAR_7[VAR_2];
  FUNC_4(VAR_7,"%s\\%s\\%s",VAR_6,VAR_3,VAR_4);
  FUNC_3(FUNC_0(VAR_7),"DeleteFileA failed\n");
  FUNC_4(VAR_7,"%s\\%s\\%s",VAR_6,VAR_3,VAR_1);
  FUNC_3(FUNC_0(VAR_7),"DeleteFileA failed\n");
  FUNC_4(VAR_7,"%s\\%s\\%s",VAR_6,VAR_0,VAR_4);
  FUNC_3(FUNC_0(VAR_7),"DeleteFileA failed\n");
  FUNC_4(VAR_7,"%s\\%s\\%s",VAR_6,VAR_0,VAR_1);
  FUNC_3(FUNC_0(VAR_7),"DeleteFileA failed\n");
  FUNC_4(VAR_7,"%s\\%s",VAR_6,VAR_3);
  FUNC_3(FUNC_1(VAR_7),"RemoveDirectoryA failed\n");
  FUNC_4(VAR_7,"%s\\%s",VAR_6,VAR_0);
  FUNC_3(FUNC_1(VAR_7),"RemoveDirectoryA failed\n");
  FUNC_3(FUNC_2(VAR_5),"SetCurrentDirectoryA failed\n");
  FUNC_3(FUNC_1(VAR_6),"RemoveDirectoryA failed\n");
}
