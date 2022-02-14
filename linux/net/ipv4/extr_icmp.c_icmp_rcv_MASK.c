
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct sec_path {int len; TYPE_3__** xvec; } ;
struct TYPE_6__ {int dev; } ;
struct rtable {int rt_flags; TYPE_1__ dst; } ;
struct TYPE_9__ {scalar_t__ sysctl_icmp_echo_ignore_broadcasts; } ;
struct net {TYPE_4__ ipv4; } ;
struct iphdr {int dummy; } ;
struct icmphdr {size_t type; } ;
struct TYPE_10__ {int (* handler ) (struct sk_buff*) ;} ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_2__ props; } ;


 int FUNC_0 (struct net*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct net* FUNC_3 (int ) ;
 struct icmphdr* FUNC_4 (struct sk_buff*) ;
 TYPE_5__* VAR_14 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;
 struct sec_path* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *,int ,struct sk_buff*) ;
 int FUNC_15 (int *,int ,struct sk_buff*) ;

int FUNC_16(struct sk_buff *VAR_15)
{
 struct icmphdr *VAR_16;
 struct rtable *VAR_17 = FUNC_10(VAR_15);
 struct net *VAR_18 = FUNC_3(VAR_17->dst.dev);
 bool VAR_19;

 if (!FUNC_14(((void*)0), VAR_12, VAR_15)) {
  struct sec_path *VAR_20 = FUNC_11(VAR_15);
  int VAR_21;

  if (!(VAR_20 && VAR_20->xvec[VAR_20->len - 1]->props.flags &
     VAR_13))
   goto drop;

  if (!FUNC_6(VAR_15, sizeof(*VAR_16) + sizeof(struct iphdr)))
   goto drop;

  VAR_21 = FUNC_9(VAR_15);
  FUNC_12(VAR_15, sizeof(*VAR_16));

  if (!FUNC_15(((void*)0), VAR_12, VAR_15))
   goto drop;

  FUNC_12(VAR_15, VAR_21);
 }

 FUNC_1(VAR_18, VAR_5);

 if (FUNC_8(VAR_15))
  goto csum_error;

 if (!FUNC_7(VAR_15, sizeof(*VAR_16)))
  goto error;

 VAR_16 = FUNC_4(VAR_15);

 FUNC_0(VAR_18, VAR_16->type);






 if (VAR_16->type > VAR_9)
  goto error;






 if (VAR_17->rt_flags & (VAR_10 | VAR_11)) {






  if ((VAR_16->type == VAR_2 ||
       VAR_16->type == VAR_6) &&
      VAR_18->ipv4.sysctl_icmp_echo_ignore_broadcasts) {
   goto error;
  }
  if (VAR_16->type != VAR_2 &&
      VAR_16->type != VAR_6 &&
      VAR_16->type != VAR_0 &&
      VAR_16->type != VAR_1) {
   goto error;
  }
 }

 VAR_19 = VAR_14[VAR_16->type].handler(VAR_15);

 if (VAR_19) {
  FUNC_2(VAR_15);
  return VAR_8;
 }

drop:
 FUNC_5(VAR_15);
 return VAR_7;
csum_error:
 FUNC_1(VAR_18, VAR_3);
error:
 FUNC_1(VAR_18, VAR_4);
 goto drop;
}
