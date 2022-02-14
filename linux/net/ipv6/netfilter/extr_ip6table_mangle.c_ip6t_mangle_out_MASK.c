
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct sk_buff {scalar_t__ mark; } ;
struct nf_hook_state {TYPE_3__* net; } ;
struct in6_addr {int dummy; } ;
typedef int saddr ;
typedef int daddr ;
struct TYPE_4__ {int ip6table_mangle; } ;
struct TYPE_6__ {TYPE_1__ ipv6; } ;
struct TYPE_5__ {scalar_t__ hop_limit; int daddr; int saddr; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (TYPE_3__*,struct sk_buff*) ;
 unsigned int FUNC_2 (struct sk_buff*,struct nf_hook_state const*,int ) ;
 int FUNC_3 (int *,struct in6_addr*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct in6_addr*,int *,int) ;

__attribute__((used)) static unsigned int
FUNC_6(struct sk_buff *VAR_2, const struct nf_hook_state *VAR_3)
{
 unsigned int VAR_4;
 struct in6_addr VAR_5, VAR_6;
 u_int8_t VAR_7;
 u_int32_t VAR_8, VAR_9;
 int VAR_10;


 FUNC_5(&VAR_5, &FUNC_4(VAR_2)->saddr, sizeof(VAR_5));
 FUNC_5(&VAR_6, &FUNC_4(VAR_2)->daddr, sizeof(VAR_6));
 VAR_9 = VAR_2->mark;
 VAR_7 = FUNC_4(VAR_2)->hop_limit;


 VAR_8 = *((u_int32_t *)FUNC_4(VAR_2));

 VAR_4 = FUNC_2(VAR_2, VAR_3, VAR_3->net->ipv6.ip6table_mangle);

 if (VAR_4 != VAR_0 && VAR_4 != VAR_1 &&
     (!FUNC_3(&FUNC_4(VAR_2)->saddr, &VAR_5) ||
      !FUNC_3(&FUNC_4(VAR_2)->daddr, &VAR_6) ||
      VAR_2->mark != VAR_9 ||
      FUNC_4(VAR_2)->hop_limit != VAR_7 ||
      VAR_8 != *((u_int32_t *)FUNC_4(VAR_2)))) {
  VAR_10 = FUNC_1(VAR_3->net, VAR_2);
  if (VAR_10 < 0)
   VAR_4 = FUNC_0(VAR_10);
 }

 return VAR_4;
}
