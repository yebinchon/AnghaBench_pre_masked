
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int peer_shutdown; } ;
struct vmci_transport_send_notify_data {scalar_t__ produce_tail; } ;
struct sock {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ produce_size; } ;


 int FUNC_0 (struct vsock_sock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,struct sock*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct vsock_sock*) ;
 scalar_t__ FUNC_3 (struct vsock_sock*) ;
 int FUNC_4 (struct sock*) ;
 struct vsock_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static int
FUNC_6(
    struct sock *VAR_4,
    ssize_t VAR_5,
    struct vmci_transport_send_notify_data *VAR_6)
{
 int VAR_7 = 0;
 struct vsock_sock *VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;

 VAR_8 = FUNC_5(VAR_4);
 if (FUNC_3(VAR_8)) {





  while (!(VAR_8->peer_shutdown & VAR_0) &&
         !VAR_9 &&
         VAR_10 < VAR_1) {
   VAR_7 = FUNC_4(VAR_4);
   if (VAR_7 >= 0)
    VAR_9 = 1;

   VAR_10++;
  }

  if (VAR_10 >= VAR_1) {
   FUNC_1("%p unable to send wrote notify to peer\n", VAR_4);
   return VAR_7;
  } else {



  }
 }
 return VAR_7;
}
