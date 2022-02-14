
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int len; } ;
struct rfcomm_dlc {struct sock* owner; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct rfcomm_dlc *VAR_0, struct sk_buff *VAR_1)
{
 struct sock *VAR_2 = VAR_0->owner;
 if (!VAR_2)
  return;

 FUNC_0(VAR_1->len, &VAR_2->sk_rmem_alloc);
 FUNC_3(&VAR_2->sk_receive_queue, VAR_1);
 VAR_2->sk_data_ready(VAR_2);

 if (FUNC_1(&VAR_2->sk_rmem_alloc) >= VAR_2->sk_rcvbuf)
  FUNC_2(VAR_0);
}
