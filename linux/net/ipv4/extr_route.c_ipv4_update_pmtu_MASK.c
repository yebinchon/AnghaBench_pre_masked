
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int mark; scalar_t__ data; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int tos; } ;
struct flowi4 {int dummy; } ;


 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net*,struct flowi4*,int *,struct iphdr const*,int,int ,int ,int ,int ) ;
 struct rtable* FUNC_4 (struct net*,struct flowi4*) ;
 int FUNC_5 (struct rtable*,struct flowi4*,int ) ;
 int FUNC_6 (struct rtable*) ;

void FUNC_7(struct sk_buff *VAR_0, struct net *VAR_1, u32 VAR_2,
        int VAR_3, u8 VAR_4)
{
 const struct iphdr *VAR_5 = (const struct iphdr *) VAR_0->data;
 struct flowi4 VAR_6;
 struct rtable *VAR_7;
 u32 VAR_8 = FUNC_0(VAR_1, VAR_0->mark);

 FUNC_3(VAR_1, &VAR_6, ((void*)0), VAR_5, VAR_3,
    FUNC_2(VAR_5->tos), VAR_4, VAR_8, 0);
 VAR_7 = FUNC_4(VAR_1, &VAR_6);
 if (!FUNC_1(VAR_7)) {
  FUNC_5(VAR_7, &VAR_6, VAR_2);
  FUNC_6(VAR_7);
 }
}
