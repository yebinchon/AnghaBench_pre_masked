
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct msghdr {int msg_iter; } ;


 int FUNC_0 (int ,struct sk_buff*,int *,int) ;

int FUNC_1(struct sk_buff *VAR_0, struct msghdr *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0->sk, VAR_0, &VAR_1->msg_iter, VAR_2);
}
