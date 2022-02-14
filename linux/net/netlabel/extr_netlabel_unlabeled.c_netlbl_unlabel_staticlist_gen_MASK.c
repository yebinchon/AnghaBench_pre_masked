
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct netlbl_unlhsh_walk_arg {int skb; int seq; TYPE_1__* nl_cb; } ;
struct netlbl_unlhsh_iface {scalar_t__ ifindex; } ;
struct TYPE_7__ {int mask; int addr; } ;
struct netlbl_unlhsh_addr6 {int secid; TYPE_3__ list; } ;
struct TYPE_6__ {int mask; int addr; } ;
struct netlbl_unlhsh_addr4 {int secid; TYPE_2__ list; } ;
struct net_device {int name; } ;
struct in_addr {int s_addr; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_5__ {int skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct net_device* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*) ;
 void* FUNC_5 (int ,int ,int ,int *,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,char**,int *) ;

__attribute__((used)) static int FUNC_12(u32 VAR_11,
           const struct netlbl_unlhsh_iface *VAR_12,
           const struct netlbl_unlhsh_addr4 *VAR_13,
           const struct netlbl_unlhsh_addr6 *VAR_14,
           void *VAR_15)
{
 int VAR_16 = -VAR_1;
 struct netlbl_unlhsh_walk_arg *VAR_17 = VAR_15;
 struct net_device *VAR_18;
 void *VAR_19;
 u32 VAR_20;
 char *VAR_21;
 u32 VAR_22;

 VAR_19 = FUNC_5(VAR_17->skb, FUNC_0(VAR_17->nl_cb->skb).portid,
      VAR_17->seq, &VAR_10,
      VAR_8, VAR_11);
 if (VAR_19 == ((void*)0))
  goto list_cb_failure;

 if (VAR_12->ifindex > 0) {
  VAR_18 = FUNC_1(&VAR_9, VAR_12->ifindex);
  if (!VAR_18) {
   VAR_16 = -VAR_0;
   goto list_cb_failure;
  }
  VAR_16 = FUNC_9(VAR_17->skb,
      VAR_2, VAR_18->name);
  FUNC_2(VAR_18);
  if (VAR_16 != 0)
   goto list_cb_failure;
 }

 if (VAR_13) {
  struct in_addr VAR_23;

  VAR_23.s_addr = VAR_13->list.addr;
  VAR_16 = FUNC_8(VAR_17->skb,
       VAR_3,
       VAR_23.s_addr);
  if (VAR_16 != 0)
   goto list_cb_failure;

  VAR_23.s_addr = VAR_13->list.mask;
  VAR_16 = FUNC_8(VAR_17->skb,
       VAR_4,
       VAR_23.s_addr);
  if (VAR_16 != 0)
   goto list_cb_failure;

  VAR_20 = VAR_13->secid;
 } else {
  VAR_16 = FUNC_7(VAR_17->skb,
        VAR_5,
        &VAR_14->list.addr);
  if (VAR_16 != 0)
   goto list_cb_failure;

  VAR_16 = FUNC_7(VAR_17->skb,
        VAR_6,
        &VAR_14->list.mask);
  if (VAR_16 != 0)
   goto list_cb_failure;

  VAR_20 = VAR_14->secid;
 }

 VAR_16 = FUNC_11(VAR_20, &VAR_21, &VAR_22);
 if (VAR_16 != 0)
  goto list_cb_failure;
 VAR_16 = FUNC_6(VAR_17->skb,
     VAR_7,
     VAR_22,
     VAR_21);
 FUNC_10(VAR_21, VAR_22);
 if (VAR_16 != 0)
  goto list_cb_failure;

 VAR_17->seq++;
 FUNC_4(VAR_17->skb, VAR_19);
 return 0;

list_cb_failure:
 FUNC_3(VAR_17->skb, VAR_19);
 return VAR_16;
}
