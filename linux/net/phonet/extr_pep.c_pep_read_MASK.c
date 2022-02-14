
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,int ) ;
 struct sk_buff* FUNC_1 (int *) ;

struct sk_buff *FUNC_2(struct sock *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_1(&VAR_2->sk_receive_queue);

 if (VAR_2->sk_state == VAR_1)
  FUNC_0(VAR_2, VAR_0);
 return VAR_3;
}
