
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_l2tpip {scalar_t__ l2tp_family; int l2tp_conn_id; TYPE_1__ l2tp_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct inet_sock {scalar_t__ inet_saddr; scalar_t__ inet_rcv_saddr; } ;
struct TYPE_4__ {int conn_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct net*,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct net*,scalar_t__) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int *) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 struct net* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_11, struct sockaddr *VAR_12, int VAR_13)
{
 struct inet_sock *VAR_14 = FUNC_2(VAR_11);
 struct sockaddr_l2tpip *VAR_15 = (struct sockaddr_l2tpip *) VAR_12;
 struct net *VAR_16 = FUNC_10(VAR_11);
 int VAR_17;
 int VAR_18;

 if (VAR_13 < sizeof(struct sockaddr_l2tpip))
  return -VAR_3;
 if (VAR_15->l2tp_family != VAR_0)
  return -VAR_3;

 FUNC_4(VAR_11);

 VAR_17 = -VAR_3;
 if (!FUNC_9(VAR_11, VAR_7))
  goto out;

 if (VAR_11->sk_state != VAR_8)
  goto out;

 VAR_18 = FUNC_1(VAR_16, VAR_15->l2tp_addr.s_addr);
 VAR_17 = -VAR_2;
 if (VAR_15->l2tp_addr.s_addr && VAR_18 != VAR_5 &&
     VAR_18 != VAR_6 && VAR_18 != VAR_4)
  goto out;

 if (VAR_15->l2tp_addr.s_addr)
  VAR_14->inet_rcv_saddr = VAR_14->inet_saddr = VAR_15->l2tp_addr.s_addr;
 if (VAR_18 == VAR_6 || VAR_18 == VAR_4)
  VAR_14->inet_saddr = 0;

 FUNC_12(&VAR_10);
 if (FUNC_0(VAR_16, VAR_15->l2tp_addr.s_addr, 0,
      VAR_11->sk_bound_dev_if, VAR_15->l2tp_conn_id)) {
  FUNC_13(&VAR_10);
  VAR_17 = -VAR_1;
  goto out;
 }

 FUNC_8(VAR_11);
 FUNC_3(VAR_11)->conn_id = VAR_15->l2tp_conn_id;

 FUNC_6(VAR_11, &VAR_9);
 FUNC_7(VAR_11);
 FUNC_13(&VAR_10);

 VAR_17 = 0;
 FUNC_11(VAR_11, VAR_7);

out:
 FUNC_5(VAR_11);

 return VAR_17;
}
