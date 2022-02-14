
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mpls_shim_hdr {int dummy; } ;
struct mpls_route {int dummy; } ;
struct mpls_entry_decoded {scalar_t__ label; int bos; } ;
struct ipv6hdr {scalar_t__ nexthdr; int daddr; int saddr; } ;
struct iphdr {int version; int protocol; int daddr; int saddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct mpls_entry_decoded FUNC_4 (struct mpls_shim_hdr*) ;
 struct mpls_shim_hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static u32 FUNC_8(struct mpls_route *VAR_3, struct sk_buff *VAR_4)
{
 struct mpls_entry_decoded VAR_5;
 unsigned int VAR_6 = 0;
 struct mpls_shim_hdr *VAR_7;
 bool VAR_8 = 0;
 int VAR_9;
 u32 VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_0;
      VAR_9++) {
  VAR_6 += sizeof(*VAR_7);
  if (!FUNC_7(VAR_4, VAR_6))
   break;


  VAR_7 = FUNC_5(VAR_4) + VAR_9;
  VAR_5 = FUNC_4(VAR_7);




  if (FUNC_3(VAR_5.label >= VAR_2)) {
   VAR_10 = FUNC_1(VAR_5.label, VAR_10);







   if (VAR_8)
    break;
  } else if (VAR_5.label == VAR_1) {
   VAR_8 = 1;
  }

  if (!VAR_5.bos)
   continue;


  if (FUNC_7(VAR_4, VAR_6 + sizeof(struct iphdr))) {
   const struct iphdr *VAR_11;

   VAR_11 = (const struct iphdr *)(VAR_7 + 1);
   if (VAR_11->version == 4) {
    VAR_10 = FUNC_2(FUNC_6(VAR_11->saddr),
          FUNC_6(VAR_11->daddr),
          VAR_11->protocol, VAR_10);
   } else if (VAR_11->version == 6 &&
       FUNC_7(VAR_4, VAR_6 +
       sizeof(struct ipv6hdr))) {
    const struct ipv6hdr *VAR_12;

    VAR_12 = (const struct ipv6hdr *)(VAR_7 + 1);
    VAR_10 = FUNC_0(&VAR_12->saddr, VAR_10);
    VAR_10 = FUNC_0(&VAR_12->daddr, VAR_10);
    VAR_10 = FUNC_1(VAR_12->nexthdr, VAR_10);
   }
  }

  break;
 }

 return VAR_10;
}
