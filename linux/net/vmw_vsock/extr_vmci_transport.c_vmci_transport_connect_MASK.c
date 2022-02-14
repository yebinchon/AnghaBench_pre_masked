
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {void* sk_state; } ;
struct vsock_sock {int sent_request; struct sock sk; } ;
struct TYPE_2__ {int queue_pair_size; } ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (struct vsock_sock*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct vsock_sock *VAR_1)
{
 int VAR_2;
 bool VAR_3 = 0;
 struct sock *VAR_4 = &VAR_1->sk;

 if (FUNC_2(&VAR_3) &&
  VAR_3) {
  VAR_2 = FUNC_3(
   VAR_4, FUNC_0(VAR_1)->queue_pair_size);
  if (VAR_2 < 0) {
   VAR_4->sk_state = VAR_0;
   return VAR_2;
  }
 } else {
  int VAR_5 =
   FUNC_1();
  VAR_2 = FUNC_4(
    VAR_4, FUNC_0(VAR_1)->queue_pair_size,
    VAR_5);
  if (VAR_2 < 0) {
   VAR_4->sk_state = VAR_0;
   return VAR_2;
  }

  VAR_1->sent_request = 1;
 }

 return VAR_2;
}
