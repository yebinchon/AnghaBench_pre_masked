
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_addr; scalar_t__ sin6_scope_id; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_v6_rcv_saddr; scalar_t__ sk_bound_dev_if; } ;
struct net_device {int dummy; } ;
struct ipv6_pinfo {int saddr; } ;
struct inet_sock {int inet_saddr; int inet_rcv_saddr; } ;
typedef int __be32 ;
struct TYPE_6__ {int ip_nonlocal_bind; } ;
struct TYPE_7__ {TYPE_1__ sysctl; } ;
struct TYPE_8__ {TYPE_2__ ipv6; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 struct net_device* FUNC_1 (TYPE_3__*,scalar_t__) ;
 struct ipv6_pinfo* FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *,struct net_device*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sock*) ;
 TYPE_3__* FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_10, struct sockaddr *VAR_11, int VAR_12)
{
 struct inet_sock *VAR_13 = FUNC_3(VAR_10);
 struct ipv6_pinfo *VAR_14 = FUNC_2(VAR_10);
 struct sockaddr_in6 *VAR_15 = (struct sockaddr_in6 *) VAR_11;
 __be32 VAR_16 = 0;
 int VAR_17;
 int VAR_18;

 if (VAR_12 < VAR_8)
  return -VAR_2;

 if (VAR_15->sin6_family != VAR_0)
  return -VAR_2;

 VAR_17 = FUNC_4(&VAR_15->sin6_addr);


 if (VAR_17 == VAR_5)
  return -VAR_1;

 FUNC_6(VAR_10);

 VAR_18 = -VAR_2;
 if (VAR_10->sk_state != VAR_9)
  goto out;

 FUNC_7();

 if (VAR_17 != VAR_4) {
  struct net_device *VAR_19 = ((void*)0);

  if (FUNC_0(VAR_17)) {
   if (VAR_12 >= sizeof(struct sockaddr_in6) &&
       VAR_15->sin6_scope_id) {



    VAR_10->sk_bound_dev_if = VAR_15->sin6_scope_id;
   }


   if (!VAR_10->sk_bound_dev_if)
    goto out_unlock;
  }

  if (VAR_10->sk_bound_dev_if) {
   VAR_18 = -VAR_3;
   VAR_19 = FUNC_1(FUNC_10(VAR_10),
         VAR_10->sk_bound_dev_if);
   if (!VAR_19)
    goto out_unlock;
  }




  VAR_16 = VAR_7;
  if (!(VAR_17 & VAR_6) &&
      !FUNC_10(VAR_10)->ipv6.sysctl.ip_nonlocal_bind) {
   VAR_18 = -VAR_1;
   if (!FUNC_5(FUNC_10(VAR_10), &VAR_15->sin6_addr,
        VAR_19, 0)) {
    goto out_unlock;
   }
  }
 }

 VAR_13->inet_rcv_saddr = VAR_13->inet_saddr = VAR_16;
 VAR_10->sk_v6_rcv_saddr = VAR_15->sin6_addr;
 if (!(VAR_17 & VAR_6))
  VAR_14->saddr = VAR_15->sin6_addr;
 VAR_18 = 0;
out_unlock:
 FUNC_8();
out:
 FUNC_9(VAR_10);
 return VAR_18;
}
