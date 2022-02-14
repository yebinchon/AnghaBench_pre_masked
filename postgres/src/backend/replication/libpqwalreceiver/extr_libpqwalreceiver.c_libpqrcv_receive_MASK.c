
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pgsocket ;
struct TYPE_3__ {char* recvBuf; int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;
typedef int PGresult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char**,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(WalReceiverConn *VAR_4, char **VAR_5,
     pgsocket *VAR_6)
{
 int VAR_7;

 if (VAR_4->recvBuf != ((void*)0))
  FUNC_3(VAR_4->recvBuf);
 VAR_4->recvBuf = ((void*)0);


 VAR_7 = FUNC_4(VAR_4->streamConn, &VAR_4->recvBuf, 1);
 if (VAR_7 == 0)
 {

  if (FUNC_1(VAR_4->streamConn) == 0)
   FUNC_8(VAR_1,
     (FUNC_9("could not receive data from WAL stream: %s",
       FUNC_11(FUNC_2(VAR_4->streamConn)))));


  VAR_7 = FUNC_4(VAR_4->streamConn, &VAR_4->recvBuf, 1);
  if (VAR_7 == 0)
  {

   *VAR_6 = FUNC_6(VAR_4->streamConn);
   return 0;
  }
 }
 if (VAR_7 == -1)
 {
  PGresult *VAR_8;

  VAR_8 = FUNC_10(VAR_4->streamConn);
  if (FUNC_5(VAR_8) == VAR_2)
  {
   FUNC_0(VAR_8);


   VAR_8 = FUNC_10(VAR_4->streamConn);
   if (VAR_8 != ((void*)0))
   {
    FUNC_0(VAR_8);






    if (FUNC_7(VAR_4->streamConn) == VAR_0)
     return -1;

    FUNC_8(VAR_1,
      (FUNC_9("unexpected result after CommandComplete: %s",
        FUNC_2(VAR_4->streamConn))));
   }

   return -1;
  }
  else if (FUNC_5(VAR_8) == VAR_3)
  {
   FUNC_0(VAR_8);
   return -1;
  }
  else
  {
   FUNC_0(VAR_8);
   FUNC_8(VAR_1,
     (FUNC_9("could not receive data from WAL stream: %s",
       FUNC_11(FUNC_2(VAR_4->streamConn)))));
  }
 }
 if (VAR_7 < -1)
  FUNC_8(VAR_1,
    (FUNC_9("could not receive data from WAL stream: %s",
      FUNC_11(FUNC_2(VAR_4->streamConn)))));


 *VAR_5 = VAR_4->recvBuf;
 return VAR_7;
}
