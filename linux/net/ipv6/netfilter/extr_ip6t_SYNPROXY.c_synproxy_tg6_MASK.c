
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_synproxy_info {int options; int mss; } ;
struct xt_action_param {int thoff; struct xt_synproxy_info* targinfo; } ;
struct tcphdr {int seq; scalar_t__ syn; scalar_t__ rst; scalar_t__ fin; scalar_t__ ack; scalar_t__ cwr; scalar_t__ ece; } ;
struct synproxy_options {int options; int mss_option; int mss_encode; } ;
struct synproxy_net {TYPE_1__* stats; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
typedef int _th ;
struct TYPE_2__ {int syn_received; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct tcphdr* FUNC_3 (struct sk_buff*,int ,int,struct tcphdr*) ;
 int FUNC_4 (struct xt_synproxy_info const*,struct synproxy_options*) ;
 int FUNC_5 (struct sk_buff*,int ,struct tcphdr*,struct synproxy_options*) ;
 struct synproxy_net* FUNC_6 (struct net*) ;
 scalar_t__ FUNC_7 (struct net*,struct sk_buff*,struct tcphdr*,struct synproxy_options*,int ) ;
 int FUNC_8 (struct net*,struct sk_buff*,struct tcphdr*,struct synproxy_options*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct xt_action_param const*) ;
 struct net* FUNC_11 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_12(struct sk_buff *VAR_8, const struct xt_action_param *VAR_9)
{
 const struct xt_synproxy_info *VAR_10 = VAR_9->targinfo;
 struct net *VAR_11 = FUNC_11(VAR_9);
 struct synproxy_net *VAR_12 = FUNC_6(VAR_11);
 struct synproxy_options VAR_13 = {};
 struct tcphdr *VAR_14, VAR_15;

 if (FUNC_1(VAR_8, FUNC_10(VAR_9), VAR_9->thoff, VAR_0))
  return VAR_1;

 VAR_14 = FUNC_3(VAR_8, VAR_9->thoff, sizeof(VAR_15), &VAR_15);
 if (VAR_14 == ((void*)0))
  return VAR_1;

 if (!FUNC_5(VAR_8, VAR_9->thoff, VAR_14, &VAR_13))
  return VAR_1;

 if (VAR_14->syn && !(VAR_14->ack || VAR_14->fin || VAR_14->rst)) {

  FUNC_9(VAR_12->stats->syn_received);

  if (VAR_14->ece && VAR_14->cwr)
   VAR_13.options |= VAR_4;

  VAR_13.options &= VAR_10->options;
  VAR_13.mss_encode = VAR_13.mss_option;
  VAR_13.mss_option = VAR_10->mss;
  if (VAR_13.options & VAR_6)
   FUNC_4(VAR_10, &VAR_13);
  else
   VAR_13.options &= ~(VAR_7 |
       VAR_5 |
       VAR_4);

  FUNC_8(VAR_11, VAR_8, VAR_14, &VAR_13);
  FUNC_0(VAR_8);
  return VAR_2;

 } else if (VAR_14->ack && !(VAR_14->fin || VAR_14->rst || VAR_14->syn)) {

  if (FUNC_7(VAR_11, VAR_8, VAR_14, &VAR_13,
        FUNC_2(VAR_14->seq))) {
   FUNC_0(VAR_8);
   return VAR_2;
  } else {
   return VAR_1;
  }
 }

 return VAR_3;
}
