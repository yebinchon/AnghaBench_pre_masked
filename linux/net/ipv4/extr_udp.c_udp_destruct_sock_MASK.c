
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_sock {int reader_queue; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {scalar_t__ truesize; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sock*,unsigned int,int ,int) ;
 struct udp_sock* FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_0)
{

 struct udp_sock *VAR_1 = FUNC_5(VAR_0);
 unsigned int VAR_2 = 0;
 struct sk_buff *VAR_3;

 FUNC_3(&VAR_0->sk_receive_queue, &VAR_1->reader_queue);
 while ((VAR_3 = FUNC_0(&VAR_1->reader_queue)) != ((void*)0)) {
  VAR_2 += VAR_3->truesize;
  FUNC_2(VAR_3);
 }
 FUNC_4(VAR_0, VAR_2, 0, 1);

 FUNC_1(VAR_0);
}
