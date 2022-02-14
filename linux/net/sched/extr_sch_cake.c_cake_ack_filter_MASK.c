
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcphdr {scalar_t__ source; scalar_t__ dest; int ack_seq; } ;
typedef struct sk_buff {struct sk_buff const* next; } const sk_buff ;
struct ipv6hdr {int payload_len; int daddr; int saddr; } ;
struct iphdr {int version; scalar_t__ saddr; scalar_t__ daddr; int ihl; int tot_len; } ;
struct cake_sched_data {scalar_t__ ack_filter; } ;
struct cake_flow {struct sk_buff const* head; struct sk_buff const* tail; } ;
typedef int _tcph_check ;
typedef int _tcph ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tcphdr const*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 struct iphdr* FUNC_3 (struct sk_buff const*,struct ipv6hdr*) ;
 struct tcphdr* FUNC_4 (struct sk_buff const*,...) ;
 int FUNC_5 (struct tcphdr const*,int *,int *) ;
 int FUNC_6 (struct tcphdr const*,int ,int ) ;
 int FUNC_7 (struct tcphdr const*,struct tcphdr const*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff const*) ;
 int FUNC_12 (struct tcphdr const*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct cake_sched_data *VAR_5,
           struct cake_flow *VAR_6)
{
 bool VAR_7 = VAR_5->ack_filter == VAR_0;
 struct sk_buff *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 struct sk_buff *VAR_10, *VAR_11 = ((void*)0);
 const struct ipv6hdr *VAR_12, *VAR_13;
 unsigned char VAR_14[64], VAR_15[64];
 const struct tcphdr *VAR_16, *VAR_17;
 const struct iphdr *VAR_18, *VAR_19;
 struct ipv6hdr VAR_20, VAR_21;
 const struct sk_buff *VAR_22;
 int VAR_23, VAR_24 = 0;
 u32 VAR_25 = 0, VAR_26 = 0;
 __be32 VAR_27 = 0;
 int VAR_28;


 if (VAR_6->head == VAR_6->tail)
  return ((void*)0);

 VAR_22 = VAR_6->tail;
 VAR_16 = FUNC_4(VAR_22, VAR_14, sizeof(VAR_14));
 VAR_18 = FUNC_3(VAR_22, &VAR_20);
 if (!VAR_16)
  return ((void*)0);

 FUNC_5(VAR_16, &VAR_25, &VAR_26);




 if ((FUNC_12(VAR_16) &
      (VAR_1 | VAR_4)) != VAR_1)
  return ((void*)0);






 for (VAR_10 = VAR_6->head;
      VAR_10 && VAR_10 != VAR_22;
      VAR_11 = VAR_10, VAR_10 = VAR_10->next) {
  VAR_19 = FUNC_3(VAR_10, &VAR_21);
  VAR_17 = FUNC_4(VAR_10, &VAR_15,
          sizeof(VAR_15));




  if (!VAR_17 || VAR_18->version != VAR_19->version ||
      VAR_17->source != VAR_16->source ||
      VAR_17->dest != VAR_16->dest)
   continue;

  if (VAR_19->version == 4) {
   if (VAR_19->saddr != VAR_18->saddr ||
       VAR_19->daddr != VAR_18->daddr)
    continue;

   VAR_23 = FUNC_10(VAR_19->tot_len) -
           (4 * VAR_19->ihl);
  } else if (VAR_19->version == 6) {
   VAR_12 = (struct ipv6hdr *)VAR_18;
   VAR_13 = (struct ipv6hdr *)VAR_19;

   if (FUNC_8(&VAR_13->saddr, &VAR_12->saddr) ||
       FUNC_8(&VAR_13->daddr, &VAR_12->daddr))
    continue;

   VAR_23 = FUNC_10(VAR_13->payload_len);
  } else {
   FUNC_0(1);
   continue;
  }





  if (VAR_8 && (FUNC_12(VAR_17) &
     (VAR_3 | VAR_2)) != VAR_27) {
   VAR_8 = ((void*)0);
   VAR_9 = ((void*)0);
   VAR_24--;
  }







  if (!FUNC_6(VAR_17, VAR_25, VAR_26) ||
      (VAR_23 - FUNC_1(VAR_17)) != 0 ||
      FUNC_2(FUNC_9(VAR_17->ack_seq), FUNC_9(VAR_16->ack_seq)))
   continue;







  VAR_28 = FUNC_7(VAR_17, VAR_16);

  if (VAR_28 < 0 ||
      (FUNC_9(VAR_17->ack_seq) == FUNC_9(VAR_16->ack_seq) &&
       VAR_28 == 0))
   continue;
  if (!VAR_8) {
   VAR_8 = VAR_10;
   VAR_9 = VAR_11;
   VAR_27 = (FUNC_12(VAR_17)
          & (VAR_3 | VAR_2));
  }

  if (VAR_24++ > 0)
   goto found;
 }







 if (VAR_8 && VAR_7 && VAR_8->next == VAR_22 &&
     (VAR_27 == (FUNC_12(VAR_16) &
       (VAR_3 | VAR_2))))
  goto found;

 return ((void*)0);

found:
 if (VAR_9)
  VAR_9->next = VAR_8->next;
 else
  VAR_6->head = VAR_8->next;

 FUNC_11(VAR_8);

 return VAR_8;
}
