
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ dataSocket; scalar_t__ connected; int errNo; int eofOkay; int magic; } ;
struct TYPE_12__ {int eofOkay; } ;
typedef TYPE_1__* ResponsePtr ;
typedef TYPE_2__* FTPCIPtr ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__* const) ;
 int FUNC_3 (TYPE_2__* const) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__* const,TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ) ;

int
FUNC_7(const FTPCIPtr VAR_6)
{
 ResponsePtr VAR_7;
 int VAR_8;

 if (VAR_6 == ((void*)0))
  return (VAR_2);
 if (FUNC_6(VAR_6->magic, VAR_4))
  return (VAR_1);


 if (VAR_6->dataSocket != VAR_0)
  FUNC_2(VAR_6);

 VAR_8 = VAR_5;
 if (VAR_6->connected != 0) {
  VAR_7 = FUNC_4();
  if (VAR_7 == ((void*)0)) {
   VAR_6->errNo = VAR_3;
   VAR_8 = VAR_6->errNo;
  } else {
   VAR_7->eofOkay = 1;
   VAR_6->eofOkay = 1;
   (void) FUNC_5(VAR_6, VAR_7, "QUIT");
   FUNC_1(VAR_6, VAR_7);
  }
 }

 FUNC_0(VAR_6);




 FUNC_3(VAR_6);
 return (VAR_8);
}
