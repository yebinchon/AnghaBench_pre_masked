
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ check; } ;
struct tcphdr {int dummy; } ;
struct sk_buff {int len; scalar_t__ ip_summed; } ;
struct iphdr {int frag_off; scalar_t__ protocol; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ check; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,struct sk_buff*,int ,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct udphdr* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_5, struct iphdr *VAR_6,
      __be32 VAR_7, __be32 VAR_8)
{
 int VAR_9 = VAR_5->len - FUNC_3(VAR_5);

 if (VAR_6->frag_off & FUNC_0(VAR_4))
  return;

 if (VAR_6->protocol == VAR_2) {
  if (FUNC_2(VAR_9 >= sizeof(struct tcphdr)))
   FUNC_1(&FUNC_4(VAR_5)->check, VAR_5,
       VAR_7, VAR_8, 1);
 } else if (VAR_6->protocol == VAR_3) {
  if (FUNC_2(VAR_9 >= sizeof(struct udphdr))) {
   struct udphdr *VAR_10 = FUNC_5(VAR_5);

   if (VAR_10->check || VAR_5->ip_summed == VAR_0) {
    FUNC_1(&VAR_10->check, VAR_5,
        VAR_7, VAR_8, 1);
    if (!VAR_10->check)
     VAR_10->check = VAR_1;
   }
  }
 }
}
