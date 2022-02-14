
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int * data; } ;
struct TYPE_2__ {scalar_t__ security_enabled; } ;
struct ieee802154_hdr {int sec; TYPE_1__ fc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,struct ieee802154_hdr*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ieee802154_hdr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee802154_hdr*,int *,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

int
FUNC_7(struct sk_buff *VAR_1, struct ieee802154_hdr *VAR_2)
{
 int VAR_3 = 3, VAR_4;

 if (!FUNC_5(VAR_1, 3))
  return -VAR_0;

 FUNC_4(VAR_2, VAR_1->data, 3);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0 || !FUNC_5(VAR_1, VAR_4))
  return -VAR_0;

 VAR_3 += FUNC_0(VAR_1->data + VAR_3, VAR_2);

 if (VAR_2->fc.security_enabled) {
  int VAR_5 = VAR_3 + FUNC_3(VAR_1->data[VAR_3]);

  if (!FUNC_5(VAR_1, VAR_5))
   return -VAR_0;

  VAR_3 += FUNC_1(VAR_1->data + VAR_3, &VAR_2->sec);
 }

 FUNC_6(VAR_1, VAR_3);
 return VAR_3;
}
