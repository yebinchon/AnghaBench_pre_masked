
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,struct sk_buff**,int) ;
 int FUNC_5 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ,char*) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6 = FUNC_6(FUNC_3(VAR_1));

 if (!FUNC_4(VAR_6, &VAR_2, VAR_3))
  return;

 FUNC_7(VAR_1, VAR_2, VAR_0, "@sk_respond!");
 VAR_5 = FUNC_1(FUNC_0(VAR_2));
 VAR_4 = FUNC_2(FUNC_0(VAR_2));
 FUNC_5(FUNC_3(VAR_1), VAR_2, VAR_5, VAR_4);
}
