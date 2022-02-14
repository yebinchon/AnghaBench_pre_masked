
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ len; scalar_t__ data; } ;
struct TYPE_4__ {int protonum; } ;
struct nf_conntrack_tuple {TYPE_2__ dst; } ;
struct nf_conn {int status; TYPE_1__* tuplehash; } ;
struct iphdr {int dummy; } ;
struct icmphdr {scalar_t__ type; scalar_t__ checksum; } ;
typedef enum nf_nat_manip_type { ____Placeholder_nf_nat_manip_type } nf_nat_manip_type ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef enum ip_conntrack_dir { ____Placeholder_ip_conntrack_dir } ip_conntrack_dir ;
struct TYPE_3__ {struct nf_conntrack_tuple tuple; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (struct sk_buff*,unsigned int,struct nf_conntrack_tuple*,int) ;
 int FUNC_8 (struct sk_buff*,unsigned int,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,unsigned int) ;

int FUNC_10(struct sk_buff *VAR_11,
      struct nf_conn *VAR_12,
      enum ip_conntrack_info VAR_13,
      unsigned int VAR_14)
{
 struct {
  struct icmphdr icmp;
  struct iphdr ip;
 } *VAR_15;
 enum ip_conntrack_dir VAR_16 = FUNC_0(VAR_13);
 enum nf_nat_manip_type VAR_17 = FUNC_1(VAR_14);
 unsigned int VAR_18 = FUNC_4(VAR_11);
 struct nf_conntrack_tuple VAR_19;
 unsigned long VAR_20;

 FUNC_2(VAR_13 != VAR_8 && VAR_13 != VAR_9);

 if (FUNC_9(VAR_11, VAR_18 + sizeof(*VAR_15)))
  return 0;
 if (FUNC_6(VAR_11, VAR_14, VAR_18, VAR_2))
  return 0;

 VAR_15 = (void *)VAR_11->data + VAR_18;
 if (VAR_15->icmp.type == VAR_1) {
  if ((VAR_12->status & VAR_4) != VAR_4)
   return 0;
  if (VAR_12->status & VAR_5)
   return 0;
 }

 if (VAR_17 == VAR_10)
  VAR_20 = VAR_6;
 else
  VAR_20 = VAR_3;


 if (VAR_16 == VAR_7)
  VAR_20 ^= VAR_5;

 if (!(VAR_12->status & VAR_20))
  return 1;

 if (!FUNC_7(VAR_11, VAR_18 + sizeof(VAR_15->icmp),
       &VAR_12->tuplehash[!VAR_16].tuple, !VAR_17))
  return 0;

 if (VAR_11->ip_summed != VAR_0) {

  VAR_15 = (void *)VAR_11->data + VAR_18;
  VAR_15->icmp.checksum = 0;
  VAR_15->icmp.checksum =
   FUNC_3(FUNC_8(VAR_11, VAR_18,
            VAR_11->len - VAR_18, 0));
 }


 FUNC_5(&VAR_19, &VAR_12->tuplehash[!VAR_16].tuple);
 VAR_19.dst.protonum = VAR_2;
 if (!FUNC_7(VAR_11, 0, &VAR_19, VAR_17))
  return 0;

 return 1;
}
