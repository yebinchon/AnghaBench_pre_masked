
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lastFTPCmdResultStr; int errNo; } ;
typedef TYPE_1__* FTPCIPtr ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const* const,...) ;
 int const VAR_0 ;
 int VAR_1 ;

void
FUNC_2(const FTPCIPtr VAR_2, const int VAR_3, const int VAR_4, const char *const VAR_5, const char *const VAR_6)
{
 if (VAR_3 != VAR_0) {
  if (VAR_3 == VAR_4) {
   if ((VAR_6 == ((void*)0)) || (VAR_6[0] == '\0')) {
    if ((VAR_5 == ((void*)0)) || (VAR_5[0] == '\0')) {
     (void) FUNC_1(VAR_1, "server said: %s\n", VAR_2->lastFTPCmdResultStr);
    } else {
     (void) FUNC_1(VAR_1, "%s: server said: %s\n", VAR_5, VAR_2->lastFTPCmdResultStr);
    }
   } else if ((VAR_5 == ((void*)0)) || (VAR_5[0] == '\0')) {
    (void) FUNC_1(VAR_1, "%s: server said: %s\n", VAR_6, VAR_2->lastFTPCmdResultStr);
   } else {
    (void) FUNC_1(VAR_1, "%s %s: server said: %s\n", VAR_5, VAR_6, VAR_2->lastFTPCmdResultStr);
   }
  } else {
   if ((VAR_6 == ((void*)0)) || (VAR_6[0] == '\0')) {
    if ((VAR_5 == ((void*)0)) || (VAR_5[0] == '\0')) {
     (void) FUNC_1(VAR_1, "%s.\n", FUNC_0(VAR_2->errNo));
    } else {
     (void) FUNC_1(VAR_1, "%s: %s.\n", VAR_5, FUNC_0(VAR_2->errNo));
    }
   } else if ((VAR_5 == ((void*)0)) || (VAR_5[0] == '\0')) {
    (void) FUNC_1(VAR_1, "%s: %s.\n", VAR_6, FUNC_0(VAR_2->errNo));
   } else {
    (void) FUNC_1(VAR_1, "%s %s: %s.\n", VAR_5, VAR_6, FUNC_0(VAR_2->errNo));
   }
  }
 }
}
