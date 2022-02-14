
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_filter {int refcnt; } ;


 int FUNC_0 (struct sock*,struct sk_filter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_filter*) ;

bool FUNC_3(struct sock *VAR_0, struct sk_filter *VAR_1)
{
 if (!FUNC_1(&VAR_1->refcnt))
  return 0;

 if (!FUNC_0(VAR_0, VAR_1)) {
  FUNC_2(VAR_1);
  return 0;
 }
 return 1;
}
