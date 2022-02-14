
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;
typedef scalar_t__ TimeLineID ;
typedef int PGresult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,...) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(WalReceiverConn *VAR_4, TimeLineID *VAR_5)
{
 PGresult *VAR_6;





 if (FUNC_7(VAR_4->streamConn, ((void*)0)) <= 0 ||
  FUNC_3(VAR_4->streamConn))
  FUNC_9(VAR_0,
    (FUNC_10("could not send end-of-streaming message to primary: %s",
      FUNC_12(FUNC_2(VAR_4->streamConn)))));

 *VAR_5 = 0;
 VAR_6 = FUNC_11(VAR_4->streamConn);
 if (FUNC_8(VAR_6) == VAR_3)
 {




  if (FUNC_5(VAR_6) < 2 || FUNC_6(VAR_6) != 1)
   FUNC_9(VAR_0,
     (FUNC_10("unexpected result set after end-of-streaming")));
  *VAR_5 = FUNC_13(FUNC_4(VAR_6, 0, 0));
  FUNC_0(VAR_6);


  VAR_6 = FUNC_11(VAR_4->streamConn);
 }
 else if (FUNC_8(VAR_6) == VAR_2)
 {
  FUNC_0(VAR_6);


  if (FUNC_1(VAR_4->streamConn))
   FUNC_9(VAR_0,
     (FUNC_10("error while shutting down streaming COPY: %s",
       FUNC_12(FUNC_2(VAR_4->streamConn)))));


  VAR_6 = FUNC_11(VAR_4->streamConn);
 }

 if (FUNC_8(VAR_6) != VAR_1)
  FUNC_9(VAR_0,
    (FUNC_10("error reading result of streaming command: %s",
      FUNC_12(FUNC_2(VAR_4->streamConn)))));
 FUNC_0(VAR_6);


 VAR_6 = FUNC_11(VAR_4->streamConn);
 if (VAR_6 != ((void*)0))
  FUNC_9(VAR_0,
    (FUNC_10("unexpected result after CommandComplete: %s",
      FUNC_12(FUNC_2(VAR_4->streamConn)))));
}
