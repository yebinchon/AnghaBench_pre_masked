
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* protocol; scalar_t__ len; int mac_len; } ;
struct seg6_iptunnel_encap {int mode; int srh; } ;
struct ipv6hdr {int dummy; } ;
struct dst_entry {int lwtstate; } ;
struct TYPE_2__ {void* payload_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 struct seg6_iptunnel_encap* FUNC_6 (int ) ;
 struct dst_entry* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*,void*) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_9)
{
 struct dst_entry *VAR_10 = FUNC_7(VAR_9);
 struct seg6_iptunnel_encap *VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_11 = FUNC_6(VAR_10->lwtstate);

 switch (VAR_11->mode) {
 case 129:
  if (VAR_9->protocol != FUNC_0(VAR_3))
   return -VAR_0;

  VAR_13 = FUNC_5(VAR_9, VAR_11->srh);
  if (VAR_13)
   return VAR_13;
  break;
 case 130:
  VAR_13 = FUNC_1(VAR_9, VAR_8);
  if (VAR_13)
   return VAR_13;

  if (VAR_9->protocol == FUNC_0(VAR_3))
   VAR_12 = VAR_6;
  else if (VAR_9->protocol == FUNC_0(VAR_2))
   VAR_12 = VAR_5;
  else
   return -VAR_0;

  VAR_13 = FUNC_4(VAR_9, VAR_11->srh, VAR_12);
  if (VAR_13)
   return VAR_13;

  FUNC_12(VAR_9, FUNC_14(VAR_9));
  FUNC_11(VAR_9, VAR_9->protocol);
  VAR_9->protocol = FUNC_0(VAR_3);
  break;
 case 128:
  if (!FUNC_9(VAR_9))
   return -VAR_0;

  if (FUNC_3(VAR_9, VAR_9->mac_len, 0, VAR_4) < 0)
   return -VAR_1;

  FUNC_8(VAR_9);
  FUNC_10(VAR_9, VAR_9->mac_len);

  VAR_13 = FUNC_4(VAR_9, VAR_11->srh, VAR_7);
  if (VAR_13)
   return VAR_13;

  VAR_9->protocol = FUNC_0(VAR_3);
  break;
 }

 FUNC_2(VAR_9)->payload_len = FUNC_0(VAR_9->len - sizeof(struct ipv6hdr));
 FUNC_13(VAR_9, sizeof(struct ipv6hdr));

 return 0;
}
