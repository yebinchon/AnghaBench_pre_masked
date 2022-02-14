
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_peek_off; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct sock*,int) ;

void FUNC_9(struct sock *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 if (FUNC_7(FUNC_0(VAR_0->sk_peek_off) >= 0)) {
  bool VAR_3 = FUNC_2(VAR_0);

  FUNC_3(VAR_0, VAR_2);
  FUNC_8(VAR_0, VAR_3);
 }

 if (!FUNC_5(VAR_1))
  return;




 if (FUNC_7(FUNC_6(VAR_1)))
  FUNC_4(VAR_1);
 FUNC_1(VAR_1);
}
