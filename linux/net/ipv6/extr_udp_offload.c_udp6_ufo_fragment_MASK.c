
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct udphdr {scalar_t__ check; } ;
struct sk_buff {unsigned int len; scalar_t__ mac_header; int dev; int network_header; scalar_t__ head; int encap_hdr_csum; int ip_summed; scalar_t__ encapsulation; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct frag_hdr {int identification; scalar_t__ reserved; scalar_t__ nexthdr; } ;
typedef int netdev_features_t ;
typedef int __wsum ;
struct TYPE_4__ {int mac_offset; } ;
struct TYPE_3__ {unsigned int gso_size; int gso_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__**) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,unsigned int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int ,unsigned int,int ) ;
 unsigned int FUNC_11 (struct sk_buff*) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 struct sk_buff* FUNC_16 (struct sk_buff*,int ,int) ;
 struct udphdr* FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (unsigned int,int *,int *,int ) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_20(struct sk_buff *VAR_9,
      netdev_features_t VAR_10)
{
 struct sk_buff *VAR_11 = FUNC_0(-VAR_2);
 unsigned int VAR_12;
 unsigned int VAR_13, VAR_14;
 struct frag_hdr *VAR_15;
 u8 *VAR_16, *VAR_17;
 u8 VAR_18;
 u8 VAR_19 = sizeof(struct frag_hdr);
 __wsum VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_12 = FUNC_14(VAR_9)->gso_size;
 if (FUNC_19(VAR_9->len <= VAR_12))
  goto out;

 if (VAR_9->encapsulation && FUNC_14(VAR_9)->gso_type &
     (VAR_7|VAR_8))
  VAR_11 = FUNC_16(VAR_9, VAR_10, 1);
 else {
  const struct ipv6hdr *VAR_23;
  struct udphdr *VAR_24;

  if (!(FUNC_14(VAR_9)->gso_type & (VAR_5 | VAR_6)))
   goto out;

  if (!FUNC_9(VAR_9, sizeof(struct udphdr)))
   goto out;

  if (FUNC_14(VAR_9)->gso_type & VAR_6)
   return FUNC_2(VAR_9, VAR_10);





  VAR_24 = FUNC_17(VAR_9);
  VAR_23 = FUNC_6(VAR_9);

  VAR_24->check = 0;
  VAR_20 = FUNC_10(VAR_9, 0, VAR_9->len, 0);
  VAR_24->check = FUNC_18(VAR_9->len, &VAR_23->saddr,
       &VAR_23->daddr, VAR_20);
  if (VAR_24->check == 0)
   VAR_24->check = VAR_1;

  VAR_9->ip_summed = VAR_0;





  if (!VAR_9->encap_hdr_csum)
   VAR_10 |= VAR_3;


  VAR_21 = FUNC_15(VAR_9);
  if (VAR_9->mac_header < (VAR_21 + VAR_19)) {
   if (FUNC_4(VAR_9, VAR_21 + VAR_19))
    goto out;
  }




  VAR_22 = FUNC_5(VAR_9, &VAR_17);
  if (VAR_22 < 0)
   return FUNC_0(VAR_22);
  VAR_13 = VAR_22;
  VAR_18 = *VAR_17;
  *VAR_17 = VAR_4;
  VAR_14 = (FUNC_12(VAR_9) - FUNC_11(VAR_9)) +
        VAR_13 + VAR_21;
  VAR_16 = (u8 *) VAR_9->head + FUNC_1(VAR_9)->mac_offset;
  FUNC_8(VAR_16-VAR_19, VAR_16, VAR_14);

  FUNC_1(VAR_9)->mac_offset -= VAR_19;
  VAR_9->mac_header -= VAR_19;
  VAR_9->network_header -= VAR_19;

  VAR_15 = (struct frag_hdr *)(FUNC_12(VAR_9) + VAR_13);
  VAR_15->nexthdr = VAR_18;
  VAR_15->reserved = 0;
  VAR_15->identification = FUNC_7(FUNC_3(VAR_9->dev), VAR_9);




  VAR_11 = FUNC_13(VAR_9, VAR_10);
 }

out:
 return VAR_11;
}
