
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(&VAR_0->sk_write_queue, VAR_1);
}
