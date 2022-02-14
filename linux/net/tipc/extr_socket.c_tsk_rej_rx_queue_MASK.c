
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->sk_receive_queue)))
  FUNC_1(VAR_1, VAR_2, VAR_0);
}
