
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dataSocket; scalar_t__ abortTimeout; int errNo; } ;
typedef int * ResponsePtr ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const,int *) ;
 int FUNC_2 (TYPE_1__* const,int ,char*) ;
 int FUNC_3 (TYPE_1__* const,char*) ;
 int FUNC_4 (TYPE_1__* const,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (TYPE_1__* const,char*) ;
 int FUNC_7 (TYPE_1__* const) ;
 int FUNC_8 (TYPE_1__* const,scalar_t__,int ) ;
 int FUNC_9 (TYPE_1__* const,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_10(const FTPCIPtr VAR_4)
{
 ResponsePtr VAR_5;
 int VAR_6;

 if (VAR_4->dataSocket != VAR_0) {
  FUNC_6(VAR_4, "Starting abort sequence.\n");
  FUNC_7(VAR_4);

  VAR_6 = FUNC_3(VAR_4, "ABOR");
  if (VAR_6 != VAR_3) {

   (void) FUNC_8(VAR_4, VAR_4->dataSocket, 0);
   FUNC_0(VAR_4);
   FUNC_6(VAR_4, "Could not send abort command.\n");
   return;
  }

  if (VAR_4->abortTimeout > 0) {
   VAR_6 = FUNC_9(VAR_4, (unsigned int) VAR_4->abortTimeout);
   if (VAR_6 <= 0) {

    (void) FUNC_8(VAR_4, VAR_4->dataSocket, 0);
    FUNC_0(VAR_4);
    FUNC_6(VAR_4, "No response received to abort request.\n");
    return;
   }
  }

  VAR_5 = FUNC_5();
  if (VAR_5 == ((void*)0)) {
   FUNC_2(VAR_4, VAR_1, "Malloc failed.\n");
   VAR_4->errNo = VAR_2;
   VAR_6 = VAR_4->errNo;
   return;
  }

  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6 < 0) {

   (void) FUNC_8(VAR_4, VAR_4->dataSocket, 0);
   FUNC_0(VAR_4);
   FUNC_6(VAR_4, "Invalid response to abort request.\n");
   FUNC_1(VAR_4, VAR_5);
   return;
  }
  FUNC_1(VAR_4, VAR_5);






  (void) FUNC_8(VAR_4, VAR_4->dataSocket, 0);
  FUNC_0(VAR_4);
  FUNC_6(VAR_4, "End abort.\n");
 }
}
