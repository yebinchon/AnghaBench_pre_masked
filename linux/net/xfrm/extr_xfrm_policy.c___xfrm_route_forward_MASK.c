
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int VAR_0 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_1 ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct flowi*,unsigned short) ;
 struct dst_entry* FUNC_7 (struct net*,int ,struct flowi*,int *,int ) ;

int FUNC_8(struct sk_buff *VAR_2, unsigned short VAR_3)
{
 struct net *VAR_4 = FUNC_2(VAR_2->dev);
 struct flowi VAR_5;
 struct dst_entry *VAR_6;
 int VAR_7 = 1;

 if (FUNC_6(VAR_2, &VAR_5, VAR_3) < 0) {
  FUNC_1(VAR_4, VAR_0);
  return 0;
 }

 FUNC_4(VAR_2);
 if (!FUNC_3(VAR_2)) {
  FUNC_1(VAR_4, VAR_0);
  return 0;
 }

 VAR_6 = FUNC_7(VAR_4, FUNC_3(VAR_2), &VAR_5, ((void*)0), VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_7 = 0;
  VAR_6 = ((void*)0);
 }
 FUNC_5(VAR_2, VAR_6);
 return VAR_7;
}
