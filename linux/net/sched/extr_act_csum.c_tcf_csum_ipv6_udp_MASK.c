
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct udphdr {scalar_t__ check; int len; } ;
struct sk_buff {int ip_summed; void* csum; } ;
struct ipv6hdr {int daddr; int saddr; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int,int ,void*) ;
 void* FUNC_1 (struct udphdr*,int,int ) ;
 struct ipv6hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 struct udphdr* FUNC_6 (struct sk_buff*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, int VAR_8)
{
 struct udphdr *VAR_9;
 const struct ipv6hdr *VAR_10;
 u16 VAR_11;

 if (FUNC_4(VAR_5) && FUNC_5(VAR_5)->gso_type & VAR_4)
  return 1;
 VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return 0;

 VAR_10 = FUNC_2(VAR_5);
 VAR_11 = FUNC_3(VAR_9->len);

 VAR_9->check = 0;

 if (VAR_8) {
  if (VAR_11 == 0)
   VAR_5->csum = FUNC_1(VAR_9, VAR_7 - VAR_6, 0);

  else if ((VAR_11 >= sizeof(*VAR_9)) && (VAR_11 <= VAR_7 - VAR_6))
   VAR_5->csum = FUNC_1(VAR_9, VAR_11, 0);

  else
   goto ignore_obscure_skb;
 } else {
  if (VAR_11 != VAR_7 - VAR_6)
   goto ignore_obscure_skb;

  VAR_5->csum = FUNC_1(VAR_9, VAR_11, 0);
 }

 VAR_9->check = FUNC_0(&VAR_10->saddr, &VAR_10->daddr, VAR_11,
          VAR_8 ? VAR_3 : VAR_2,
          VAR_5->csum);

 if (!VAR_9->check)
  VAR_9->check = VAR_1;

 VAR_5->ip_summed = VAR_0;

ignore_obscure_skb:
 return 1;
}
