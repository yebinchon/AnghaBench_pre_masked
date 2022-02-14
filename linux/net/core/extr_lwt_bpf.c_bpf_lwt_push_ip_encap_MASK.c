
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int encapsulation; void* protocol; scalar_t__ mac_len; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int version; int ihl; scalar_t__ check; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int,int) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned char*,int) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,void*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,struct iphdr*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,void*) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct sk_buff *VAR_4, void *VAR_5, u32 VAR_6, bool VAR_7)
{
 struct iphdr *VAR_8;
 bool VAR_9;
 int VAR_10;

 if (FUNC_18(VAR_6 < sizeof(struct iphdr) || VAR_6 > VAR_3))
  return -VAR_0;


 VAR_8 = (struct iphdr *)VAR_5;
 if (VAR_8->version == 4) {
  VAR_9 = 1;
  if (FUNC_18(VAR_6 < VAR_8->ihl * 4))
   return -VAR_0;
 } else if (VAR_8->version == 6) {
  VAR_9 = 0;
  if (FUNC_18(VAR_6 < sizeof(struct ipv6hdr)))
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 if (VAR_7)
  VAR_10 = FUNC_8(VAR_4, VAR_6 + VAR_4->mac_len);
 else
  VAR_10 = FUNC_8(VAR_4,
       VAR_6 + FUNC_0(FUNC_9(VAR_4)->dev));
 if (FUNC_18(VAR_10))
  return VAR_10;


 FUNC_14(VAR_4);
 FUNC_15(VAR_4);
 FUNC_17(VAR_4, VAR_4->protocol);
 VAR_4->encapsulation = 1;
 FUNC_13(VAR_4, VAR_6);
 if (VAR_7)
  FUNC_12(VAR_4, VAR_8, VAR_6);
 FUNC_16(VAR_4);
 FUNC_6(FUNC_11(VAR_4), VAR_5, VAR_6);
 FUNC_1(VAR_4);
 FUNC_7(VAR_4);

 if (VAR_9) {
  VAR_4->protocol = FUNC_3(VAR_1);
  VAR_8 = FUNC_5(VAR_4);

  if (!VAR_8->check)
   VAR_8->check = FUNC_4((unsigned char *)VAR_8,
        VAR_8->ihl);
 } else {
  VAR_4->protocol = FUNC_3(VAR_2);
 }

 if (FUNC_10(VAR_4))
  return FUNC_2(VAR_4, VAR_9, VAR_6);

 return 0;
}
