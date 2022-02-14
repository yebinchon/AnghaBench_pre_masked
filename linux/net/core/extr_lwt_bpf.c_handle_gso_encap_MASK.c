
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {int check; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct gre_base_hdr {int flags; } ;
typedef int __u8 ;
struct TYPE_6__ {int protocol; } ;
struct TYPE_5__ {int nexthdr; } ;
struct TYPE_4__ {int gso_type; } ;


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
 int FUNC_0 (struct sk_buff*,int ,int) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 void* FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_12, bool VAR_13, int VAR_14)
{
 int VAR_15;
 void *VAR_16;
 __u8 VAR_17;





 if (!(FUNC_4(VAR_12)->gso_type & (VAR_8 | VAR_9)))
  return -VAR_1;

 if (VAR_13) {
  VAR_17 = FUNC_1(VAR_12)->protocol;
  VAR_15 = sizeof(struct iphdr);
  VAR_16 = FUNC_3(VAR_12) + VAR_15;
 } else {
  VAR_17 = FUNC_2(VAR_12)->nexthdr;
  VAR_15 = sizeof(struct ipv6hdr);
  VAR_16 = FUNC_3(VAR_12) + VAR_15;
 }

 switch (VAR_17) {
 case 131:
  VAR_15 += sizeof(struct gre_base_hdr);
  if (VAR_15 > VAR_14)
   return -VAR_0;

  if (((struct gre_base_hdr *)VAR_16)->flags & VAR_3)
   return FUNC_0(VAR_12, VAR_5,
            VAR_14);
  return FUNC_0(VAR_12, VAR_4, VAR_14);

 case 128:
  VAR_15 += sizeof(struct udphdr);
  if (VAR_15 > VAR_14)
   return -VAR_0;

  if (((struct udphdr *)VAR_16)->check)
   return FUNC_0(VAR_12, VAR_11,
            VAR_14);
  return FUNC_0(VAR_12, VAR_10, VAR_14);

 case 130:
 case 129:
  if (VAR_13)
   return FUNC_0(VAR_12, VAR_6, VAR_14);
  else
   return FUNC_0(VAR_12, VAR_7, VAR_14);

 default:
  return -VAR_2;
 }
}
