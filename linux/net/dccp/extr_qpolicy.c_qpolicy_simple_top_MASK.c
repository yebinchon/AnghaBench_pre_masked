
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct sock *VAR_0)
{
 return FUNC_0(&VAR_0->sk_write_queue);
}
