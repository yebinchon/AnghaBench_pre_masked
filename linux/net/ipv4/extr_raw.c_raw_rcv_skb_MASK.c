
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3)
{


 FUNC_0(VAR_2, VAR_3);
 if (FUNC_2(VAR_2, VAR_3) < 0) {
  FUNC_1(VAR_3);
  return VAR_0;
 }

 return VAR_1;
}
