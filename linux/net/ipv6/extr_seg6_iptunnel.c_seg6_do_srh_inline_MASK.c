
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ mac_len; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; int nexthdr; } ;
struct ipv6_sr_hdr {int hdrlen; size_t first_segment; int * segments; int nexthdr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ipv6_sr_hdr*,struct ipv6_sr_hdr*,int) ;
 int FUNC_3 (struct ipv6hdr*,struct ipv6hdr*,int) ;
 int FUNC_4 (struct net*,int *,struct ipv6_sr_hdr*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sk_buff*,struct ipv6hdr*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct ipv6_sr_hdr*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct sk_buff *VAR_1, struct ipv6_sr_hdr *VAR_2)
{
 struct ipv6hdr *VAR_3, *VAR_4;
 struct ipv6_sr_hdr *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = (VAR_2->hdrlen + 1) << 3;

 VAR_7 = FUNC_5(VAR_1, VAR_6 + VAR_1->mac_len);
 if (FUNC_15(VAR_7))
  return VAR_7;

 VAR_4 = FUNC_1(VAR_1);

 FUNC_11(VAR_1, sizeof(struct ipv6hdr));
 FUNC_9(VAR_1, FUNC_8(VAR_1),
      sizeof(struct ipv6hdr));

 FUNC_12(VAR_1, sizeof(struct ipv6hdr) + VAR_6);
 FUNC_13(VAR_1);
 FUNC_7(VAR_1);

 VAR_3 = FUNC_1(VAR_1);

 FUNC_3(VAR_3, VAR_4, sizeof(*VAR_3));

 VAR_5 = (void *)VAR_3 + sizeof(*VAR_3);
 FUNC_2(VAR_5, VAR_2, VAR_6);

 VAR_5->nexthdr = VAR_3->nexthdr;
 VAR_3->nexthdr = VAR_0;

 VAR_5->segments[0] = VAR_3->daddr;
 VAR_3->daddr = VAR_5->segments[VAR_5->first_segment];
 FUNC_10(VAR_1, VAR_3, sizeof(struct ipv6hdr) + VAR_6);

 return 0;
}
