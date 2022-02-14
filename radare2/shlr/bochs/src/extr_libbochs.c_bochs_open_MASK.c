
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct _SECURITY_ATTRIBUTES {int nLength; int bInheritHandle; scalar_t__ lpSecurityDescriptor; } ;
struct TYPE_10__ {int cb; int hStdError; int hStdOutput; int hStdInput; int hProcess; int dwFlags; } ;
struct TYPE_9__ {int hReadPipeIn; int hReadPipeOut; int hWritePipeIn; int hWritePipeOut; int isRunning; int pid; TYPE_2__ processInfo; TYPE_2__ info; void* data; } ;
typedef TYPE_1__ libbochs_t ;
typedef int commandline ;
typedef int STARTUPINFOA ;
typedef int PROCESS_INFORMATION ;
typedef int LPTSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int*,struct _SECURITY_ATTRIBUTES*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int ,int ,int *,int *,TYPE_2__*,TYPE_2__*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char const*,char*,char*,char const*,int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 void* VAR_10 ;
 int FUNC_14 (char*,...) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int ,int) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int,void*,int) ;
 int FUNC_21 (char*,int,char*,char const*,char const*) ;

bool FUNC_22(libbochs_t* VAR_11, const char * VAR_12, const char * VAR_13) {
 bool VAR_14 = 0;

 VAR_11->data = FUNC_15 (VAR_4);
 if (!VAR_11->data) {
  return 0;
 }
 VAR_10 = FUNC_15 (VAR_4);
 if (!VAR_10) {
  FUNC_2 (VAR_11->data);
  return 0;
 }
 int VAR_15[2];
 int VAR_16[2];
 int VAR_17;

 if (FUNC_18 (VAR_15) < 0) {
  FUNC_9 ("Error: allocating pipe for child input redirect");
  return 0;
 }
 if (FUNC_18(VAR_16) < 0) {
  FUNC_7 (VAR_15[0]);
  FUNC_7 (VAR_15[1]);
  FUNC_9 ("Error: allocating pipe for child output redirect");
  return 0;
 }

 VAR_17 = FUNC_12 ();
 if (0 == VAR_17) {

  if (FUNC_8 (VAR_15[0], VAR_7) == -1) {
   FUNC_9 ("Error: redirecting stdin");
   return 0;
  }


  if (FUNC_8 (VAR_16[1], VAR_8) == -1) {
   FUNC_9 ("Error: redirecting stdout");
   return 0;
  }


  if (FUNC_8 (VAR_16[1], VAR_6) == -1) {
   FUNC_9 ("Error: redirecting stderr");
   return 0;
  }

  FUNC_7 (VAR_15[0]);
  FUNC_7 (VAR_15[1]);
  FUNC_7 (VAR_16[0]);
  FUNC_7 (VAR_16[1]);
  (void) FUNC_10 (VAR_12, VAR_12, "-q", "-f", VAR_13, ((void*)0));
  FUNC_17 ("execl");
  FUNC_11 (1);
 } else if (VAR_17 > 0) {
  FUNC_7 (VAR_15[0]);
  FUNC_7 (VAR_16[1]);

  if (FUNC_20 (VAR_16[0], VAR_10, 1) != 1) {
   FUNC_9 ("boch_open failed");
   FUNC_4 (VAR_11);
  } else {
   VAR_11->hReadPipeIn = VAR_16[0];
   VAR_11->hWritePipeOut = VAR_15[1];
   VAR_11->isRunning = 1;
   FUNC_5 (VAR_11);
   FUNC_9 ("Waiting for bochs...\n");
   if (FUNC_6 (VAR_11)) {
    FUNC_9 ("Ready.\n");
    VAR_11->pid = VAR_17;
    VAR_14 = 1;
   } else {
    FUNC_4 (VAR_11);
   }
  }
 } else {
  FUNC_17 ("pipe");

  FUNC_7 (VAR_15[0]);
  FUNC_7 (VAR_15[1]);
  FUNC_7 (VAR_16[0]);
  FUNC_7 (VAR_16[1]);
 }

 return VAR_14;
}
