
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int ack_seq; } ;
struct synproxy_options {int mss_option; int options; } ;
struct synproxy_net {TYPE_1__* stats; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int cookie_valid; int cookie_invalid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct tcphdr const*,scalar_t__) ;
 int FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct synproxy_options*) ;
 struct synproxy_net* FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*,struct sk_buff const*,struct tcphdr const*,struct synproxy_options*,int ) ;
 int FUNC_6 (int ) ;

bool
FUNC_7(struct net *VAR_2,
    const struct sk_buff *VAR_3, const struct tcphdr *VAR_4,
    struct synproxy_options *VAR_5, u32 VAR_6)
{
 struct synproxy_net *VAR_7 = FUNC_4(VAR_2);
 int VAR_8;

 VAR_8 = FUNC_0(FUNC_1(VAR_3), VAR_4, FUNC_2(VAR_4->ack_seq) - 1);
 if (VAR_8 == 0) {
  FUNC_6(VAR_7->stats->cookie_invalid);
  return 0;
 }

 FUNC_6(VAR_7->stats->cookie_valid);
 VAR_5->mss_option = VAR_8;
 VAR_5->options |= VAR_0;

 if (VAR_5->options & VAR_1)
  FUNC_3(VAR_5);

 FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return 1;
}
