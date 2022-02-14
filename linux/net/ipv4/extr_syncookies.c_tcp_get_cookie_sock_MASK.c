
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int rsk_refcnt; } ;
struct inet_connection_sock {TYPE_1__* icsk_af_ops; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {int tsoffset; } ;
struct TYPE_3__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*,int *,int*) ;} ;


 int FUNC_0 (struct request_sock*) ;
 int FUNC_1 (struct sock*) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_7 (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*,int *,int*) ;
 TYPE_2__* FUNC_8 (struct sock*) ;

struct sock *FUNC_9(struct sock *VAR_0, struct sk_buff *VAR_1,
     struct request_sock *VAR_2,
     struct dst_entry *VAR_3, u32 VAR_4)
{
 struct inet_connection_sock *VAR_5 = FUNC_2(VAR_0);
 struct sock *VAR_6;
 bool VAR_7;

 VAR_6 = VAR_5->icsk_af_ops->syn_recv_sock(VAR_0, VAR_1, VAR_2, VAR_3,
       ((void*)0), &VAR_7);
 if (VAR_6) {
  FUNC_4(&VAR_2->rsk_refcnt, 1);
  FUNC_8(VAR_6)->tsoffset = VAR_4;
  FUNC_6(VAR_6, VAR_1);
  if (FUNC_3(VAR_0, VAR_2, VAR_6))
   return VAR_6;

  FUNC_1(VAR_6);
  FUNC_5(VAR_6);
 }
 FUNC_0(VAR_2);

 return ((void*)0);
}
