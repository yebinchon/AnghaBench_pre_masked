
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {scalar_t__ cwr; scalar_t__ ece; } ;
struct synproxy_options {int options; int mss_option; int mss_encode; } ;
struct synproxy_net {TYPE_2__* stats; } ;
struct TYPE_3__ {int options; } ;
struct nft_synproxy {TYPE_1__ info; } ;
struct nf_synproxy_info {int mss; } ;
struct TYPE_4__ {int syn_received; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nf_synproxy_info*,struct synproxy_options*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct synproxy_options *VAR_4,
         const struct tcphdr *VAR_5,
         struct synproxy_net *VAR_6,
         struct nf_synproxy_info *VAR_7,
         const struct nft_synproxy *VAR_8)
{
 FUNC_1(VAR_6->stats->syn_received);
 if (VAR_5->ece && VAR_5->cwr)
  VAR_4->options |= VAR_0;

 VAR_4->options &= VAR_8->info.options;
 VAR_4->mss_encode = VAR_4->mss_option;
 VAR_4->mss_option = VAR_7->mss;
 if (VAR_4->options & VAR_2)
  FUNC_0(VAR_7, VAR_4);
 else
  VAR_4->options &= ~(VAR_3 |
       VAR_1 |
       VAR_0);
}
