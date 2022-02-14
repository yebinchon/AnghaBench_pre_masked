
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mac_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_19 ;
 int FUNC_3 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;
 int VAR_24 ;
 char* VAR_25 ;
 int VAR_26 ;

void FUNC_4(int VAR_27, const char *VAR_28[])
{
 int VAR_29;

 if (VAR_2)
  FUNC_2("Connected to %s.\n", VAR_7);
 else
  FUNC_2("Not connected.\n");
 if (!VAR_19) {
  FUNC_3(1);
  if (VAR_2) {
   FUNC_2("Connected for proxy commands to %s.\n", VAR_7);
  }
  else {
   FUNC_2("No proxy connection.\n");
  }
  FUNC_3(0);
 }
 FUNC_2("Mode: %s; Type: %s; Form: %s; Structure: %s\n",
  VAR_15, VAR_25, VAR_5, VAR_23);
 FUNC_2("Verbose: %s; Bell: %s; Prompting: %s; Globbing: %s\n",
  FUNC_1(VAR_26), FUNC_1(VAR_0), FUNC_1(VAR_8),
  FUNC_1(VAR_4));
 FUNC_2("Store unique: %s; Receive unique: %s\n", FUNC_1(VAR_24),
  FUNC_1(VAR_20));
 FUNC_2("Case: %s; CR stripping: %s\n",FUNC_1(VAR_14),FUNC_1(VAR_3));
 if (VAR_16) {
  FUNC_2("Ntrans: (in) %s (out) %s\n", VAR_17,VAR_18);
 }
 else {
  FUNC_2("Ntrans: off\n");
 }
 if (VAR_11) {
  FUNC_2("Nmap: (in) %s (out) %s\n", VAR_12, VAR_13);
 }
 else {
  FUNC_2("Nmap: off\n");
 }
 FUNC_2("Hash mark printing: %s; Use of PORT cmds: %s\n",
  FUNC_1(VAR_6), FUNC_1(VAR_21));
 if (VAR_9 > 0) {
  FUNC_2("Macros:\n");
  for (VAR_29=0; VAR_29<VAR_9; VAR_29++) {
   FUNC_2("\t%s\n",VAR_10[VAR_29].mac_name);
  }
 }
 (void) FUNC_0(VAR_22);
 VAR_1 = 0;
}
