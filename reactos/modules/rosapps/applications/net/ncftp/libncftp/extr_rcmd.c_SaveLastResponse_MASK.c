
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* first; } ;
struct TYPE_9__ {char* lastFTPCmdResultStr; int lastFTPCmdResultNum; TYPE_6__ lastFTPCmdResultLL; } ;
struct TYPE_8__ {int code; TYPE_6__ msg; } ;
struct TYPE_7__ {int * line; } ;
typedef TYPE_2__* ResponsePtr ;
typedef TYPE_3__* FTPCIPtr ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void
FUNC_2(const FTPCIPtr VAR_0, ResponsePtr VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  VAR_0->lastFTPCmdResultStr[0] = '\0';
  VAR_0->lastFTPCmdResultNum = -1;
  FUNC_0(&VAR_0->lastFTPCmdResultLL);
 } else if ((VAR_1->msg.first == ((void*)0)) || (VAR_1->msg.first->line == ((void*)0))) {
  VAR_0->lastFTPCmdResultStr[0] = '\0';
  VAR_0->lastFTPCmdResultNum = VAR_1->code;
  FUNC_0(&VAR_0->lastFTPCmdResultLL);
 } else {
  (void) FUNC_1(VAR_0->lastFTPCmdResultStr, VAR_1->msg.first->line);
  VAR_0->lastFTPCmdResultNum = VAR_1->code;


  FUNC_0(&VAR_0->lastFTPCmdResultLL);


  VAR_0->lastFTPCmdResultLL = VAR_1->msg;
 }
}
