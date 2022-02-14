
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_userlocks; TYPE_2__* sk_prot; int sk_bound_dev_if; } ;
struct net {int user_ns; } ;
struct inet_sock {scalar_t__ inet_rcv_saddr; scalar_t__ inet_saddr; scalar_t__ inet_dport; scalar_t__ inet_daddr; scalar_t__ inet_num; int inet_sport; scalar_t__ bind_address_no_port; } ;
struct TYPE_4__ {scalar_t__ (* get_port ) (struct sock*,unsigned short) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net*,scalar_t__,int ) ;
 int FUNC_4 (struct net*,struct inet_sock*) ;
 unsigned short FUNC_5 (struct net*) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct net*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,int ) ;
 unsigned short FUNC_10 (int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 struct net* FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (struct sock*,unsigned short) ;

int FUNC_15(struct sock *VAR_16, struct sockaddr *VAR_17, int VAR_18,
  bool VAR_19, bool VAR_20)
{
 struct sockaddr_in *VAR_21 = (struct sockaddr_in *)VAR_17;
 struct inet_sock *VAR_22 = FUNC_6(VAR_16);
 struct net *VAR_23 = FUNC_13(VAR_16);
 unsigned short VAR_24;
 int VAR_25;
 u32 VAR_26 = VAR_12;
 int VAR_27;

 if (VAR_21->sin_family != VAR_0) {



  VAR_27 = -VAR_6;
  if (VAR_21->sin_family != VAR_1 ||
      VAR_21->sin_addr.s_addr != FUNC_1(VAR_8))
   goto out;
 }

 VAR_26 = FUNC_7(VAR_23, VAR_16->sk_bound_dev_if) ? : VAR_26;
 VAR_25 = FUNC_3(VAR_23, VAR_21->sin_addr.s_addr, VAR_26);
 VAR_27 = -VAR_5;
 if (!FUNC_4(VAR_23, VAR_22) &&
     VAR_21->sin_addr.s_addr != FUNC_1(VAR_8) &&
     VAR_25 != VAR_10 &&
     VAR_25 != VAR_11 &&
     VAR_25 != VAR_9)
  goto out;

 VAR_24 = FUNC_10(VAR_21->sin_port);
 VAR_27 = -VAR_3;
 if (VAR_24 && VAR_24 < FUNC_5(VAR_23) &&
     !FUNC_9(VAR_23->user_ns, VAR_2))
  goto out;
 if (VAR_20)
  FUNC_8(VAR_16);


 VAR_27 = -VAR_7;
 if (VAR_16->sk_state != VAR_15 || VAR_22->inet_num)
  goto out_release_sock;

 VAR_22->inet_rcv_saddr = VAR_22->inet_saddr = VAR_21->sin_addr.s_addr;
 if (VAR_25 == VAR_11 || VAR_25 == VAR_9)
  VAR_22->inet_saddr = 0;


 if (VAR_24 || !(VAR_22->bind_address_no_port ||
        VAR_19)) {
  if (VAR_16->sk_prot->get_port(VAR_16, VAR_24)) {
   VAR_22->inet_saddr = VAR_22->inet_rcv_saddr = 0;
   VAR_27 = -VAR_4;
   goto out_release_sock;
  }
  VAR_27 = FUNC_0(VAR_16);
  if (VAR_27) {
   VAR_22->inet_saddr = VAR_22->inet_rcv_saddr = 0;
   goto out_release_sock;
  }
 }

 if (VAR_22->inet_rcv_saddr)
  VAR_16->sk_userlocks |= VAR_13;
 if (VAR_24)
  VAR_16->sk_userlocks |= VAR_14;
 VAR_22->inet_sport = FUNC_2(VAR_22->inet_num);
 VAR_22->inet_daddr = 0;
 VAR_22->inet_dport = 0;
 FUNC_12(VAR_16);
 VAR_27 = 0;
out_release_sock:
 if (VAR_20)
  FUNC_11(VAR_16);
out:
 return VAR_27;
}
