
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct inet_sock {scalar_t__ inet_daddr; scalar_t__ inet_dport; scalar_t__ inet_rcv_saddr; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {unsigned short udp_port_hash; } ;


 struct inet_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,struct net*) ;
 int FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct net*,int ,int,int) ;

__attribute__((used)) static inline bool FUNC_7(struct net *VAR_0, struct sock *VAR_1,
           __be16 VAR_2, __be32 VAR_3,
           __be16 VAR_4, __be32 VAR_5,
           int VAR_6, int VAR_7, unsigned short VAR_8)
{
 struct inet_sock *VAR_9 = FUNC_0(VAR_1);

 if (!FUNC_3(FUNC_4(VAR_1), VAR_0) ||
     FUNC_5(VAR_1)->udp_port_hash != VAR_8 ||
     (VAR_9->inet_daddr && VAR_9->inet_daddr != VAR_5) ||
     (VAR_9->inet_dport != VAR_4 && VAR_9->inet_dport) ||
     (VAR_9->inet_rcv_saddr && VAR_9->inet_rcv_saddr != VAR_3) ||
     FUNC_2(VAR_1) ||
     !FUNC_6(VAR_0, VAR_1->sk_bound_dev_if, VAR_6, VAR_7))
  return 0;
 if (!FUNC_1(VAR_1, VAR_3, VAR_5, VAR_6, VAR_7))
  return 0;
 return 1;
}
