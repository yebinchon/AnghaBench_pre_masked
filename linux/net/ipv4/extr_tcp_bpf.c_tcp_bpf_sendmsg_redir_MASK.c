
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_psock {int dummy; } ;
struct sk_msg {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_psock*,struct sk_msg*,int ,int) ;
 int FUNC_1 (struct sock*,struct sk_msg*) ;
 int FUNC_2 (struct sk_msg*) ;
 struct sk_psock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_psock*) ;
 int FUNC_5 (struct sock*,struct sk_msg*,int ,int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sock *VAR_0, struct sk_msg *VAR_1,
     u32 VAR_2, int VAR_3)
{
 bool VAR_4 = FUNC_2(VAR_1);
 struct sk_psock *VAR_5 = FUNC_3(VAR_0);
 int VAR_6;

 if (FUNC_6(!VAR_5)) {
  FUNC_1(VAR_0, VAR_1);
  return 0;
 }
 VAR_6 = VAR_4 ? FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3) :
   FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 FUNC_4(VAR_0, VAR_5);
 return VAR_6;
}
