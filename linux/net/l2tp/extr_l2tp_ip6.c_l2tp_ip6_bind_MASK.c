
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_l2tpip6 {scalar_t__ l2tp_family; int l2tp_scope_id; int l2tp_conn_id; int l2tp_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_bound_dev_if; int sk_v6_rcv_saddr; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {int saddr; } ;
struct inet_sock {void* inet_rcv_saddr; void* inet_saddr; } ;
typedef void* __be32 ;
struct TYPE_2__ {int conn_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (struct net*,int *,int *,int,int ) ;
 struct net_device* FUNC_1 (struct net*,int) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net*,int *,struct net_device*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int *) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int ) ;
 struct net* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_14, struct sockaddr *VAR_15, int VAR_16)
{
 struct inet_sock *VAR_17 = FUNC_3(VAR_14);
 struct ipv6_pinfo *VAR_18 = FUNC_2(VAR_14);
 struct sockaddr_l2tpip6 *VAR_19 = (struct sockaddr_l2tpip6 *) VAR_15;
 struct net *VAR_20 = FUNC_14(VAR_14);
 __be32 VAR_21 = 0;
 int VAR_22;
 int VAR_23;
 int VAR_24;

 if (VAR_19->l2tp_family != VAR_0)
  return -VAR_3;
 if (VAR_16 < sizeof(*VAR_19))
  return -VAR_3;

 VAR_23 = FUNC_4(&VAR_19->l2tp_addr);


 if (VAR_23 == VAR_7)
  return -VAR_2;


 if (VAR_23 & VAR_8)
  return -VAR_2;

 FUNC_7(VAR_14);

 VAR_24 = -VAR_3;
 if (!FUNC_13(VAR_14, VAR_10))
  goto out_unlock;

 if (VAR_14->sk_state != VAR_11)
  goto out_unlock;

 VAR_22 = VAR_14->sk_bound_dev_if;


 FUNC_8();
 if (VAR_23 != VAR_5) {
  struct net_device *VAR_25 = ((void*)0);

  if (VAR_23 & VAR_6) {
   if (VAR_19->l2tp_scope_id)
    VAR_22 = VAR_19->l2tp_scope_id;




   if (!VAR_22)
    goto out_unlock_rcu;

   VAR_24 = -VAR_4;
   VAR_25 = FUNC_1(FUNC_14(VAR_14), VAR_22);
   if (!VAR_25)
    goto out_unlock_rcu;
  }




  VAR_21 = VAR_9;
  VAR_24 = -VAR_2;
  if (!FUNC_5(FUNC_14(VAR_14), &VAR_19->l2tp_addr, VAR_25, 0))
   goto out_unlock_rcu;
 }
 FUNC_9();

 FUNC_16(&VAR_13);
 if (FUNC_0(VAR_20, &VAR_19->l2tp_addr, ((void*)0), VAR_22,
       VAR_19->l2tp_conn_id)) {
  FUNC_17(&VAR_13);
  VAR_24 = -VAR_1;
  goto out_unlock;
 }

 VAR_17->inet_saddr = VAR_21;
 VAR_17->inet_rcv_saddr = VAR_21;
 VAR_14->sk_bound_dev_if = VAR_22;
 VAR_14->sk_v6_rcv_saddr = VAR_19->l2tp_addr;
 VAR_18->saddr = VAR_19->l2tp_addr;

 FUNC_6(VAR_14)->conn_id = VAR_19->l2tp_conn_id;

 FUNC_11(VAR_14, &VAR_12);
 FUNC_12(VAR_14);
 FUNC_17(&VAR_13);

 FUNC_15(VAR_14, VAR_10);
 FUNC_10(VAR_14);
 return 0;

out_unlock_rcu:
 FUNC_9();
out_unlock:
 FUNC_10(VAR_14);

 return VAR_24;
}
