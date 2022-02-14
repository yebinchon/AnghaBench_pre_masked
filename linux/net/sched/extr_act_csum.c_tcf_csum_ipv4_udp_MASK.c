
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct udphdr {scalar_t__ check; int len; } ;
struct sk_buff {int ip_summed; void* csum; } ;
struct iphdr {int protocol; int daddr; int saddr; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct udphdr*,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,void*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 struct udphdr* FUNC_6 (struct sk_buff*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, int VAR_6)
{
 struct udphdr *VAR_7;
 const struct iphdr *VAR_8;
 u16 VAR_9;

 if (FUNC_4(VAR_3) && FUNC_5(VAR_3)->gso_type & VAR_2)
  return 1;
 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return 0;

 VAR_8 = FUNC_2(VAR_3);
 VAR_9 = FUNC_3(VAR_7->len);

 if (VAR_6 || VAR_7->check) {

  VAR_7->check = 0;

  if (VAR_6) {
   if (VAR_9 == 0)
    VAR_3->csum = FUNC_0(VAR_7, VAR_5 - VAR_4, 0);
   else if ((VAR_9 >= sizeof(*VAR_7)) && (VAR_9 <= VAR_5 - VAR_4))
    VAR_3->csum = FUNC_0(VAR_7, VAR_9, 0);
   else
    goto ignore_obscure_skb;
  } else {
   if (VAR_9 != VAR_5 - VAR_4)
    goto ignore_obscure_skb;

   VAR_3->csum = FUNC_0(VAR_7, VAR_9, 0);
  }

  VAR_7->check = FUNC_1(VAR_8->saddr, VAR_8->daddr,
      VAR_9, VAR_8->protocol,
      VAR_3->csum);

  if (!VAR_7->check)
   VAR_7->check = VAR_1;
 }

 VAR_3->ip_summed = VAR_0;

ignore_obscure_skb:
 return 1;
}
