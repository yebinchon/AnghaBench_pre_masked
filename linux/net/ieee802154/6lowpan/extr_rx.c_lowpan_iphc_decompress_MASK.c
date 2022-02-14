
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct ieee802154_hdr {int source; int dest; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct ieee802154_hdr*) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int *) ;

int FUNC_2(struct sk_buff *VAR_1)
{
 struct ieee802154_hdr VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) < 0)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_1->dev, &VAR_2.dest, &VAR_2.source);
}
