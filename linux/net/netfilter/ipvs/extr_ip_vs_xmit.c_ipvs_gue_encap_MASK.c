
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct udphdr {scalar_t__ check; void* len; void* source; void* dest; } ;
struct sk_buff {scalar_t__ ip_summed; size_t csum_offset; size_t len; scalar_t__ encapsulation; scalar_t__ data; } ;
struct net {int dummy; } ;
struct ip_vs_conn {TYPE_1__* dest; } ;
struct guehdr {size_t hlen; int flags; int proto_ctype; scalar_t__ version; scalar_t__ control; } ;
typedef int __u8 ;
typedef int __be32 ;
typedef void* __be16 ;
struct TYPE_2__ {int tun_flags; void* tun_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (size_t) ;
 size_t FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (struct net*,struct sk_buff*,int ,int ,int) ;
 struct udphdr* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_7(struct net *VAR_9, struct sk_buff *VAR_10,
        struct ip_vs_conn *VAR_11, __u8 *VAR_12)
{
 __be16 VAR_13;
 __be16 VAR_14 = FUNC_5(VAR_9, VAR_10, 0, 0, 0);
 struct udphdr *VAR_15;
 struct guehdr *VAR_16;
 size_t VAR_17, VAR_18 = 0;
 void *VAR_19;
 bool VAR_20 = 0;

 if ((VAR_11->dest->tun_flags & VAR_8) &&
     VAR_10->ip_summed == VAR_1) {
  VAR_18 += VAR_6 + VAR_4;
  VAR_20 = 1;
 }

 VAR_17 = sizeof(struct guehdr) + VAR_18;

 FUNC_3(VAR_10, VAR_17);

 VAR_16 = (struct guehdr *)VAR_10->data;

 VAR_16->control = 0;
 VAR_16->version = 0;
 VAR_16->hlen = VAR_18 >> 2;
 VAR_16->flags = 0;
 VAR_16->proto_ctype = *VAR_12;

 VAR_19 = &VAR_16[1];

 if (VAR_20) {
  __be32 *VAR_21 = VAR_19;
  u16 VAR_22 = FUNC_1(VAR_10);
  __be16 *VAR_23;

  VAR_16->flags |= VAR_3;
  *VAR_21 = 0;
  VAR_19 += VAR_4;

  if (VAR_22 < VAR_17)
   return -VAR_2;

  VAR_22 -= VAR_17;
  VAR_23 = VAR_19;
  VAR_23[0] = FUNC_0(VAR_22);
  VAR_23[1] = FUNC_0(VAR_22 + VAR_10->csum_offset);

  if (!FUNC_2(VAR_10)) {
   VAR_10->ip_summed = VAR_0;
   VAR_10->encapsulation = 0;
  }

  *VAR_21 |= VAR_5;
  VAR_19 += VAR_6;
 }

 FUNC_3(VAR_10, sizeof(struct udphdr));
 FUNC_4(VAR_10);

 VAR_15 = FUNC_6(VAR_10);

 VAR_13 = VAR_11->dest->tun_port;
 VAR_15->dest = VAR_13;
 VAR_15->source = VAR_14;
 VAR_15->len = FUNC_0(VAR_10->len);
 VAR_15->check = 0;

 *VAR_12 = VAR_7;

 return 0;
}
