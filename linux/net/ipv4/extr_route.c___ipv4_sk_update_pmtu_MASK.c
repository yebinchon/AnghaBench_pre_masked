
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int mark; scalar_t__ data; } ;
struct rtable {int dummy; } ;
struct iphdr {int dummy; } ;
struct flowi4 {scalar_t__ flowi4_mark; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (int ,struct flowi4*,struct sock*,struct iphdr const*,int ,int ,int ,int ,int ) ;
 struct rtable* FUNC_3 (int ,struct flowi4*) ;
 int FUNC_4 (struct rtable*,struct flowi4*,int ) ;
 int FUNC_5 (struct rtable*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_0, struct sock *VAR_1, u32 VAR_2)
{
 const struct iphdr *VAR_3 = (const struct iphdr *) VAR_0->data;
 struct flowi4 VAR_4;
 struct rtable *VAR_5;

 FUNC_2(FUNC_6(VAR_1), &VAR_4, VAR_1, VAR_3, 0, 0, 0, 0, 0);

 if (!VAR_4)
  VAR_4 = FUNC_0(FUNC_6(VAR_1), VAR_0->mark);

 VAR_5 = FUNC_3(FUNC_6(VAR_1), &VAR_4);
 if (!FUNC_1(VAR_5)) {
  FUNC_4(VAR_5, &VAR_4, VAR_2);
  FUNC_5(VAR_5);
 }
}
