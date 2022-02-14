
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct sock *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_4(VAR_3);
  VAR_4 = FUNC_1(VAR_3);
  FUNC_5(VAR_3);
  FUNC_2(VAR_3);

  return FUNC_0(VAR_2, VAR_0, VAR_4);
 }

 return 0;
}
