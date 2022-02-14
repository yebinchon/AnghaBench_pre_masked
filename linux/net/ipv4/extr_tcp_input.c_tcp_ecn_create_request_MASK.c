
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {scalar_t__ res1; scalar_t__ cwr; scalar_t__ ece; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ sysctl_tcp_ecn; } ;
struct net {TYPE_1__ ipv4; } ;
struct dst_entry {int dummy; } ;
struct TYPE_6__ {int ip_dsfield; } ;
struct TYPE_5__ {int ecn_ok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct dst_entry const*,int ) ;
 TYPE_2__* FUNC_3 (struct request_sock*) ;
 struct net* FUNC_4 (struct sock const*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock const*) ;
 struct tcphdr* FUNC_7 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_8(struct request_sock *VAR_2,
       const struct sk_buff *VAR_3,
       const struct sock *VAR_4,
       const struct dst_entry *VAR_5)
{
 const struct tcphdr *VAR_6 = FUNC_7(VAR_3);
 const struct net *VAR_7 = FUNC_4(VAR_4);
 bool VAR_8 = VAR_6->ece && VAR_6->cwr;
 bool VAR_9, VAR_10;
 u32 VAR_11;

 if (!VAR_8)
  return;

 VAR_9 = !FUNC_0(FUNC_1(VAR_3)->ip_dsfield);
 VAR_11 = FUNC_2(VAR_5, VAR_1);
 VAR_10 = VAR_7->ipv4.sysctl_tcp_ecn || VAR_11;

 if (((!VAR_9 || VAR_6->res1) && VAR_10) || FUNC_6(VAR_4) ||
     (VAR_11 & VAR_0) ||
     FUNC_5((struct sock *)VAR_2))
  FUNC_3(VAR_2)->ecn_ok = 1;
}
