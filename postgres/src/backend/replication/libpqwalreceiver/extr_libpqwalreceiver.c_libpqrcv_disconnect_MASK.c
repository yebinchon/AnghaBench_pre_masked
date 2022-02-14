
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * recvBuf; int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(WalReceiverConn *VAR_0)
{
 FUNC_0(VAR_0->streamConn);
 if (VAR_0->recvBuf != ((void*)0))
  FUNC_1(VAR_0->recvBuf);
 FUNC_2(VAR_0);
}
