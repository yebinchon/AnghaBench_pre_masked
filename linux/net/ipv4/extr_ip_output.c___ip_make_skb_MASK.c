
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_protocol; int sk_priority; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; scalar_t__ len; int tstamp; int mark; int priority; int ignore_df; int * sk; int * destructor; scalar_t__ truesize; int data_len; struct sk_buff* next; } ;
struct rtable {scalar_t__ rt_type; int dst; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; int tos; scalar_t__ ttl; scalar_t__ protocol; int frag_off; } ;
struct ip_options {int optlen; } ;
struct inet_sock {scalar_t__ pmtudisc; scalar_t__ mc_ttl; int tos; } ;
struct inet_cork {int flags; scalar_t__ ttl; int tos; int * dst; int transmit_time; int mark; int priority; int addr; struct ip_options* opt; } ;
struct icmphdr {int type; } ;
struct flowi4 {int dummy; } ;
typedef scalar_t__ __u8 ;
typedef int __be16 ;
struct TYPE_2__ {struct sk_buff* frag_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net*,int ) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct iphdr*,struct flowi4*) ;
 int FUNC_7 (struct inet_cork*) ;
 scalar_t__ FUNC_8 (struct sock*,int *) ;
 struct iphdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,struct ip_options*,int ,struct rtable*,int ) ;
 int FUNC_11 (struct net*,struct sk_buff*,struct sock*) ;
 scalar_t__ FUNC_12 (struct inet_sock*,int *) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 TYPE_1__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 struct net* FUNC_20 (struct sock*) ;

struct sk_buff *FUNC_21(struct sock *VAR_6,
         struct flowi4 *VAR_7,
         struct sk_buff_head *VAR_8,
         struct inet_cork *VAR_9)
{
 struct sk_buff *VAR_10, *VAR_11;
 struct sk_buff **VAR_12;
 struct inet_sock *VAR_13 = FUNC_5(VAR_6);
 struct net *VAR_14 = FUNC_20(VAR_6);
 struct ip_options *VAR_15 = ((void*)0);
 struct rtable *VAR_16 = (struct rtable *)VAR_9->dst;
 struct iphdr *VAR_17;
 __be16 VAR_18 = 0;
 __u8 VAR_19;

 VAR_10 = FUNC_0(VAR_8);
 if (!VAR_10)
  goto out;
 VAR_12 = &(FUNC_18(VAR_10)->frag_list);


 if (VAR_10->data < FUNC_15(VAR_10))
  FUNC_1(VAR_10, FUNC_17(VAR_10));
 while ((VAR_11 = FUNC_0(VAR_8)) != ((void*)0)) {
  FUNC_1(VAR_11, FUNC_16(VAR_10));
  *VAR_12 = VAR_11;
  VAR_12 = &(VAR_11->next);
  VAR_10->len += VAR_11->len;
  VAR_10->data_len += VAR_11->len;
  VAR_10->truesize += VAR_11->truesize;
  VAR_11->destructor = ((void*)0);
  VAR_11->sk = ((void*)0);
 }





 VAR_10->ignore_df = FUNC_13(VAR_6);




 if (VAR_13->pmtudisc == VAR_3 ||
     VAR_13->pmtudisc == VAR_4 ||
     (VAR_10->len <= FUNC_2(&VAR_16->dst) &&
      FUNC_8(VAR_6, &VAR_16->dst)))
  VAR_18 = FUNC_3(VAR_2);

 if (VAR_9->flags & VAR_0)
  VAR_15 = VAR_9->opt;

 if (VAR_9->ttl != 0)
  VAR_19 = VAR_9->ttl;
 else if (VAR_16->rt_type == VAR_5)
  VAR_19 = VAR_13->mc_ttl;
 else
  VAR_19 = FUNC_12(VAR_13, &VAR_16->dst);

 VAR_17 = FUNC_9(VAR_10);
 VAR_17->version = 4;
 VAR_17->ihl = 5;
 VAR_17->tos = (VAR_9->tos != -1) ? VAR_9->tos : VAR_13->tos;
 VAR_17->frag_off = VAR_18;
 VAR_17->ttl = VAR_19;
 VAR_17->protocol = VAR_6->sk_protocol;
 FUNC_6(VAR_17, VAR_7);
 FUNC_11(VAR_14, VAR_10, VAR_6);

 if (VAR_15) {
  VAR_17->ihl += VAR_15->optlen>>2;
  FUNC_10(VAR_10, VAR_15, VAR_9->addr, VAR_16, 0);
 }

 VAR_10->priority = (VAR_9->tos != -1) ? VAR_9->priority: VAR_6->sk_priority;
 VAR_10->mark = VAR_9->mark;
 VAR_10->tstamp = VAR_9->transmit_time;




 VAR_9->dst = ((void*)0);
 FUNC_14(VAR_10, &VAR_16->dst);

 if (VAR_17->protocol == VAR_1)
  FUNC_4(VAR_14, ((struct icmphdr *)
   FUNC_19(VAR_10))->type);

 FUNC_7(VAR_9);
out:
 return VAR_10;
}
