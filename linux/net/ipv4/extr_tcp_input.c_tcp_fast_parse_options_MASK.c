
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int doff; } ;
struct TYPE_2__ {scalar_t__ rcv_tsecr; scalar_t__ saw_tstamp; scalar_t__ tstamp_ok; } ;
struct tcp_sock {scalar_t__ tsoffset; TYPE_1__ rx_opt; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcp_sock*,struct tcphdr const*) ;
 int FUNC_1 (struct net const*,struct sk_buff const*,TYPE_1__*,int,int *) ;

__attribute__((used)) static bool FUNC_2(const struct net *VAR_1,
       const struct sk_buff *VAR_2,
       const struct tcphdr *VAR_3, struct tcp_sock *VAR_4)
{



 if (VAR_3->doff == (sizeof(*VAR_3) / 4)) {
  VAR_4->rx_opt.saw_tstamp = 0;
  return 0;
 } else if (VAR_4->rx_opt.tstamp_ok &&
     VAR_3->doff == ((sizeof(*VAR_3) + VAR_0) / 4)) {
  if (FUNC_0(VAR_4, VAR_3))
   return 1;
 }

 FUNC_1(VAR_1, VAR_2, &VAR_4->rx_opt, 1, ((void*)0));
 if (VAR_4->rx_opt.saw_tstamp && VAR_4->rx_opt.rcv_tsecr)
  VAR_4->rx_opt.rcv_tsecr -= VAR_4->tsoffset;

 return 1;
}
