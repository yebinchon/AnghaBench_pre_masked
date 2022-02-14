
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;


typedef int cwd ;
struct TYPE_26__ {TYPE_1__* first; } ;
struct TYPE_25__ {scalar_t__ firewallType; char* magic; char* user; char* pass; int errNo; char* host; char* firewallUser; char* firewallPass; char* acct; int loggedIn; scalar_t__ doNotGetStartingWorkingDirectory; char curTransferType; scalar_t__ leavePass; int * startingWorkingDirectory; int (* onLoginMsgProc ) (TYPE_3__* const,TYPE_2__*) ;int (* passphraseProc ) (TYPE_3__* const,TYPE_7__*,char*,int) ;TYPE_17__* lip; } ;
struct TYPE_24__ {int code; TYPE_7__ msg; } ;
struct TYPE_23__ {int line; } ;
struct TYPE_22__ {char* defaultAnonPassword; } ;
typedef TYPE_2__* ResponsePtr ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_3__* const,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__* const,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_3__* const,char*,int) ;
 int FUNC_3 (TYPE_17__*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__* const,TYPE_7__*,char*,int) ;
 int FUNC_6 (TYPE_3__* const,char*,char*,char*) ;
 int FUNC_7 (TYPE_3__* const,TYPE_2__*,char*,char*,...) ;
 int FUNC_8 (TYPE_3__* const,TYPE_2__*) ;
 int FUNC_9 (char*,char*) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_12 (char*,char,int ) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_3__* const,TYPE_7__*,char*,int) ;
 int FUNC_16 (TYPE_3__* const,TYPE_2__*) ;

