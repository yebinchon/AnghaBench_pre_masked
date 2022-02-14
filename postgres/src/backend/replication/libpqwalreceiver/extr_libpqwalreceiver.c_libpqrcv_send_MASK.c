
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(WalReceiverConn *VAR_1, const char *VAR_2, int VAR_3)
{
 if (FUNC_2(VAR_1->streamConn, VAR_2, VAR_3) <= 0 ||
  FUNC_1(VAR_1->streamConn))
  FUNC_3(VAR_0,
    (FUNC_4("could not send data to WAL stream: %s",
      FUNC_5(FUNC_0(VAR_1->streamConn)))));
}
