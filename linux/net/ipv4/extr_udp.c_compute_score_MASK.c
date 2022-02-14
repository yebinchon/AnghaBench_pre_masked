
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_rcv_saddr; scalar_t__ sk_family; int sk_incoming_cpu; int sk_bound_dev_if; } ;
struct net {int dummy; } ;
struct inet_sock {scalar_t__ inet_daddr; scalar_t__ inet_dport; } ;
typedef scalar_t__ __be32 ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {unsigned short udp_port_hash; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,struct net*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct net*,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_1, struct net *VAR_2,
    __be32 VAR_3, __be16 VAR_4,
    __be32 VAR_5, unsigned short VAR_6,
    int VAR_7, int VAR_8)
{
 int VAR_9;
 struct inet_sock *VAR_10;
 bool VAR_11;

 if (!FUNC_3(FUNC_5(VAR_1), VAR_2) ||
     FUNC_6(VAR_1)->udp_port_hash != VAR_6 ||
     FUNC_2(VAR_1))
  return -1;

 if (VAR_1->sk_rcv_saddr != VAR_5)
  return -1;

 VAR_9 = (VAR_1->sk_family == VAR_0) ? 2 : 1;

 VAR_10 = FUNC_1(VAR_1);
 if (VAR_10->inet_daddr) {
  if (VAR_10->inet_daddr != VAR_3)
   return -1;
  VAR_9 += 4;
 }

 if (VAR_10->inet_dport) {
  if (VAR_10->inet_dport != VAR_4)
   return -1;
  VAR_9 += 4;
 }

 VAR_11 = FUNC_7(VAR_2, VAR_1->sk_bound_dev_if,
     VAR_7, VAR_8);
 if (!VAR_11)
  return -1;
 VAR_9 += 4;

 if (FUNC_0(VAR_1->sk_incoming_cpu) == FUNC_4())
  VAR_9++;
 return VAR_9;
}
