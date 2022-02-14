
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nf_nat_hook {scalar_t__ (* manip_pkt ) (struct sk_buff*,struct nf_conn*,int ,size_t) ;} ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct TYPE_28__ {int all; } ;
struct TYPE_26__ {int all; } ;
struct TYPE_15__ {TYPE_9__ u; TYPE_7__ u3; } ;
struct TYPE_22__ {int all; } ;
struct TYPE_20__ {int all; } ;
struct TYPE_23__ {TYPE_3__ u; TYPE_1__ u3; } ;
struct nf_conntrack_tuple {TYPE_10__ dst; TYPE_4__ src; } ;
struct nf_conn {int status; TYPE_14__* tuplehash; } ;
struct net {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
struct TYPE_27__ {int all; } ;
struct TYPE_24__ {int all; } ;
struct TYPE_21__ {int all; } ;
struct TYPE_25__ {TYPE_5__ u; TYPE_2__ u3; } ;
struct TYPE_16__ {int all; } ;
struct TYPE_17__ {TYPE_11__ u; TYPE_8__ u3; } ;
struct TYPE_18__ {TYPE_12__ dst; TYPE_6__ src; } ;
struct TYPE_19__ {TYPE_13__ tuple; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 struct nf_conntrack_tuple_hash* FUNC_2 (struct net*,int ,struct nf_conntrack_tuple*) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (struct sk_buff*,int ,int,int ,int ,struct net*,struct nf_conntrack_tuple*) ;
 scalar_t__ FUNC_5 (struct nf_conn*) ;
 int FUNC_6 (struct nf_conn*) ;
 int FUNC_7 (struct nf_conn*) ;
 int FUNC_8 (struct sk_buff*,struct nf_conn*,int) ;
 struct nf_conn* FUNC_9 (struct nf_conntrack_tuple_hash*) ;
 int FUNC_10 (struct nf_conn*) ;
 int VAR_6 ;
 struct nf_nat_hook* FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,struct nf_conn*,int ,size_t) ;
 scalar_t__ FUNC_14 (struct sk_buff*,struct nf_conn*,int ,size_t) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_7, struct sk_buff *VAR_8)
{
 struct nf_conntrack_tuple_hash *VAR_9;
 struct nf_conntrack_tuple VAR_10;
 enum ip_conntrack_info VAR_11;
 struct nf_nat_hook *VAR_12;
 unsigned int VAR_13;
 struct nf_conn *VAR_14;
 int VAR_15;
 u16 VAR_16;
 u8 VAR_17;

 VAR_14 = FUNC_3(VAR_8, &VAR_11);
 if (!VAR_14 || FUNC_5(VAR_14))
  return 0;

 VAR_16 = FUNC_6(VAR_14);

 VAR_15 = FUNC_0(VAR_8, FUNC_12(VAR_8), VAR_16, &VAR_17);
 if (VAR_15 <= 0)
  return -1;

 if (!FUNC_4(VAR_8, FUNC_12(VAR_8), VAR_15, VAR_16,
        VAR_17, VAR_7, &VAR_10))
  return -1;

 if (VAR_14->status & VAR_1) {
  FUNC_1(VAR_10.src.u3.all,
         VAR_14->tuplehash[VAR_2].tuple.src.u3.all,
         sizeof(VAR_10.src.u3.all));
  VAR_10.src.u.all =
   VAR_14->tuplehash[VAR_2].tuple.src.u.all;
 }

 if (VAR_14->status & VAR_0) {
  FUNC_1(VAR_10.dst.u3.all,
         VAR_14->tuplehash[VAR_2].tuple.dst.u3.all,
         sizeof(VAR_10.dst.u3.all));
  VAR_10.dst.u.all =
   VAR_14->tuplehash[VAR_2].tuple.dst.u.all;
 }

 VAR_9 = FUNC_2(VAR_7, FUNC_10(VAR_14), &VAR_10);
 if (!VAR_9)
  return 0;




 VAR_13 = VAR_14->status;

 FUNC_7(VAR_14);
 VAR_14 = FUNC_9(VAR_9);
 FUNC_8(VAR_8, VAR_14, VAR_11);

 VAR_12 = FUNC_11(VAR_6);
 if (!VAR_12)
  return 0;

 if (VAR_13 & VAR_1 &&
     VAR_12->manip_pkt(VAR_8, VAR_14, VAR_5,
    VAR_2) == VAR_3)
  return -1;

 if (VAR_13 & VAR_0 &&
     VAR_12->manip_pkt(VAR_8, VAR_14, VAR_4,
    VAR_2) == VAR_3)
  return -1;

 return 0;
}
