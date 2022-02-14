
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct skb_shared_info {int gso_type; scalar_t__ gso_segs; } ;
struct sk_buff {scalar_t__ protocol; int encapsulation; scalar_t__ network_header; scalar_t__ mac_header; scalar_t__ transport_header; scalar_t__ inner_transport_header; scalar_t__ inner_network_header; scalar_t__ inner_mac_header; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct skb_shared_info*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 struct skb_shared_info* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_18, u32 VAR_19, u32 VAR_20,
       u64 VAR_21)
{
 u8 VAR_22 = VAR_21 >> VAR_0;
 bool VAR_23 = VAR_21 & VAR_3;
 u16 VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
 unsigned int VAR_27 = VAR_12;
 int VAR_28;

 if (FUNC_4(VAR_18) && !FUNC_5(VAR_18)) {

  if (!(FUNC_9(VAR_18)->gso_type & VAR_16) ||
      !(VAR_21 & VAR_6))
   return -VAR_9;
 }

 VAR_28 = FUNC_2(VAR_18, VAR_20);
 if (FUNC_10(VAR_28 < 0))
  return VAR_28;

 if (VAR_23) {
  if (VAR_18->protocol != FUNC_1(VAR_10) &&
      VAR_18->protocol != FUNC_1(VAR_11))
   return -VAR_9;

  if (VAR_21 & VAR_1 &&
      VAR_21 & VAR_2)
   return -VAR_8;

  if (VAR_21 & VAR_4 &&
      VAR_21 & VAR_5)
   return -VAR_8;

  if (VAR_18->encapsulation)
   return -VAR_7;

  VAR_24 = VAR_18->network_header - VAR_18->mac_header;
  VAR_25 = VAR_18->network_header;
  if (VAR_22 > VAR_20)
   return -VAR_8;
  VAR_26 = VAR_18->transport_header;
 }

 VAR_28 = FUNC_0(VAR_18, VAR_19, VAR_20);
 if (FUNC_10(VAR_28 < 0))
  return VAR_28;

 if (VAR_23) {
  VAR_18->inner_mac_header = VAR_25 - VAR_22;
  VAR_18->inner_network_header = VAR_25;
  VAR_18->inner_transport_header = VAR_26;
  FUNC_6(VAR_18, VAR_18->protocol);

  VAR_18->encapsulation = 1;
  FUNC_7(VAR_18, VAR_24);

  if (VAR_21 & VAR_5)
   VAR_27 |= VAR_17;
  else if (VAR_21 & VAR_4)
   VAR_27 |= VAR_13;
  else if (VAR_21 & VAR_2)
   VAR_27 |= VAR_15;
  else if (VAR_21 & VAR_1)
   VAR_27 |= VAR_14;

  if (VAR_21 & VAR_4 ||
      VAR_21 & VAR_5) {
   int VAR_29 = VAR_21 & VAR_2 ?
     sizeof(struct ipv6hdr) :
     sizeof(struct iphdr);

   FUNC_8(VAR_18, VAR_24 + VAR_29);
  }


  if (VAR_18->protocol == FUNC_1(VAR_10) &&
      VAR_21 & VAR_2)
   VAR_18->protocol = FUNC_1(VAR_11);
  else if (VAR_18->protocol == FUNC_1(VAR_11) &&
    VAR_21 & VAR_1)
   VAR_18->protocol = FUNC_1(VAR_10);
 }

 if (FUNC_4(VAR_18)) {
  struct skb_shared_info *VAR_30 = FUNC_9(VAR_18);


  if (!(VAR_21 & VAR_6))
   FUNC_3(VAR_30, VAR_20);


  VAR_30->gso_type |= VAR_27;
  VAR_30->gso_segs = 0;
 }

 return 0;
}
