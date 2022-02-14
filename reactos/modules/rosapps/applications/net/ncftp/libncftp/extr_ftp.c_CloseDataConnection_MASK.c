
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dataSocket; scalar_t__ xferTimeout; int servDataAddr; int ourDataAddr; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int ,int) ;

void
FUNC_4(const FTPCIPtr VAR_1)
{
 if (VAR_1->dataSocket != VAR_0) {



  if (VAR_1->xferTimeout > 0)
   (void) FUNC_1(VAR_1->xferTimeout);
  (void) FUNC_2(VAR_1->dataSocket);
  if (VAR_1->xferTimeout > 0)
   (void) FUNC_1(0);

  VAR_1->dataSocket = VAR_0;
 }
 FUNC_3(&VAR_1->ourDataAddr, 0, sizeof(VAR_1->ourDataAddr));
 FUNC_3(&VAR_1->servDataAddr, 0, sizeof(VAR_1->servDataAddr));
}
