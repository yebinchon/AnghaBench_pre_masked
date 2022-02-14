
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int peer_shutdown; } ;
struct vmci_transport_send_notify_data {int dummy; } ;
struct sock {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int qpair; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct sock*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct vsock_sock*) ;
 int FUNC_4 (struct sock*) ;
 struct vsock_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static int
FUNC_6(
    struct sock *VAR_2,
    ssize_t VAR_3,
    struct vmci_transport_send_notify_data *VAR_4)
{
 int VAR_5 = 0;
 struct vsock_sock *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8;
 int VAR_9 = 0;

 VAR_6 = FUNC_5(VAR_2);

 FUNC_1();

 VAR_8 =
  FUNC_2(FUNC_3(VAR_6)->qpair) == VAR_3;
 if (VAR_8) {
  while (!(VAR_6->peer_shutdown & VAR_0) &&
         !VAR_7 &&
         VAR_9 < VAR_1) {
   VAR_5 = FUNC_4(VAR_2);
   if (VAR_5 >= 0)
    VAR_7 = 1;

   VAR_9++;
  }
 }

 if (VAR_9 >= VAR_1 && !VAR_7) {
  FUNC_0("%p unable to send wrote notification to peer\n",
         VAR_2);
  return VAR_5;
 }

 return VAR_5;
}
