
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct TYPE_11__ {void* ip; } ;
struct nf_nat_range2 {int flags; int max_proto; int min_proto; TYPE_5__ max_addr; TYPE_5__ min_addr; } ;
struct nf_conn_nat {int masq_index; } ;
struct nf_conn {TYPE_4__* tuplehash; } ;
struct net_device {int ifindex; int name; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef void* __be32 ;
struct TYPE_12__ {int daddr; } ;
struct TYPE_7__ {scalar_t__ ip; } ;
struct TYPE_8__ {TYPE_1__ u3; } ;
struct TYPE_9__ {TYPE_2__ src; } ;
struct TYPE_10__ {TYPE_3__ tuple; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (struct net_device const*,void*,int ) ;
 TYPE_6__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 struct nf_conn_nat* FUNC_5 (struct nf_conn*) ;
 unsigned int FUNC_6 (struct nf_conn*,struct nf_nat_range2*,int ) ;
 int FUNC_7 (char*,int ) ;
 void* FUNC_8 (struct rtable const*,int ) ;
 struct rtable* FUNC_9 (struct sk_buff*) ;

unsigned int
FUNC_10(struct sk_buff *VAR_10, unsigned int VAR_11,
         const struct nf_nat_range2 *VAR_12,
         const struct net_device *VAR_13)
{
 struct nf_conn *VAR_14;
 struct nf_conn_nat *VAR_15;
 enum ip_conntrack_info VAR_16;
 struct nf_nat_range2 VAR_17;
 const struct rtable *VAR_18;
 __be32 VAR_19, VAR_20;

 FUNC_0(VAR_11 != VAR_6);

 VAR_14 = FUNC_4(VAR_10, &VAR_16);

 FUNC_0(!(VAR_14 && (VAR_16 == VAR_1 || VAR_16 == VAR_2 ||
    VAR_16 == VAR_3)));




 if (VAR_14->tuplehash[VAR_0].tuple.src.u3.ip == 0)
  return VAR_4;

 VAR_18 = FUNC_9(VAR_10);
 VAR_20 = FUNC_8(VAR_18, FUNC_2(VAR_10)->daddr);
 VAR_19 = FUNC_1(VAR_13, VAR_20, VAR_9);
 if (!VAR_19) {
  FUNC_7("%s ate my IP address\n", VAR_13->name);
  return VAR_5;
 }

 VAR_15 = FUNC_5(VAR_14);
 if (VAR_15)
  VAR_15->masq_index = VAR_13->ifindex;


 FUNC_3(&VAR_17.min_addr, 0, sizeof(VAR_17.min_addr));
 FUNC_3(&VAR_17.max_addr, 0, sizeof(VAR_17.max_addr));
 VAR_17.flags = VAR_12->flags | VAR_8;
 VAR_17.min_addr.ip = VAR_19;
 VAR_17.max_addr.ip = VAR_19;
 VAR_17.min_proto = VAR_12->min_proto;
 VAR_17.max_proto = VAR_12->max_proto;


 return FUNC_6(VAR_14, &VAR_17, VAR_7);
}
