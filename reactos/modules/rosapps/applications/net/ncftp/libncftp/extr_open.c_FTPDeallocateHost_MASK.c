
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lastFTPCmdResultLL; int ctrlSrl; int * startingWorkingDirectory; int * buf; int bufSize; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(const FTPCIPtr VAR_0)
{




 if (VAR_0->buf != ((void*)0)) {
  (void) FUNC_3(VAR_0->buf, 0, VAR_0->bufSize);
  FUNC_2(VAR_0->buf);
  VAR_0->buf = ((void*)0);
 }

 if (VAR_0->startingWorkingDirectory != ((void*)0)) {
  FUNC_2(VAR_0->startingWorkingDirectory);
  VAR_0->startingWorkingDirectory = ((void*)0);
 }




 FUNC_0(&VAR_0->lastFTPCmdResultLL);
}
