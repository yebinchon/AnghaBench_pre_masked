
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udphdr {int check; int len; } ;
struct sk_buff {unsigned int len; } ;
struct nf_hook_state {scalar_t__ hook; int pf; TYPE_2__* net; } ;
typedef int _hdr ;
struct TYPE_3__ {scalar_t__ sysctl_checksum; } ;
struct TYPE_4__ {TYPE_1__ ct; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_1 (int ) ;
 struct udphdr* FUNC_2 (struct sk_buff*,unsigned int,int,struct udphdr*) ;
 int FUNC_3 (struct sk_buff*,struct nf_hook_state const*,char*) ;

__attribute__((used)) static bool FUNC_4(struct sk_buff *VAR_2,
        unsigned int VAR_3,
        const struct nf_hook_state *VAR_4)
{
 unsigned int VAR_5 = VAR_2->len - VAR_3;
 const struct udphdr *VAR_6;
 struct udphdr VAR_7;


 VAR_6 = FUNC_2(VAR_2, VAR_3, sizeof(VAR_7), &VAR_7);
 if (!VAR_6) {
  FUNC_3(VAR_2, VAR_4, "short packet");
  return 1;
 }


 if (FUNC_1(VAR_6->len) > VAR_5 || FUNC_1(VAR_6->len) < sizeof(*VAR_6)) {
  FUNC_3(VAR_2, VAR_4, "truncated/malformed packet");
  return 1;
 }


 if (!VAR_6->check)
  return 0;





 if (VAR_4->hook == VAR_1 &&
     VAR_4->net->ct.sysctl_checksum &&
     FUNC_0(VAR_2, VAR_4->hook, VAR_3, VAR_0, VAR_4->pf)) {
  FUNC_3(VAR_2, VAR_4, "bad checksum");
  return 1;
 }

 return 0;
}
