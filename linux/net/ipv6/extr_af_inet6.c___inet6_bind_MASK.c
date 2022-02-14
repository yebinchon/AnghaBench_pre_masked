
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void** s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; TYPE_2__ sin6_addr; scalar_t__ sin6_scope_id; int sin6_port; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int sk_ipv6only; int sk_userlocks; TYPE_1__* sk_prot; TYPE_2__ sk_v6_rcv_saddr; scalar_t__ sk_bound_dev_if; } ;
struct net_device {int dummy; } ;
struct net {int user_ns; } ;
struct ipv6_pinfo {TYPE_2__ saddr; } ;
struct inet_sock {scalar_t__ inet_daddr; scalar_t__ inet_dport; scalar_t__ inet_num; int inet_sport; scalar_t__ bind_address_no_port; void* inet_saddr; void* inet_rcv_saddr; } ;
typedef void* __be32 ;
struct TYPE_4__ {scalar_t__ (* get_port ) (struct sock*,unsigned short) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct net*,struct net_device*,void*) ;
 int FUNC_7 (struct net*,struct inet_sock*) ;
 unsigned short FUNC_8 (struct net*) ;
 int FUNC_9 (struct sock*) ;
 struct inet_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct net*,struct inet_sock*) ;
 int FUNC_13 (struct net*,TYPE_2__*,struct net_device*,int ) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int ,int ) ;
 unsigned short FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (struct sock*) ;
 struct net* FUNC_20 (struct sock*) ;
 scalar_t__ FUNC_21 (struct sock*,unsigned short) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_20, struct sockaddr *VAR_21, int VAR_22,
   bool VAR_23, bool VAR_24)
{
 struct sockaddr_in6 *VAR_25 = (struct sockaddr_in6 *)VAR_21;
 struct inet_sock *VAR_26 = FUNC_10(VAR_20);
 struct ipv6_pinfo *VAR_27 = FUNC_5(VAR_20);
 struct net *VAR_28 = FUNC_20(VAR_20);
 __be32 VAR_29 = 0;
 unsigned short VAR_30;
 bool VAR_31;
 int VAR_32 = 0;
 int VAR_33 = 0;

 if (VAR_25->sin6_family != VAR_0)
  return -VAR_5;

 VAR_32 = FUNC_11(&VAR_25->sin6_addr);
 if ((VAR_32 & VAR_11) && VAR_20->sk_type == VAR_18)
  return -VAR_6;

 VAR_30 = FUNC_16(VAR_25->sin6_port);
 if (VAR_30 && VAR_30 < FUNC_8(VAR_28) &&
     !FUNC_15(VAR_28->user_ns, VAR_1))
  return -VAR_2;

 if (VAR_24)
  FUNC_14(VAR_20);


 if (VAR_20->sk_state != VAR_19 || VAR_26->inet_num) {
  VAR_33 = -VAR_6;
  goto out;
 }


 if (VAR_32 == VAR_10) {
  struct net_device *VAR_34 = ((void*)0);
  int VAR_35;




  if (VAR_20->sk_ipv6only) {
   VAR_33 = -VAR_6;
   goto out;
  }

  FUNC_17();
  if (VAR_20->sk_bound_dev_if) {
   VAR_34 = FUNC_2(VAR_28, VAR_20->sk_bound_dev_if);
   if (!VAR_34) {
    VAR_33 = -VAR_7;
    goto out_unlock;
   }
  }


  VAR_29 = VAR_25->sin6_addr.s6_addr32[3];
  VAR_35 = FUNC_6(VAR_28, VAR_34, VAR_29);
  FUNC_18();

  if (!FUNC_7(VAR_28, VAR_26) &&
      VAR_29 != FUNC_3(VAR_8) &&
      VAR_35 != VAR_14 &&
      VAR_35 != VAR_15 &&
      VAR_35 != VAR_13) {
   VAR_33 = -VAR_4;
   goto out;
  }
 } else {
  if (VAR_32 != VAR_9) {
   struct net_device *VAR_36 = ((void*)0);

   FUNC_17();
   if (FUNC_1(VAR_32)) {
    if (VAR_22 >= sizeof(struct sockaddr_in6) &&
        VAR_25->sin6_scope_id) {



     VAR_20->sk_bound_dev_if = VAR_25->sin6_scope_id;
    }


    if (!VAR_20->sk_bound_dev_if) {
     VAR_33 = -VAR_6;
     goto out_unlock;
    }
   }

   if (VAR_20->sk_bound_dev_if) {
    VAR_36 = FUNC_2(VAR_28, VAR_20->sk_bound_dev_if);
    if (!VAR_36) {
     VAR_33 = -VAR_7;
     goto out_unlock;
    }
   }




   VAR_29 = VAR_12;
   if (!(VAR_32 & VAR_11)) {
    if (!FUNC_12(VAR_28, VAR_26) &&
        !FUNC_13(VAR_28, &VAR_25->sin6_addr,
         VAR_36, 0)) {
     VAR_33 = -VAR_4;
     goto out_unlock;
    }
   }
   FUNC_18();
  }
 }

 VAR_26->inet_rcv_saddr = VAR_29;
 VAR_26->inet_saddr = VAR_29;

 VAR_20->sk_v6_rcv_saddr = VAR_25->sin6_addr;

 if (!(VAR_32 & VAR_11))
  VAR_27->saddr = VAR_25->sin6_addr;

 VAR_31 = VAR_20->sk_ipv6only;
 if (VAR_32 != VAR_9 && VAR_32 != VAR_10)
  VAR_20->sk_ipv6only = 1;


 if (VAR_30 || !(VAR_26->bind_address_no_port ||
        VAR_23)) {
  if (VAR_20->sk_prot->get_port(VAR_20, VAR_30)) {
   VAR_20->sk_ipv6only = VAR_31;
   FUNC_9(VAR_20);
   VAR_33 = -VAR_3;
   goto out;
  }
  VAR_33 = FUNC_0(VAR_20);
  if (VAR_33) {
   VAR_20->sk_ipv6only = VAR_31;
   FUNC_9(VAR_20);
   goto out;
  }
 }

 if (VAR_32 != VAR_9)
  VAR_20->sk_userlocks |= VAR_16;
 if (VAR_30)
  VAR_20->sk_userlocks |= VAR_17;
 VAR_26->inet_sport = FUNC_4(VAR_26->inet_num);
 VAR_26->inet_dport = 0;
 VAR_26->inet_daddr = 0;
out:
 if (VAR_24)
  FUNC_19(VAR_20);
 return VAR_33;
out_unlock:
 FUNC_18();
 goto out;
}
