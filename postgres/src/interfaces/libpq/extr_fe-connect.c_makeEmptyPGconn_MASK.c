
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WSADATA ;
struct TYPE_6__ {int noticeProc; int noticeRec; } ;
struct TYPE_7__ {int options_valid; int nonblocking; int std_strings; int try_gss; int inBufSize; char* inBuffer; int outBufSize; char* outBuffer; int rowBufLen; int workBuffer; int errorMessage; int * rowBuf; int sock; int show_context; int verbosity; int client_encoding; int setenv_state; int xactStatus; int asyncStatus; int status; TYPE_1__ noticeHooks; } ;
typedef int PGdataValue ;
typedef TYPE_2__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static PGconn *
FUNC_9(void)
{
 PGconn *VAR_10;
 VAR_10 = (PGconn *) FUNC_8(sizeof(PGconn));
 if (VAR_10 == ((void*)0))
 {



  return VAR_10;
 }


 FUNC_1(VAR_10, 0, sizeof(PGconn));


 VAR_10->noticeHooks.noticeRec = VAR_9;
 VAR_10->noticeHooks.noticeProc = VAR_8;

 VAR_10->status = VAR_0;
 VAR_10->asyncStatus = VAR_1;
 VAR_10->xactStatus = VAR_6;
 VAR_10->options_valid = 0;
 VAR_10->nonblocking = 0;
 VAR_10->setenv_state = VAR_7;
 VAR_10->client_encoding = VAR_3;
 VAR_10->std_strings = 0;
 VAR_10->verbosity = VAR_4;
 VAR_10->show_context = VAR_5;
 VAR_10->sock = VAR_2;
 VAR_10->inBufSize = 16 * 1024;
 VAR_10->inBuffer = (char *) FUNC_8(VAR_10->inBufSize);
 VAR_10->outBufSize = 16 * 1024;
 VAR_10->outBuffer = (char *) FUNC_8(VAR_10->outBufSize);
 VAR_10->rowBufLen = 32;
 VAR_10->rowBuf = (PGdataValue *) FUNC_8(VAR_10->rowBufLen * sizeof(PGdataValue));
 FUNC_7(&VAR_10->errorMessage);
 FUNC_7(&VAR_10->workBuffer);

 if (VAR_10->inBuffer == ((void*)0) ||
  VAR_10->outBuffer == ((void*)0) ||
  VAR_10->rowBuf == ((void*)0) ||
  FUNC_2(&VAR_10->errorMessage) ||
  FUNC_2(&VAR_10->workBuffer))
 {

  FUNC_6(VAR_10);
  VAR_10 = ((void*)0);
 }

 return VAR_10;
}
