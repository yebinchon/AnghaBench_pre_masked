
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sk_buff*,struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 if (VAR_2 && !VAR_2->len) {
  FUNC_2(VAR_2, VAR_1);
  if (FUNC_3(VAR_1))
   FUNC_1(VAR_1, VAR_0);
  FUNC_0(VAR_1, VAR_2);
 }
}
