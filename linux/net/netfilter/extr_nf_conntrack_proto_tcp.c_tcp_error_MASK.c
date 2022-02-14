
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct tcphdr {int doff; } ;
struct sk_buff {unsigned int len; } ;
struct nf_hook_state {scalar_t__ hook; int pf; TYPE_2__* net; } ;
struct TYPE_3__ {scalar_t__ sysctl_checksum; } ;
struct TYPE_4__ {TYPE_1__ ct; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nf_hook_state const*,char*) ;
 size_t FUNC_2 (struct tcphdr const*) ;
 int * VAR_5 ;

__attribute__((used)) static bool FUNC_3(const struct tcphdr *VAR_6,
        struct sk_buff *VAR_7,
        unsigned int VAR_8,
        const struct nf_hook_state *VAR_9)
{
 unsigned int VAR_10 = VAR_7->len - VAR_8;
 u8 VAR_11;


 if (VAR_6->doff*4 < sizeof(struct tcphdr) || VAR_10 < VAR_6->doff*4) {
  FUNC_1(VAR_7, VAR_9, "truncated packet");
  return 1;
 }






 if (VAR_9->net->ct.sysctl_checksum &&
     VAR_9->hook == VAR_1 &&
     FUNC_0(VAR_7, VAR_9->hook, VAR_8, VAR_0, VAR_9->pf)) {
  FUNC_1(VAR_7, VAR_9, "bad checksum");
  return 1;
 }


 VAR_11 = (FUNC_2(VAR_6) & ~(VAR_3|VAR_2|VAR_4));
 if (!VAR_5[VAR_11]) {
  FUNC_1(VAR_7, VAR_9, "invalid tcp flag combination");
  return 1;
 }

 return 0;
}
