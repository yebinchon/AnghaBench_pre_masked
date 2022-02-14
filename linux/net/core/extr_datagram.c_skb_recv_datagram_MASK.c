
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sock*,unsigned int,int *,int*,int*) ;

struct sk_buff *FUNC_1(struct sock *VAR_1, unsigned int VAR_2,
      int VAR_3, int *VAR_4)
{
 int VAR_5 = 0;

 return FUNC_0(VAR_1, VAR_2 | (VAR_3 ? VAR_0 : 0),
       ((void*)0), &VAR_5, VAR_4);
}
