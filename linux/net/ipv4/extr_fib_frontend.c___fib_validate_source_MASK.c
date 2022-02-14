
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int mark; } ;
struct net_device {scalar_t__ ifindex; } ;
struct net {struct net_device* loopback_dev; } ;
struct in_device {int * ifa_list; } ;
struct TYPE_3__ {scalar_t__ tun_id; } ;
struct flowi4 {scalar_t__ flowi4_oif; scalar_t__ fl4_dport; scalar_t__ fl4_sport; scalar_t__ flowi4_proto; int flowi4_mark; int flowi4_uid; scalar_t__ flowi4_flags; TYPE_1__ flowi4_tun_key; int flowi4_scope; int flowi4_tos; void* saddr; void* daddr; scalar_t__ flowi4_iif; } ;
struct flow_keys {int dummy; } ;
struct fib_result {scalar_t__ type; int fi; } ;
typedef void* __be32 ;
struct TYPE_4__ {scalar_t__ nhc_scope; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct fib_result) ;
 int FUNC_1 (struct in_device*) ;
 scalar_t__ FUNC_2 (struct in_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct net* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net*,struct sk_buff*,struct flowi4*,struct flow_keys*) ;
 int FUNC_5 (scalar_t__*,struct fib_result*) ;
 int FUNC_6 (int ,struct net_device*) ;
 scalar_t__ FUNC_7 (struct net*,struct flowi4*,struct fib_result*,int ) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net*,int *) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_8, __be32 VAR_9, __be32 VAR_10,
     u8 VAR_11, int VAR_12, struct net_device *VAR_13,
     int VAR_14, struct in_device *VAR_15, u32 *VAR_16)
{
 struct net *VAR_17 = FUNC_3(VAR_13);
 struct flow_keys VAR_18;
 int VAR_19, VAR_20;
 struct fib_result VAR_21;
 struct flowi4 VAR_22;
 bool VAR_23;

 VAR_22 = 0;
 VAR_22 = FUNC_8(VAR_13);
 if (!VAR_22)
  VAR_22 = VAR_12 ? : VAR_3;
 VAR_22 = VAR_9;
 VAR_22 = VAR_10;
 VAR_22 = VAR_11;
 VAR_22 = VAR_7;
 VAR_22 = 0;
 VAR_22 = 0;
 VAR_22 = FUNC_9(VAR_17, ((void*)0));

 VAR_20 = VAR_15->ifa_list == ((void*)0);

 VAR_22 = FUNC_2(VAR_15) ? VAR_8->mark : 0;
 if (!FUNC_4(VAR_17, VAR_8, &VAR_22, &VAR_18)) {
  VAR_22 = 0;
  VAR_22 = 0;
  VAR_22 = 0;
 }

 if (FUNC_7(VAR_17, &VAR_22, &VAR_21, 0))
  goto last_resort;
 if (VAR_21.type != VAR_5 &&
     (VAR_21.type != VAR_4 || !FUNC_1(VAR_15)))
  goto e_inval;
 FUNC_5(VAR_16, &VAR_21);

 VAR_23 = FUNC_6(VAR_21.fi, VAR_13);



 VAR_23 = VAR_23 || (VAR_21.type == VAR_4 &&
      VAR_13 == VAR_17->loopback_dev);
 if (VAR_23) {
  VAR_19 = FUNC_0(VAR_21)->nhc_scope >= VAR_6;
  return VAR_19;
 }
 if (VAR_20)
  goto last_resort;
 if (VAR_14 == 1)
  goto e_rpf;
 VAR_22 = VAR_13->ifindex;

 VAR_19 = 0;
 if (FUNC_7(VAR_17, &VAR_22, &VAR_21, VAR_2) == 0) {
  if (VAR_21.type == VAR_5)
   VAR_19 = FUNC_0(VAR_21)->nhc_scope >= VAR_6;
 }
 return VAR_19;

last_resort:
 if (VAR_14)
  goto e_rpf;
 *VAR_16 = 0;
 return 0;

e_inval:
 return -VAR_0;
e_rpf:
 return -VAR_1;
}
