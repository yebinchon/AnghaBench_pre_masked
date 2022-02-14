
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 VAR_4 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_4)
  return VAR_1;

 if (FUNC_2(VAR_3, VAR_4) < 0) {
  FUNC_0(VAR_4);
  return VAR_1;
 }

 return VAR_2;
}
