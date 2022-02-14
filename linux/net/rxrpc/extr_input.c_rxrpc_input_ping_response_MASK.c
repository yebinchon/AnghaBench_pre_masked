
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {scalar_t__ acks_lost_ping; int flags; int ping_serial; int ping_time; } ;
typedef scalar_t__ rxrpc_serial_t ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rxrpc_call*) ;
 int FUNC_4 (struct rxrpc_call*,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct rxrpc_call *VAR_2,
          ktime_t VAR_3,
          rxrpc_serial_t VAR_4,
          rxrpc_serial_t VAR_5)
{
 rxrpc_serial_t VAR_6;
 ktime_t VAR_7;

 VAR_7 = VAR_2->ping_time;
 FUNC_5();
 VAR_6 = FUNC_0(VAR_2->ping_serial);

 if (VAR_4 == VAR_2->acks_lost_ping)
  FUNC_3(VAR_2);

 if (FUNC_2(VAR_4, VAR_6) ||
     !FUNC_6(VAR_0, &VAR_2->flags))
  return;
 if (FUNC_1(VAR_4, VAR_6))
  return;

 FUNC_4(VAR_2, VAR_1,
      VAR_4, VAR_5, VAR_7, VAR_3);
}
