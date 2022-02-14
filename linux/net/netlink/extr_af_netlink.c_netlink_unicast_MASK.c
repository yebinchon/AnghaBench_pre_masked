
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;


 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,long*,struct sock*) ;
 struct sock* FUNC_5 (struct sock*,int ) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct sock*) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*) ;
 long FUNC_12 (struct sock*,int) ;

int FUNC_13(struct sock *VAR_0, struct sk_buff *VAR_1,
      u32 VAR_2, int VAR_3)
{
 struct sock *VAR_4;
 int VAR_5;
 long VAR_6;

 VAR_1 = FUNC_8(VAR_1, FUNC_2());

 VAR_6 = FUNC_12(VAR_0, VAR_3);
retry:
 VAR_4 = FUNC_5(VAR_0, VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_1);
  return FUNC_1(VAR_4);
 }
 if (FUNC_6(VAR_4))
  return FUNC_9(VAR_4, VAR_1, VAR_0);

 if (FUNC_10(VAR_4, VAR_1)) {
  VAR_5 = VAR_1->len;
  FUNC_3(VAR_1);
  FUNC_11(VAR_4);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_1, &VAR_6, VAR_0);
 if (VAR_5 == 1)
  goto retry;
 if (VAR_5)
  return VAR_5;

 return FUNC_7(VAR_4, VAR_1);
}
