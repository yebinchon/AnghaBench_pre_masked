
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int curTransferType; int errNo; int magic; } ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,int ,char*,int) ;
 int FUNC_1 (TYPE_1__* const,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_2 (int ,int ) ;

int
FUNC_3(const FTPCIPtr VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_7 == ((void*)0))
  return (VAR_2);
 if (FUNC_2(VAR_7->magic, VAR_5))
  return (VAR_1);

 if (VAR_7->curTransferType != VAR_8) {
  switch (VAR_8) {
   case 130:
   case 129:
   case 128:
    break;
   case 'i':
   case 'b':
   case 'B':
    VAR_8 = 129;
    break;
   case 'e':
    VAR_8 = 128;
    break;
   case 'a':
    VAR_8 = 130;
    break;
   default:

    FUNC_0(VAR_7, VAR_0, "Bad transfer type [%c].\n", VAR_8);
    VAR_7->errNo = VAR_3;
    return (VAR_3);
  }
  VAR_9 = FUNC_1(VAR_7, "TYPE %c", VAR_8);
  if (VAR_9 != 2) {
   VAR_9 = VAR_4;
   VAR_7->errNo = VAR_4;
   return (VAR_9);
  }
  VAR_7->curTransferType = VAR_8;
 }
 return (VAR_6);
}
