
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {TYPE_2__* dev; int * data; } ;
struct net {int dummy; } ;
struct ipv6hdr {int payload_len; int saddr; int daddr; } ;
struct ipv6_tlv_tnl_enc_lim {int encap_limit; } ;
struct TYPE_3__ {int name; int proto; } ;
struct ip6_tnl {TYPE_1__ parms; } ;
struct inet6_skb_parm {int dummy; } ;
typedef scalar_t__ __u8 ;
typedef size_t __u32 ;
typedef size_t __u16 ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 size_t VAR_4 ;

 scalar_t__ FUNC_0 (int ) ;
 struct net* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int ) ;
 struct ip6_tnl* FUNC_4 (struct net*,int *,int *) ;
 size_t FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct net*,int *) ;

__attribute__((used)) static int
FUNC_12(struct sk_buff *VAR_5, __u8 VAR_6, struct inet6_skb_parm *VAR_7,
     u8 *VAR_8, u8 *VAR_9, int *VAR_10, __u32 *VAR_11, int VAR_12)
{
 const struct ipv6hdr *VAR_13 = (const struct ipv6hdr *)VAR_5->data;
 struct net *VAR_14 = FUNC_1(VAR_5->dev);
 u8 VAR_15 = 132;
 u8 VAR_16 = VAR_1;
 __u32 VAR_17 = 0;
 struct ip6_tnl *VAR_18;
 int VAR_19 = -VAR_0;
 int VAR_20 = 0;
 u8 VAR_21;
 __u16 VAR_22;





 FUNC_9();
 VAR_18 = FUNC_4(FUNC_1(VAR_5->dev), &VAR_13->daddr, &VAR_13->saddr);
 if (!VAR_18)
  goto out;

 VAR_21 = FUNC_0(VAR_18->parms.proto);
 if (VAR_21 != VAR_6 && VAR_21 != 0)
  goto out;

 VAR_19 = 0;

 switch (*VAR_8) {
  struct ipv6_tlv_tnl_enc_lim *VAR_23;
  __u32 VAR_24, VAR_25;
 case 132:
  FUNC_7("%s: Path to destination invalid or inactive!\n",
        VAR_18->parms.name);
  VAR_20 = 1;
  break;
 case 129:
  if ((*VAR_9) == VAR_2) {
   FUNC_7("%s: Too small hop limit or routing loop in tunnel!\n",
         VAR_18->parms.name);
   VAR_20 = 1;
  }
  break;
 case 131:
  VAR_25 = 0;
  if ((*VAR_9) == VAR_3)
   VAR_25 = FUNC_5(VAR_5, VAR_5->data);

  if (VAR_25 && VAR_25 == *VAR_11 - 2) {
   VAR_23 = (struct ipv6_tlv_tnl_enc_lim *) &VAR_5->data[VAR_25];
   if (VAR_23->encap_limit == 0) {
    FUNC_7("%s: Too small encapsulation limit or routing loop in tunnel!\n",
          VAR_18->parms.name);
    VAR_20 = 1;
   }
  } else {
   FUNC_7("%s: Recipient unable to parse tunneled packet!\n",
         VAR_18->parms.name);
  }
  break;
 case 130:
  FUNC_6(VAR_5, VAR_14, FUNC_2(*VAR_11), 0, 0,
    FUNC_11(VAR_14, ((void*)0)));
  VAR_24 = *VAR_11 - VAR_12;
  if (VAR_24 < VAR_4)
   VAR_24 = VAR_4;
  VAR_22 = sizeof(*VAR_13) + FUNC_8(VAR_13->payload_len);
  if (VAR_22 > VAR_24) {
   VAR_15 = 130;
   VAR_16 = 0;
   VAR_17 = VAR_24;
   VAR_20 = 1;
  }
  break;
 case 128:
  FUNC_3(VAR_5, VAR_14, VAR_5->dev->ifindex, 0,
        FUNC_11(VAR_14, ((void*)0)));
  break;
 }

 *VAR_8 = VAR_15;
 *VAR_9 = VAR_16;
 *VAR_11 = VAR_17;
 *VAR_10 = VAR_20;

out:
 FUNC_10();
 return VAR_19;
}
