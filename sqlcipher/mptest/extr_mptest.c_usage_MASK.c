
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char const) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const char *VAR_1){
  int VAR_2;
  const char *VAR_3 = VAR_1;
  for(VAR_2=0; VAR_1[VAR_2]; VAR_2++){
    if( FUNC_2(VAR_1[VAR_2]) ) VAR_3 = VAR_1+VAR_2+1;
  }
  FUNC_1(VAR_0,"Usage: %s DATABASE ?OPTIONS? ?SCRIPT?\n", VAR_3);
  FUNC_1(VAR_0,
    "Options:\n"
    "   --errlog FILENAME           Write errors to FILENAME\n"
    "   --journalmode MODE          Use MODE as the journal_mode\n"
    "   --log FILENAME              Log messages to FILENAME\n"
    "   --quiet                     Suppress unnecessary output\n"
    "   --vfs NAME                  Use NAME as the VFS\n"
    "   --repeat N                  Repeat the test N times\n"
    "   --sqltrace                  Enable SQL tracing\n"
    "   --sync                      Enable synchronous disk writes\n"
    "   --timeout MILLISEC          Busy timeout is MILLISEC\n"
    "   --trace BOOLEAN             Enable or disable tracing\n"
  );
  FUNC_0(1);
}