int
FUNC_17(const FTPCIPtr VAR_19)
{
 ResponsePtr VAR_20;
 int VAR_21 = VAR_6;
 int VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 int VAR_25;
 char VAR_26[512];

 if (VAR_19 == ((void*)0))
  return (VAR_2);
 if ((VAR_19->firewallType < VAR_11) || (VAR_19->firewallType > VAR_9))
  return (VAR_2);

 if (FUNC_13(VAR_19->magic, VAR_17))
  return (VAR_1);

 VAR_22 = 0;
 if (VAR_19->user[0] == '\0')
  (void) FUNC_9(VAR_19->user, "anonymous");
 if ((FUNC_13(VAR_19->user, "anonymous") == 0) || (FUNC_13(VAR_19->user, "ftp") == 0)) {
  VAR_22 = 1;



  if (VAR_19->pass[0] == '\0') {
   FUNC_3(VAR_19->lip);
   (void) FUNC_9(VAR_19->pass, VAR_19->lip->defaultAnonPassword);
  }
 }

 VAR_20 = FUNC_4();
 if (VAR_20 == ((void*)0)) {
  VAR_21 = VAR_7;
  VAR_19->errNo = VAR_7;
  goto done2;
 }

 for (VAR_25 = 1, VAR_24 = 0; ; ) {
  if (VAR_25 != 0) {
   VAR_20->code = 220;
   VAR_25 = 0;
  } else if (VAR_21 < 0) {
   goto done;
  }

  switch (VAR_20->code) {
   case 220:
    if ((VAR_19->firewallType == VAR_11) || (VAR_24 != 0)) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s", VAR_19->user);
    } else if (VAR_19->firewallType == VAR_14) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s@%s", VAR_19->user, VAR_19->host);
    } else if (VAR_19->firewallType == VAR_16) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s@%s@%s", VAR_19->user, VAR_19->firewallUser, VAR_19->host);
    } else if (VAR_19->firewallType == VAR_15) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s@%s %s", VAR_19->user, VAR_19->host, VAR_19->firewallUser);
    } else if (VAR_19->firewallType == VAR_8) {

     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s@%s", VAR_19->firewallUser, VAR_19->host);
    } else if (VAR_19->firewallType > VAR_11) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s", VAR_19->firewallUser);
    } else {
     goto unknown;
    }
    break;

   case 230:
   case 231:
   case 202:
    if ((VAR_19->firewallType == VAR_11) || (VAR_24 != 0))
     goto okay;


    VAR_24++;

    if (VAR_19->firewallType == VAR_10) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s@%s", VAR_19->user, VAR_19->host);
    } else if (VAR_19->firewallType == VAR_16) {
     goto okay;
    } else if (VAR_19->firewallType == VAR_12) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "OPEN %s", VAR_19->host);
    } else if (VAR_19->firewallType == VAR_13) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "SITE %s", VAR_19->host);
    } else if (VAR_19->firewallType == VAR_8) {

     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "USER %s", VAR_19->user);
    } else {
     goto okay;
    }
    break;

   case 421:
    VAR_21 = VAR_5;
    goto done;

   case 331:
    if ((VAR_19->firewallType == VAR_11) || (VAR_24 != 0)) {
     if ((VAR_19->pass[0] == '\0') && (VAR_19->passphraseProc != FUNC_5))
      (*VAR_19->passphraseProc)(VAR_19, &VAR_20->msg, VAR_19->pass, sizeof(VAR_19->pass));
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "PASS %s", VAR_19->pass);
    } else if (VAR_19->firewallType == VAR_14) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "PASS %s", VAR_19->pass);
    } else if (VAR_19->firewallType == VAR_16) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "PASS %s@%s", VAR_19->pass, VAR_19->firewallPass);
    } else if (VAR_19->firewallType == VAR_15) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "PASS %s", VAR_19->pass);
    } else if (VAR_19->firewallType == VAR_8) {

     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "PASS %s", VAR_19->firewallPass);
    } else if (VAR_19->firewallType > VAR_11) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "PASS %s", VAR_19->firewallPass);
    } else {
     goto unknown;
    }
    VAR_23++;
    break;

   case 332:
   case 532:
    if ((VAR_19->firewallType == VAR_11) || (VAR_24 != 0)) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "ACCT %s", VAR_19->acct);
    } else if (VAR_19->firewallType == VAR_15) {
     FUNC_8(VAR_19, VAR_20);
     VAR_21 = FUNC_7(VAR_19, VAR_20, "ACCT %s", VAR_19->firewallPass);
    } else {

     goto unknown;
    }
    break;

   case 530:
    VAR_21 = (VAR_23 != 0) ? VAR_4 : VAR_3;
    goto done;

   case 501:
   case 503:
   case 550:
    goto done;

   default:
   unknown:
    if (VAR_20->msg.first == ((void*)0)) {
     FUNC_1(VAR_19, VAR_0, "Lost connection during login.\n");
    } else {
     FUNC_1(VAR_19, VAR_0, "Unexpected response: %s\n",
      VAR_20->msg.first->line
     );
    }
    goto done;
  }
 }

okay:

 if (VAR_19->onLoginMsgProc != 0)
  (*VAR_19->onLoginMsgProc)(VAR_19, VAR_20);
 FUNC_0(VAR_19, VAR_20);
 VAR_21 = 0;
 VAR_19->loggedIn = 1;





 if (VAR_19->startingWorkingDirectory != ((void*)0)) {
  FUNC_11(VAR_19->startingWorkingDirectory);
  VAR_19->startingWorkingDirectory = ((void*)0);
 }
 if ((VAR_19->doNotGetStartingWorkingDirectory == 0) &&
  (FUNC_2(VAR_19, VAR_26, sizeof(VAR_26)) == VAR_18))
 {
  VAR_19->startingWorkingDirectory = FUNC_10(VAR_26);
 }


 VAR_19->curTransferType = 'A';
 FUNC_6(VAR_19, "Logged in to %s as %s.\n", VAR_19->host, VAR_19->user);


 if ((VAR_22 == 0) && (VAR_19->leavePass == 0))
  (void) FUNC_12(VAR_19->pass, '*', FUNC_14(VAR_19->pass));

 if (VAR_21 < 0)
  VAR_19->errNo = VAR_21;
 return VAR_21;

done:
 FUNC_0(VAR_19, VAR_20);

done2:

 if ((VAR_22 == 0) && (VAR_19->leavePass == 0))
  (void) FUNC_12(VAR_19->pass, '*', FUNC_14(VAR_19->pass));
 if (VAR_21 < 0)
  VAR_19->errNo = VAR_21;
 return VAR_21;
}
