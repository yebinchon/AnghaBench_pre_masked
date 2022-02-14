
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {void* protocol; } ;
struct TYPE_2__ {int ip_ttl_propagate; } ;
struct net {TYPE_1__ mpls; } ;
struct mpls_route {int rt_payload_type; int rt_ttl_propagate; } ;
struct mpls_entry_decoded {int ttl; } ;
struct ipv6hdr {int hop_limit; } ;
struct iphdr {int version; int ttl; int check; } ;
typedef enum mpls_payload_type { ____Placeholder_mpls_payload_type } mpls_payload_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,void*,void*) ;
 void* FUNC_1 (int) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static bool FUNC_5(struct net *VAR_4, struct mpls_route *VAR_5,
   struct sk_buff *VAR_6, struct mpls_entry_decoded VAR_7)
{
 enum mpls_payload_type VAR_8;
 bool VAR_9 = 0;
 if (!FUNC_4(VAR_6, 12))
  return 0;

 VAR_8 = VAR_5->rt_payload_type;
 if (VAR_8 == 128)
  VAR_8 = FUNC_2(VAR_6)->version;

 switch (VAR_8) {
 case 130: {
  struct iphdr *VAR_10 = FUNC_2(VAR_6);
  u8 VAR_11;
  VAR_6->protocol = FUNC_1(VAR_0);





  if (VAR_5->rt_ttl_propagate == VAR_3 ||
      (VAR_5->rt_ttl_propagate == VAR_2 &&
       VAR_4->mpls.ip_ttl_propagate))
   VAR_11 = VAR_7.ttl;
  else
   VAR_11 = VAR_10->ttl ? VAR_10->ttl - 1 : 0;

  FUNC_0(&VAR_10->check,
         FUNC_1(VAR_10->ttl << 8),
         FUNC_1(VAR_11 << 8));
  VAR_10->ttl = VAR_11;
  VAR_9 = 1;
  break;
 }
 case 129: {
  struct ipv6hdr *VAR_12 = FUNC_3(VAR_6);
  VAR_6->protocol = FUNC_1(VAR_1);





  if (VAR_5->rt_ttl_propagate == VAR_3 ||
      (VAR_5->rt_ttl_propagate == VAR_2 &&
       VAR_4->mpls.ip_ttl_propagate))
   VAR_12->hop_limit = VAR_7.ttl;
  else if (VAR_12->hop_limit)
   VAR_12->hop_limit = VAR_12->hop_limit - 1;
  VAR_9 = 1;
  break;
 }
 case 128:

  break;
 }

 return VAR_9;
}
