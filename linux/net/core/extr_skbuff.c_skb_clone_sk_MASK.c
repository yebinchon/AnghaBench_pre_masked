
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_refcnt; } ;
struct sk_buff {int destructor; struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct sock*) ;

struct sk_buff *FUNC_3(struct sk_buff *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sk;
 struct sk_buff *VAR_4;

 if (!VAR_3 || !FUNC_0(&VAR_3->sk_refcnt))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_4) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 VAR_4->sk = VAR_3;
 VAR_4->destructor = VAR_1;

 return VAR_4;
}
