
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sock*,int *,struct sk_buff*,unsigned int,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, &VAR_0->sk_receive_queue, VAR_1, VAR_2,
          ((void*)0));

 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
 return VAR_3;
}
