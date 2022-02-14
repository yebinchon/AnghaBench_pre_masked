
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct TYPE_4__ {void* ip; } ;
struct nf_nat_range2 {int flags; int max_proto; int min_proto; TYPE_2__ max_addr; TYPE_2__ min_addr; } ;
struct nf_nat_ipv4_multi_range_compat {TYPE_1__* range; } ;
struct nf_conn {int dummy; } ;
struct in_ifaddr {void* ifa_local; } ;
struct in_device {int ifa_list; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef void* __be32 ;
struct TYPE_3__ {int flags; int max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct in_device* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 unsigned int FUNC_5 (struct nf_conn*,struct nf_nat_range2*,int ) ;
 struct in_ifaddr* FUNC_6 (int ) ;

unsigned int
FUNC_7(struct sk_buff *VAR_7,
       const struct nf_nat_ipv4_multi_range_compat *VAR_8,
       unsigned int VAR_9)
{
 struct nf_conn *VAR_10;
 enum ip_conntrack_info VAR_11;
 __be32 VAR_12;
 struct nf_nat_range2 VAR_13;

 FUNC_0(VAR_9 != VAR_4 &&
  VAR_9 != VAR_3);

 VAR_10 = FUNC_4(VAR_7, &VAR_11);
 FUNC_0(!(VAR_10 && (VAR_11 == VAR_0 || VAR_11 == VAR_1)));


 if (VAR_9 == VAR_3) {
  VAR_12 = FUNC_2(0x7F000001);
 } else {
  const struct in_device *VAR_14;

  VAR_12 = 0;

  VAR_14 = FUNC_1(VAR_7->dev);
  if (VAR_14) {
   const struct in_ifaddr *VAR_15;

   VAR_15 = FUNC_6(VAR_14->ifa_list);
   if (VAR_15)
    VAR_12 = VAR_15->ifa_local;
  }

  if (!VAR_12)
   return VAR_2;
 }


 FUNC_3(&VAR_13.min_addr, 0, sizeof(VAR_13.min_addr));
 FUNC_3(&VAR_13.max_addr, 0, sizeof(VAR_13.max_addr));
 VAR_13.flags = VAR_8->range[0].flags | VAR_6;
 VAR_13.min_addr.ip = VAR_12;
 VAR_13.max_addr.ip = VAR_12;
 VAR_13.min_proto = VAR_8->range[0].min;
 VAR_13.max_proto = VAR_8->range[0].max;


 return FUNC_5(VAR_10, &VAR_13, VAR_5);
}
