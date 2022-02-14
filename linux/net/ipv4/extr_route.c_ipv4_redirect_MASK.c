
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct iphdr {int tos; } ;
struct flowi4 {int dummy; } ;


 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net*,struct flowi4*,int *,struct iphdr const*,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct rtable*,struct sk_buff*,struct flowi4*,int) ;
 struct rtable* FUNC_4 (struct net*,struct flowi4*) ;
 int FUNC_5 (struct rtable*) ;

void FUNC_6(struct sk_buff *VAR_0, struct net *VAR_1,
     int VAR_2, u8 VAR_3)
{
 const struct iphdr *VAR_4 = (const struct iphdr *) VAR_0->data;
 struct flowi4 VAR_5;
 struct rtable *VAR_6;

 FUNC_2(VAR_1, &VAR_5, ((void*)0), VAR_4, VAR_2,
    FUNC_1(VAR_4->tos), VAR_3, 0, 0);
 VAR_6 = FUNC_4(VAR_1, &VAR_5);
 if (!FUNC_0(VAR_6)) {
  FUNC_3(VAR_6, VAR_0, &VAR_5, 0);
  FUNC_5(VAR_6);
 }
}
