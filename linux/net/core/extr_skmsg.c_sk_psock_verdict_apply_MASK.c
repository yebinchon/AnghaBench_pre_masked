
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct tcp_skb_cb {TYPE_1__ bpf; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_psock {int work; int ingress_skb; struct sock* sk; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcp_skb_cb* FUNC_0 (struct sk_buff*) ;



 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 struct sk_psock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sk_psock*,int ) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sock* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct sk_psock *VAR_3,
       struct sk_buff *VAR_4, int VAR_5)
{
 struct sk_psock *VAR_6;
 struct sock *VAR_7;
 bool VAR_8;

 switch (VAR_5) {
 case 129:
  VAR_7 = VAR_3->sk;
  if (FUNC_8(VAR_7, VAR_2) ||
      !FUNC_5(VAR_3, VAR_1)) {
   goto out_free;
  }
  if (FUNC_1(&VAR_7->sk_rmem_alloc) <=
      VAR_7->sk_rcvbuf) {
   struct tcp_skb_cb *VAR_9 = FUNC_0(VAR_4);

   VAR_9->bpf.flags |= VAR_0;
   FUNC_6(&VAR_3->ingress_skb, VAR_4);
   FUNC_3(&VAR_3->work);
   break;
  }
  goto out_free;
 case 128:
  VAR_7 = FUNC_11(VAR_4);
  if (FUNC_12(!VAR_7))
   goto out_free;
  VAR_6 = FUNC_4(VAR_7);
  if (!VAR_6 || FUNC_8(VAR_7, VAR_2) ||
      !FUNC_5(VAR_6, VAR_1))
   goto out_free;
  VAR_8 = FUNC_10(VAR_4);
  if ((!VAR_8 && FUNC_9(VAR_7)) ||
      (VAR_8 &&
       FUNC_1(&VAR_7->sk_rmem_alloc) <=
       VAR_7->sk_rcvbuf)) {
   if (!VAR_8)
    FUNC_7(VAR_4, VAR_7);
   FUNC_6(&VAR_6->ingress_skb, VAR_4);
   FUNC_3(&VAR_6->work);
   break;
  }

 case 130:

 default:
out_free:
  FUNC_2(VAR_4);
 }
}
