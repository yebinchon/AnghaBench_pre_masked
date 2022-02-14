
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_buff*,int *,struct scatterlist*,int*,int*,int) ;

int FUNC_1(struct sock *VAR_0, struct sk_buff *VAR_1,
  struct scatterlist *VAR_2)
{
 bool VAR_3 = 1;
 int VAR_4;

 return FUNC_0(VAR_0, VAR_1, ((void*)0), VAR_2, &VAR_4, &VAR_3, 0);
}
