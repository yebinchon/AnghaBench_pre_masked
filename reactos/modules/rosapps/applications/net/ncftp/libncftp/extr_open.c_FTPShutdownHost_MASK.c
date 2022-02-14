
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dataSocket; int magic; } ;
typedef scalar_t__ FTPSigProc ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_1__* const) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__* const,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;

void
FUNC_6(const FTPCIPtr VAR_4)
{




 if (VAR_4 == ((void*)0))
  return;
 if (FUNC_5(VAR_4->magic, VAR_3))
  return;






 if (VAR_4->dataSocket != VAR_2)
  (void) FUNC_3(VAR_4, VAR_4->dataSocket, 0);
 FUNC_1(VAR_4);


 FUNC_0(VAR_4);

 FUNC_2(VAR_4);




}
