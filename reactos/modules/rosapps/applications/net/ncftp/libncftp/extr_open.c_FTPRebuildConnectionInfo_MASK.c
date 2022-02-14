
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int errNo; void* ctrlSocketW; void* ctrlSocketR; int * cin; scalar_t__ ctrlTimeout; int srlBuf; int ctrlSrl; int * cout; int bufSize; int lastFTPCmdResultLL; int * asciiFilenameExtensions; int * startingWorkingDirectory; int * passphraseProc; int * onLoginMsgProc; int * printResponseProc; int * redialStatusProc; int * onConnectMsgProc; int * lname; int * rname; int * progress; int * errLogProc; int * debugLogProc; int * errLog; int * debugLog; int lip; } ;
typedef int LineList ;
typedef int FTPLIPtr ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int *,void*,int ,int,int,int) ;
 void* FUNC_2 (void*,char*) ;
 scalar_t__ FUNC_3 (size_t,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int) ;

int
FUNC_5(const FTPLIPtr VAR_5, const FTPCIPtr VAR_6)
{
 char *VAR_7;

 VAR_6->lip = VAR_5;
 VAR_6->debugLog = ((void*)0);
 VAR_6->errLog = ((void*)0);
 VAR_6->debugLogProc = ((void*)0);
 VAR_6->errLogProc = ((void*)0);
 VAR_6->buf = ((void*)0);
 VAR_6->cin = ((void*)0);
 VAR_6->cout = ((void*)0);
 VAR_6->errNo = 0;
 VAR_6->progress = ((void*)0);
 VAR_6->rname = ((void*)0);
 VAR_6->lname = ((void*)0);
 VAR_6->onConnectMsgProc = ((void*)0);
 VAR_6->redialStatusProc = ((void*)0);
 VAR_6->printResponseProc = ((void*)0);
 VAR_6->onLoginMsgProc = ((void*)0);
 VAR_6->passphraseProc = ((void*)0);
 VAR_6->startingWorkingDirectory = ((void*)0);
 VAR_6->asciiFilenameExtensions = ((void*)0);

 (void) FUNC_4(&VAR_6->lastFTPCmdResultLL, 0, sizeof(LineList));


 VAR_7 = (char *) FUNC_3((size_t) 1, VAR_6->bufSize);
 if (VAR_7 == ((void*)0)) {
  VAR_6->errNo = VAR_3;
  return (VAR_3);
 }
 VAR_6->buf = VAR_7;




 if ((VAR_6->cin = FUNC_2(VAR_6->ctrlSocketR, "r")) == ((void*)0)) {
  VAR_6->errNo = VAR_1;
  VAR_6->ctrlSocketR = VAR_0;
  VAR_6->ctrlSocketW = VAR_0;
  return (VAR_1);
 }

 if ((VAR_6->cout = FUNC_2(VAR_6->ctrlSocketW, "w")) == ((void*)0)) {
  FUNC_0(&VAR_6->cin);
  VAR_6->errNo = VAR_2;
  VAR_6->ctrlSocketR = VAR_0;
  VAR_6->ctrlSocketW = VAR_0;
  return (VAR_2);
 }
 return (VAR_4);
}
