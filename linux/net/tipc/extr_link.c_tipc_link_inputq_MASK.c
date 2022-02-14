
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {struct sk_buff_head* inputq; } ;
struct sk_buff_head {int dummy; } ;



struct sk_buff_head *FUNC_0(struct tipc_link *VAR_0)
{
 return VAR_0->inputq;
}
