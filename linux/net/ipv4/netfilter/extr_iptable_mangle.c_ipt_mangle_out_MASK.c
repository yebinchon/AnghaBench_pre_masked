
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct sk_buff {scalar_t__ mark; } ;
struct nf_hook_state {TYPE_2__* net; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; scalar_t__ tos; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int iptable_mangle; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_2__*,struct sk_buff*,int ) ;
 unsigned int FUNC_3 (struct sk_buff*,struct nf_hook_state const*,int ) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_3, const struct nf_hook_state *VAR_4)
{
 unsigned int VAR_5;
 const struct iphdr *VAR_6;
 u_int8_t VAR_7;
 __be32 VAR_8, VAR_9;
 u_int32_t VAR_10;
 int VAR_11;


 VAR_10 = VAR_3->mark;
 VAR_6 = FUNC_1(VAR_3);
 VAR_8 = VAR_6->saddr;
 VAR_9 = VAR_6->daddr;
 VAR_7 = VAR_6->tos;

 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_4->net->ipv4.iptable_mangle);

 if (VAR_5 != VAR_0 && VAR_5 != VAR_1) {
  VAR_6 = FUNC_1(VAR_3);

  if (VAR_6->saddr != VAR_8 ||
      VAR_6->daddr != VAR_9 ||
      VAR_3->mark != VAR_10 ||
      VAR_6->tos != VAR_7) {
   VAR_11 = FUNC_2(VAR_4->net, VAR_3, VAR_2);
   if (VAR_11 < 0)
    VAR_5 = FUNC_0(VAR_11);
  }
 }

 return VAR_5;
}
