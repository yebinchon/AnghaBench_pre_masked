
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_port; TYPE_4__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bound_dev_if; int sk_state; TYPE_5__* sk_prot; int sk_protocol; } ;
struct rtable {int rt_flags; int dst; } ;
struct flowi4 {int daddr; scalar_t__ saddr; } ;
struct TYPE_6__ {struct flowi4 ip4; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_2__ fl; } ;
struct inet_sock {int mc_index; int inet_id; int inet_dport; int inet_daddr; scalar_t__ inet_rcv_saddr; scalar_t__ inet_saddr; int inet_sport; TYPE_3__ cork; scalar_t__ mc_addr; } ;
typedef scalar_t__ __be32 ;
struct TYPE_10__ {int (* rehash ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct rtable*) ;
 int VAR_6 ;
 int FUNC_3 (struct sock*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 struct rtable* FUNC_5 (struct flowi4*,int ,scalar_t__,int ,int,int ,int ,int ,struct sock*) ;
 int FUNC_6 (struct rtable*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sock*,int) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int *) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;

int FUNC_17(struct sock *VAR_9, struct sockaddr *VAR_10, int VAR_11)
{
 struct inet_sock *VAR_12 = FUNC_4(VAR_9);
 struct sockaddr_in *VAR_13 = (struct sockaddr_in *) VAR_10;
 struct flowi4 *VAR_14;
 struct rtable *VAR_15;
 __be32 VAR_16;
 int VAR_17;
 int VAR_18;


 if (VAR_11 < sizeof(*VAR_13))
  return -VAR_3;

 if (VAR_13->sin_family != VAR_0)
  return -VAR_2;

 FUNC_11(VAR_9);

 VAR_17 = VAR_9->sk_bound_dev_if;
 VAR_16 = VAR_12->inet_saddr;
 if (FUNC_7(VAR_13->sin_addr.s_addr)) {
  if (!VAR_17 || FUNC_8(FUNC_15(VAR_9), VAR_17))
   VAR_17 = VAR_12->mc_index;
  if (!VAR_16)
   VAR_16 = VAR_12->mc_addr;
 }
 VAR_14 = &VAR_12->cork.fl.u.ip4;
 VAR_15 = FUNC_5(VAR_14, VAR_13->sin_addr.s_addr, VAR_16,
         FUNC_3(VAR_9), VAR_17,
         VAR_9->sk_protocol,
         VAR_12->inet_sport, VAR_13->sin_port, VAR_9);
 if (FUNC_1(VAR_15)) {
  VAR_18 = FUNC_2(VAR_15);
  if (VAR_18 == -VAR_4)
   FUNC_0(FUNC_15(VAR_9), VAR_5);
  goto out;
 }

 if ((VAR_15->rt_flags & VAR_6) && !FUNC_14(VAR_9, VAR_7)) {
  FUNC_6(VAR_15);
  VAR_18 = -VAR_1;
  goto out;
 }
 if (!VAR_12->inet_saddr)
  VAR_12->inet_saddr = VAR_14->saddr;
 if (!VAR_12->inet_rcv_saddr) {
  VAR_12->inet_rcv_saddr = VAR_14->saddr;
  if (VAR_9->sk_prot->rehash)
   VAR_9->sk_prot->rehash(VAR_9);
 }
 VAR_12->inet_daddr = VAR_14->daddr;
 VAR_12->inet_dport = VAR_13->sin_port;
 FUNC_10(VAR_9, 1);
 VAR_9->sk_state = VAR_8;
 FUNC_13(VAR_9);
 VAR_12->inet_id = FUNC_9();

 FUNC_12(VAR_9, &VAR_15->dst);
 VAR_18 = 0;
out:
 return VAR_18;
}
