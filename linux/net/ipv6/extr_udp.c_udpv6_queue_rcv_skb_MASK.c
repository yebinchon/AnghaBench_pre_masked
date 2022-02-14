
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dev; struct sk_buff* next; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sk_buff*,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sock*,struct sk_buff*,int) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct sk_buff *VAR_2, *VAR_3;
 int VAR_4;

 if (FUNC_4(!FUNC_8(VAR_0, VAR_1)))
  return FUNC_9(VAR_0, VAR_1);

 FUNC_1(VAR_1, -FUNC_5(VAR_1));
 VAR_3 = FUNC_7(VAR_0, VAR_1, 0);
 for (VAR_1 = VAR_3; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1, FUNC_6(VAR_1));

  VAR_4 = FUNC_9(VAR_0, VAR_1);
  if (VAR_4 > 0)
   FUNC_3(FUNC_2(VAR_1->dev), VAR_1, VAR_4,
       1);
 }
 return 0;
}
