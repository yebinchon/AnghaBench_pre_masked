
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t_pw {int pebuf; } ;
struct t_confent {int dummy; } ;
typedef int passphrase1 ;
typedef int passphrase ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 struct t_confent* FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (char*,int,char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct t_pw*,char*,char*,int *,struct t_confent*) ;

void FUNC_13(char *VAR_3)
{
 char VAR_4[128], VAR_5[128];
 FILE *VAR_6;
 struct t_confent *VAR_7;
 struct t_pw VAR_8;



 if (VAR_0 <= 0) {
  VAR_0 = FUNC_11();
 }
 VAR_7 = FUNC_5(VAR_0);
 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_2, "Invalid configuration file entry.\n");
  FUNC_1(1);
 }



 FUNC_7("Setting passphrase for %s\n", VAR_3);

 if (FUNC_10(VAR_4, sizeof(VAR_4), "Enter passphrase: ") < 0) {
  FUNC_1(1);
 }
 if (FUNC_10(VAR_5, sizeof(VAR_5), "Verify: ") < 0) {
  FUNC_1(1);
 }
 if (FUNC_8(VAR_4, VAR_5) != 0) {
  FUNC_4(VAR_2, "mismatch\n");
  FUNC_1(1);
 }



 FUNC_12(&VAR_8, VAR_3, VAR_4, ((void*)0), VAR_7);



 FUNC_6(VAR_4, 0, sizeof(VAR_4));
 FUNC_6(VAR_5, 0, sizeof(VAR_5));



 if ((VAR_6 = FUNC_3(VAR_1, "r+")) == ((void*)0)) {
  FUNC_0(VAR_1, 0400);
 } else {
  FUNC_2(VAR_6);
 }



 if (FUNC_9(VAR_1, &VAR_8.pebuf) < 0) {
  FUNC_4(VAR_2, "Error changing passphrase\n");
  FUNC_1(1);
 }
}
