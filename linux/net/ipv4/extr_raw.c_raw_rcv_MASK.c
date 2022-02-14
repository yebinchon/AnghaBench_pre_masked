
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_drops; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sock*,int ,struct sk_buff*) ;

int FUNC_7(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 if (!FUNC_6(VAR_2, VAR_1, VAR_3)) {
  FUNC_0(&VAR_2->sk_drops);
  FUNC_1(VAR_3);
  return VAR_0;
 }
 FUNC_2(VAR_3);

 FUNC_5(VAR_3, VAR_3->data - FUNC_4(VAR_3));

 FUNC_3(VAR_2, VAR_3);
 return 0;
}
