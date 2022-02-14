
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
typedef char* longstring ;
typedef int command ;
struct TYPE_5__ {scalar_t__ ctrlSocketW; scalar_t__ firewallType; char* lastFTPCmdResultStr; int lastFTPCmdResultNum; int errNo; scalar_t__ ctrlTimeout; int user; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int ,char*) ;
 int FUNC_1 (TYPE_1__* const,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__,char*,int ,int,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,int,char const*,int ) ;
 int FUNC_9 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_10(const FTPCIPtr VAR_6, const char *VAR_7, va_list VAR_8)
{
 longstring VAR_9;
 int VAR_10;

 if (VAR_6->ctrlSocketW != VAR_0) {




  (void) FUNC_9(VAR_9, VAR_7, VAR_8);

  if ((FUNC_7(VAR_9, "PASS", FUNC_4(4)) != 0) || ((FUNC_5(VAR_6->user, "anonymous") == 0) && (VAR_6->firewallType == VAR_4)))
   FUNC_1(VAR_6, "Cmd: %s\n", VAR_9);
  else
   FUNC_1(VAR_6, "Cmd: %s\n", "PASS xxxxxxxx");
  (void) FUNC_2(VAR_9, "\r\n");
  VAR_6->lastFTPCmdResultStr[0] = '\0';
  VAR_6->lastFTPCmdResultNum = -1;

  VAR_10 = FUNC_3(VAR_6->ctrlSocketW, VAR_9, FUNC_6(VAR_9), (int) VAR_6->ctrlTimeout, 0);

  if (VAR_10 < 0) {
   VAR_6->errNo = VAR_3;
   FUNC_0(VAR_6, VAR_1, "Could not write to control stream.\n");
   return (VAR_6->errNo);
  }
  return (VAR_5);
 }
 return (VAR_2);
}
