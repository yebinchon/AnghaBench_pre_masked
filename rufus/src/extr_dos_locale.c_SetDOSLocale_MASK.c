
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int default_cp; char* name; } ;
typedef int FILE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (char*,char*) ;
 int FUNC_8 (int *,char*,...) ;
 char* FUNC_9 () ;
 char* FUNC_10 (char const*) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char const*) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (char*,...) ;

BOOL FUNC_17(const char* VAR_4, BOOL VAR_5)
{
 FILE* VAR_6;
 char VAR_7[VAR_1];
 ULONG VAR_8;
 const char *VAR_9;
 int VAR_10;
 const char* VAR_11;


 VAR_9 = FUNC_9();

 VAR_10 = VAR_5?FUNC_5(VAR_9):FUNC_12(VAR_9);
 if (VAR_10 < 0) {
  FUNC_16("Keyboard id '%s' is not supported - falling back to 'us'\n", VAR_9);
  VAR_9 = "us";
  VAR_10 = VAR_5?FUNC_5(VAR_9):FUNC_12(VAR_9);
 }
 FUNC_16("Will use DOS keyboard '%s' [%s]\n", VAR_9, FUNC_10(VAR_9));


 VAR_8 = FUNC_0();
 VAR_11 = VAR_5?FUNC_4(VAR_8):FUNC_11(VAR_8);
 if (VAR_11 == ((void*)0)) {

  FUNC_16("Unable to find an EGA file with codepage %d [%s]\n", VAR_8, FUNC_2(VAR_8));
  VAR_8 = VAR_3[VAR_10].default_cp;
  VAR_11 = VAR_5?"ega.cpx":"ega.cpi";
 } else if (VAR_5) {
  VAR_8 = FUNC_6(VAR_8);
 }
 FUNC_16("Will use codepage %d [%s]\n", VAR_8, FUNC_2(VAR_8));

 if ((VAR_8 == 437) && (FUNC_15(VAR_9, "us") == 0)) {

  FUNC_14(VAR_7, VAR_4);
  FUNC_13(VAR_7, "\\AUTOEXEC.BAT");
  VAR_6 = FUNC_7(VAR_7, "w+");
  if (VAR_6 == ((void*)0)) {
   FUNC_16("Unable to create 'AUTOEXEC.BAT': %s.\n", FUNC_1());
   return VAR_0;
  }
  FUNC_8(VAR_6, "@echo off\n");
  FUNC_8(VAR_6, "set PATH=.;\\;\\LOCALE\n");
  FUNC_8(VAR_6, "echo Using %s keyboard with %s codepage [%d]\n", FUNC_10("us"), FUNC_2(437), 437);
  FUNC_3(VAR_6);
  FUNC_16("Successfully wrote 'AUTOEXEC.BAT'\n");
  return VAR_2;
 }


 FUNC_14(VAR_7, VAR_4);
 FUNC_13(VAR_7, "\\CONFIG.SYS");
 VAR_6 = FUNC_7(VAR_7, "w+");
 if (VAR_6 == ((void*)0)) {
  FUNC_16("Unable to create 'CONFIG.SYS': %s.\n", FUNC_1());
  return VAR_0;
 }
 if (VAR_5) {
  FUNC_8(VAR_6, "!MENUCOLOR=7,0\nMENU\nMENU   FreeDOS Language Selection Menu\n");
  FUNC_8(VAR_6, "MENU   \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD"
   "\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\nMENU\n");
 } else {
  FUNC_8(VAR_6, "[MENU]\n");
 }
 FUNC_8(VAR_6, "MENUDEFAULT=1,5\n");

 FUNC_8(VAR_6, "%s1%c Use %s keyboard with %s codepage [%d]\n",
  VAR_5?"MENU ":"MENUITEM=", VAR_5?')':',', FUNC_10(VAR_9), FUNC_2(VAR_8), (int)VAR_8);
 FUNC_8(VAR_6, "%s2%c Use %s keyboard with %s codepage [%d]\n",
  VAR_5?"MENU ":"MENUITEM=", VAR_5?')':',', FUNC_10("us"), FUNC_2(437), 437);
 FUNC_8(VAR_6, "%s", VAR_5?"MENU\n12?\n":"[1]\ndevice=\\locale\\display.sys con=(ega,,1)\n[2]\n");
 FUNC_3(VAR_6);
 FUNC_16("Successfully wrote 'CONFIG.SYS'\n");


 FUNC_14(VAR_7, VAR_4);
 FUNC_13(VAR_7, "\\AUTOEXEC.BAT");
 VAR_6 = FUNC_7(VAR_7, "w+");
 if (VAR_6 == ((void*)0)) {
  FUNC_16("Unable to create 'AUTOEXEC.BAT': %s.\n", FUNC_1());
  return VAR_0;
 }
 FUNC_8(VAR_6, "@echo off\n");
 FUNC_8(VAR_6, "set PATH=.;\\;\\LOCALE\n");
 if (VAR_5)
  FUNC_8(VAR_6, "display con=(ega,,1)\n");
 FUNC_8(VAR_6, "GOTO %%CONFIG%%\n");
 FUNC_8(VAR_6, ":1\n");
 FUNC_8(VAR_6, "mode con codepage prepare=((%d) \\locale\\%s) > NUL\n", (int)VAR_8, VAR_11);
 FUNC_8(VAR_6, "mode con codepage select=%d > NUL\n", (int)VAR_8);
 FUNC_8(VAR_6, "keyb %s,,\\locale\\%s\n", VAR_9, VAR_3[VAR_10].name);
 FUNC_8(VAR_6, ":2\n");
 FUNC_3(VAR_6);
 FUNC_16("Successfully wrote 'AUTOEXEC.BAT'\n");

 return VAR_2;
}
