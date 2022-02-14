
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sock {scalar_t__ sk_rcvbuf; int (* sk_data_ready ) (struct sock*) ;int sk_rmem_alloc; struct sk_buff_head sk_receive_queue; } ;
struct sk_buff {int truesize; int destructor; struct sock* sk; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct sk_buff_head *VAR_6 = &VAR_4->sk_receive_queue;

 if (FUNC_1(&VAR_4->sk_rmem_alloc) >= VAR_4->sk_rcvbuf)
  return -VAR_1;

 if (!FUNC_3(VAR_4, VAR_5, VAR_5->truesize))
  return -VAR_0;

 VAR_5->dev = ((void*)0);

 FUNC_4(VAR_5);
 VAR_5->sk = VAR_4;
 VAR_5->destructor = VAR_3;
 FUNC_0(VAR_5->truesize, &VAR_4->sk_rmem_alloc);
 FUNC_2(VAR_4, VAR_5->truesize);

 FUNC_5(VAR_6, VAR_5);

 if (!FUNC_6(VAR_4, VAR_2))
  VAR_4->sk_data_ready(VAR_4);

 return 0;
}
