
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* host; int leavePass; int maxDials; int redialDelay; char* asciiFilenameExtensions; int dataSocketSBufSize; int dataSocketRBufSize; int dataPortMode; int ctrlTimeout; int xferTimeout; int connTimeout; int * progress; int user; int errLog; int * debugLog; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int,char*) ;
 char* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void
FUNC_8(void)
{
 int VAR_17;

 VAR_17 = FUNC_0(&VAR_6, &VAR_1, VAR_14);
 if (VAR_17 < 0) {
  (void) FUNC_7(VAR_16, "ncftp: init connection info error %d (%s).\n", VAR_17, FUNC_1(VAR_17));
  FUNC_6(1);
 }

 VAR_1.debugLog = ((void*)0);
 VAR_1.errLog = VAR_16;
 FUNC_4(VAR_5);
 FUNC_5();
 (void) FUNC_3(VAR_1.user, "anonymous");
 VAR_1.host[0] = '\0';
 VAR_1.progress = ((void*)0);
 VAR_11 = 0;
 VAR_10 = VAR_15;
 VAR_1.leavePass = 1;
 VAR_1.connTimeout = VAR_2;
 VAR_1.xferTimeout = VAR_13;
 VAR_1.ctrlTimeout = VAR_3;
 VAR_1.dataPortMode = VAR_4;
 VAR_1.maxDials = (-1);
 VAR_12 = 0;
 VAR_7[0] = '\0';
 VAR_1.dataSocketRBufSize = VAR_1.dataSocketSBufSize = VAR_9;
 if (VAR_8 >= 10)
  VAR_1.redialDelay = VAR_8;
 if ((VAR_0[0] == '\0') || (FUNC_2(VAR_0, "no")) || (FUNC_2(VAR_0, "off")) || (FUNC_2(VAR_0, "false"))) {
  VAR_1.asciiFilenameExtensions = ((void*)0);
 } else {
  VAR_1.asciiFilenameExtensions = VAR_0;
 }
}
