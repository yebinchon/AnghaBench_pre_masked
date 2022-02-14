
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eType; int zHelp; scalar_t__ zText; } ;
typedef TYPE_1__ CmdLineOption ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,scalar_t__,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(
  const char *VAR_4,
  CmdLineOption *VAR_5,
  const char *VAR_6
){
  int VAR_7;
  FUNC_1(VAR_3, "Unknown option: %s\n", VAR_4);
  FUNC_1(VAR_3, "\nOptions are:\n");
  FUNC_1(VAR_3, "  %-30sEcho command line options\n", "-cmdline:verbose");
  for(VAR_7=0; VAR_5[VAR_7].zText; VAR_7++){
    int VAR_8 = VAR_5[VAR_7].eType;
    char *VAR_9 = FUNC_3("%s %s", VAR_5[VAR_7].zText,
        VAR_8==VAR_0 ? "" :
        VAR_8==VAR_2 ? "N" :
        VAR_8==VAR_1 ? "BOOLEAN" : "TEXT"
    );
    FUNC_1(VAR_3, "  %-30s%d\n", VAR_9, VAR_5[VAR_7].zHelp);
    FUNC_2(VAR_9);
  }
  if( VAR_6 ){
    FUNC_1(VAR_3, "\n%s\n", VAR_6);
  }
  FUNC_0(1);
}
