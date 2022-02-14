
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_refcnt; } ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {struct sock* sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct sock*,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct skb_shared_hwtstamps* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*,int) ;
 int FUNC_6 (struct sock*) ;

void FUNC_7(struct sk_buff *VAR_1,
          struct skb_shared_hwtstamps *VAR_2)
{
 struct sock *VAR_3 = VAR_1->sk;

 if (!FUNC_5(VAR_3, 0))
  goto err;




 if (FUNC_2(FUNC_3(&VAR_3->sk_refcnt))) {
  *FUNC_4(VAR_1) = *VAR_2;
  FUNC_0(VAR_1, VAR_3, VAR_0, 0);
  FUNC_6(VAR_3);
  return;
 }

err:
 FUNC_1(VAR_1);
}
