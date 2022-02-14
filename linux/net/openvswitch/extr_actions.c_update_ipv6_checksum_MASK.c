
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct udphdr {scalar_t__ check; } ;
struct tcphdr {int dummy; } ;
struct sk_buff {int len; scalar_t__ ip_summed; } ;
struct icmp6hdr {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ icmp6_cksum; } ;
struct TYPE_3__ {scalar_t__ check; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__*,struct sk_buff*,int *,int const*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 struct udphdr* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_5, u8 VAR_6,
     __be32 VAR_7[4], const __be32 VAR_8[4])
{
 int VAR_9 = VAR_5->len - FUNC_3(VAR_5);

 if (VAR_6 == VAR_3) {
  if (FUNC_2(VAR_9 >= sizeof(struct tcphdr)))
   FUNC_1(&FUNC_4(VAR_5)->check, VAR_5,
        VAR_7, VAR_8, 1);
 } else if (VAR_6 == VAR_4) {
  if (FUNC_2(VAR_9 >= sizeof(struct udphdr))) {
   struct udphdr *VAR_10 = FUNC_5(VAR_5);

   if (VAR_10->check || VAR_5->ip_summed == VAR_0) {
    FUNC_1(&VAR_10->check, VAR_5,
         VAR_7, VAR_8, 1);
    if (!VAR_10->check)
     VAR_10->check = VAR_1;
   }
  }
 } else if (VAR_6 == VAR_2) {
  if (FUNC_2(VAR_9 >= sizeof(struct icmp6hdr)))
   FUNC_1(&FUNC_0(VAR_5)->icmp6_cksum,
        VAR_5, VAR_7, VAR_8, 1);
 }
}
