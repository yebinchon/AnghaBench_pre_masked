
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_4__ {int pgn; int addr; int name; } ;
struct TYPE_5__ {TYPE_1__ j1939; } ;
struct sockaddr_can {TYPE_2__ can_addr; int can_ifindex; int can_family; } ;
struct sock {int dummy; } ;
struct sk_buff {size_t len; int skb_iif; int data; } ;
struct msghdr {int msg_flags; int msg_namelen; struct sockaddr_can* msg_name; } ;
struct TYPE_6__ {int pgn; int sa; int src_name; scalar_t__ dst_name; scalar_t__ da; } ;
struct j1939_sk_buff_cb {int msg_flags; TYPE_3__ addr; scalar_t__ priority; } ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct j1939_sk_buff_cb* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct msghdr*,int ,size_t) ;
 int FUNC_3 (struct sockaddr_can*,int ,int ) ;
 int FUNC_4 (struct msghdr*,int ,int ,int,scalar_t__*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sock*,int,int ,int*) ;
 int FUNC_7 (struct sock*,struct msghdr*,size_t,int ,int ) ;
 int FUNC_8 (struct msghdr*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_11, struct msghdr *VAR_12,
       size_t VAR_13, int VAR_14)
{
 struct sock *VAR_15 = VAR_11->sk;
 struct sk_buff *VAR_16;
 struct j1939_sk_buff_cb *VAR_17;
 int VAR_18 = 0;

 if (VAR_14 & ~(VAR_3 | VAR_4))
  return -VAR_1;

 if (VAR_14 & VAR_4)
  return FUNC_7(VAR_11->sk, VAR_12, VAR_13, VAR_10,
       VAR_8);

 VAR_16 = FUNC_6(VAR_15, VAR_14, 0, &VAR_18);
 if (!VAR_16)
  return VAR_18;

 if (VAR_13 < VAR_16->len)
  VAR_12->msg_flags |= VAR_5;
 else
  VAR_13 = VAR_16->len;

 VAR_18 = FUNC_2(VAR_12, VAR_16->data, VAR_13);
 if (VAR_18 < 0) {
  FUNC_5(VAR_15, VAR_16);
  return VAR_18;
 }

 VAR_17 = FUNC_1(VAR_16);
 if (FUNC_0(VAR_17->addr.da))
  FUNC_4(VAR_12, VAR_10, VAR_6,
    sizeof(VAR_17->addr.da), &VAR_17->addr.da);

 if (VAR_17->addr.dst_name)
  FUNC_4(VAR_12, VAR_10, VAR_7,
    sizeof(VAR_17->addr.dst_name), &VAR_17->addr.dst_name);

 FUNC_4(VAR_12, VAR_10, VAR_9,
   sizeof(VAR_17->priority), &VAR_17->priority);

 if (VAR_12->msg_name) {
  struct sockaddr_can *VAR_19 = VAR_12->msg_name;

  VAR_12->msg_namelen = VAR_2;
  FUNC_3(VAR_12->msg_name, 0, VAR_12->msg_namelen);
  VAR_19->can_family = VAR_0;
  VAR_19->can_ifindex = VAR_16->skb_iif;
  VAR_19->can_addr.j1939.name = VAR_17->addr.src_name;
  VAR_19->can_addr.j1939.addr = VAR_17->addr.sa;
  VAR_19->can_addr.j1939.pgn = VAR_17->addr.pgn;
 }

 FUNC_8(VAR_12, VAR_15, VAR_16);
 VAR_12->msg_flags |= VAR_17->msg_flags;
 FUNC_5(VAR_15, VAR_16);

 return VAR_13;
}
