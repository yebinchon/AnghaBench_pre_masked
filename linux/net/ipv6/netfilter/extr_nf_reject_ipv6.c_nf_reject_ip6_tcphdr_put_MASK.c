
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
struct tcphdr {int doff; int ack; int rst; scalar_t__ check; scalar_t__ urg_ptr; scalar_t__ window; scalar_t__ seq; scalar_t__ fin; scalar_t__ syn; scalar_t__ ack_seq; int source; int dest; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int daddr; int saddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int,int ,int ) ;
 int FUNC_1 (struct tcphdr*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct tcphdr* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;

void FUNC_7(struct sk_buff *VAR_1,
         const struct sk_buff *VAR_2,
         const struct tcphdr *VAR_3, unsigned int VAR_4)
{
 struct tcphdr *VAR_5;
 int VAR_6;

 FUNC_6(VAR_1);
 VAR_5 = FUNC_5(VAR_1, sizeof(struct tcphdr));

 VAR_5->doff = sizeof(struct tcphdr)/4;
 VAR_5->source = VAR_3->dest;
 VAR_5->dest = VAR_3->source;

 if (VAR_3->ack) {
  VAR_6 = 0;
  VAR_5->seq = VAR_3->ack_seq;
  VAR_5->ack_seq = 0;
 } else {
  VAR_6 = 1;
  VAR_5->ack_seq = FUNC_2(FUNC_4(VAR_3->seq) + VAR_3->syn + VAR_3->fin +
          VAR_4 - (VAR_3->doff<<2));
  VAR_5->seq = 0;
 }


 ((u_int8_t *)VAR_5)[13] = 0;
 VAR_5->rst = 1;
 VAR_5->ack = VAR_6;
 VAR_5->window = 0;
 VAR_5->urg_ptr = 0;
 VAR_5->check = 0;


 VAR_5->check = FUNC_0(&FUNC_3(VAR_1)->saddr,
          &FUNC_3(VAR_1)->daddr,
          sizeof(struct tcphdr), VAR_0,
          FUNC_1(VAR_5,
         sizeof(struct tcphdr), 0));
}
