
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;
typedef int TimeLineID ;
typedef int PGresult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,int,int,int) ;
 int FUNC_8 (char*,...) ;
 int * FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static char *
FUNC_13(WalReceiverConn *VAR_2, TimeLineID *VAR_3)
{
 PGresult *VAR_4;
 char *VAR_5;





 VAR_4 = FUNC_9(VAR_2->streamConn, "IDENTIFY_SYSTEM");
 if (FUNC_5(VAR_4) != VAR_1)
 {
  FUNC_0(VAR_4);
  FUNC_6(VAR_0,
    (FUNC_8("could not receive database system identifier and timeline ID from "
      "the primary server: %s",
      FUNC_10(FUNC_1(VAR_2->streamConn)))));
 }
 if (FUNC_3(VAR_4) < 3 || FUNC_4(VAR_4) != 1)
 {
  int VAR_6 = FUNC_4(VAR_4);
  int VAR_7 = FUNC_3(VAR_4);

  FUNC_0(VAR_4);
  FUNC_6(VAR_0,
    (FUNC_8("invalid response from primary server"),
     FUNC_7("Could not identify system: got %d rows and %d fields, expected %d rows and %d or more fields.",
         VAR_6, VAR_7, 3, 1)));
 }
 VAR_5 = FUNC_12(FUNC_2(VAR_4, 0, 0));
 *VAR_3 = FUNC_11(FUNC_2(VAR_4, 0, 1));
 FUNC_0(VAR_4);

 return VAR_5;
}
