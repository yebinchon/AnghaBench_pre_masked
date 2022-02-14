
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* host; char* mailbox; struct TYPE_3__* next; } ;
typedef int FILE ;
typedef TYPE_1__ ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int*,char**,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (char*,int ,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*,...) ;
 int * FUNC_9 (int ,char*) ;
 int FUNC_10 (TYPE_1__**,char*,char*) ;
 scalar_t__ FUNC_11 (size_t,int,int) ;
 char* FUNC_12 (char*,size_t,int,size_t) ;
 scalar_t__ FUNC_13 (char*,size_t,char*,char*,char*) ;
 scalar_t__ FUNC_14 (char*,int ) ;
 int FUNC_15 (char*,char*,size_t) ;
 size_t FUNC_16 (char*) ;

int FUNC_17(char *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9, char *VAR_10, char* VAR_11)
{



 FILE *VAR_12;
 int VAR_13;
 if (!FUNC_1("sendmail_path")) {
  return 0;
 }
 VAR_12 = FUNC_9(FUNC_1("sendmail_path"), "w");
 if (VAR_12) {
  if (VAR_11 && VAR_11[0]) FUNC_5(VAR_12, "From: %s\n", VAR_11);
  FUNC_5(VAR_12, "To: %s\n", VAR_5);
  if (VAR_9 && VAR_9[0]) FUNC_5(VAR_12, "Cc: %s\n", VAR_9);
  if (VAR_10 && VAR_10[0]) FUNC_5(VAR_12, "Bcc: %s\n", VAR_10);
  FUNC_5(VAR_12, "Subject: %s\n", VAR_6);
  if (VAR_8 != ((void*)0)) {
   FUNC_5(VAR_12, "%s\n", VAR_8);
  }
  FUNC_5(VAR_12, "\n%s\n", VAR_7);
  VAR_13 = FUNC_7(VAR_12);

  return VAR_13 != -1;
 } else {
  FUNC_8(((void*)0), VAR_1, "Could not execute mail delivery program");
  return 0;
 }

 return 1;
}
