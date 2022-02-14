
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int protocol; scalar_t__ mac_len; struct sk_buff* next; TYPE_1__* dev; int inner_protocol; scalar_t__ mac_header; } ;
typedef int netdev_features_t ;
typedef int __be16 ;
struct TYPE_2__ {int mpls_features; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,int ,unsigned int,scalar_t__,scalar_t__) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int) ;
 unsigned int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_14(struct sk_buff *VAR_1,
           netdev_features_t VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_0(-VAR_0);
 u16 VAR_4 = VAR_1->mac_header;
 netdev_features_t VAR_5;
 u16 VAR_6 = VAR_1->mac_len;
 __be16 VAR_7;
 unsigned int VAR_8;

 FUNC_11(VAR_1);
 VAR_8 = FUNC_6(VAR_1) - FUNC_8(VAR_1);
 if (FUNC_13(!FUNC_4(VAR_1, VAR_8)))
  goto out;


 VAR_7 = VAR_1->protocol;
 VAR_1->protocol = VAR_1->inner_protocol;

 FUNC_2(VAR_1, VAR_8);

 VAR_1->mac_len = 0;
 FUNC_10(VAR_1);


 VAR_5 = VAR_1->dev->mpls_features & VAR_2;
 VAR_3 = FUNC_7(VAR_1, VAR_5);
 if (FUNC_1(VAR_3)) {
  FUNC_5(VAR_1, VAR_7, VAR_8, VAR_4,
         VAR_6);
  goto out;
 }
 VAR_1 = VAR_3;

 VAR_8 += VAR_6;
 do {
  VAR_1->mac_len = VAR_6;
  VAR_1->protocol = VAR_7;

  FUNC_9(VAR_1);

  FUNC_3(VAR_1, VAR_8);

  FUNC_10(VAR_1);
  FUNC_12(VAR_1, VAR_6);
 } while ((VAR_1 = VAR_1->next));

out:
 return VAR_3;
}
