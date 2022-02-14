
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sock*,int *) ;

void FUNC_11(struct sock *VAR_5, gfp_t VAR_6)
{
 struct sk_buff *VAR_7;

 FUNC_1(FUNC_4(VAR_5), VAR_4);


 VAR_7 = FUNC_2(VAR_1, VAR_6);
 if (!VAR_7) {
  FUNC_0(FUNC_4(VAR_5), VAR_0);
  return;
 }


 FUNC_3(VAR_7, VAR_1);
 FUNC_6(VAR_7, FUNC_5(VAR_5),
        VAR_2 | VAR_3);
 FUNC_7(FUNC_8(VAR_5));

 if (FUNC_9(VAR_5, VAR_7, 0, VAR_6))
  FUNC_0(FUNC_4(VAR_5), VAR_0);




 FUNC_10(VAR_5, ((void*)0));
}
