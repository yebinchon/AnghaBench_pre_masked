
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int tcp_rtx_queue; } ;
struct sk_buff {int dummy; } ;
struct rb_node {int dummy; } ;


 struct rb_node* FUNC_0 (int *) ;
 struct rb_node* FUNC_1 (struct rb_node*) ;
 struct sk_buff* FUNC_2 (struct rb_node*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct rb_node *VAR_1 = FUNC_0(&VAR_0->tcp_rtx_queue);

 while (VAR_1) {
  struct sk_buff *VAR_2 = FUNC_2(VAR_1);

  VAR_1 = FUNC_1(VAR_1);



  FUNC_4(VAR_2, VAR_0);
  FUNC_3(VAR_0, VAR_2);
 }
}
