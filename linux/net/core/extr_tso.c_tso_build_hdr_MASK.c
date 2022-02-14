
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tso_t {int ip_id; int tcp_seq; int ipv6; } ;
struct tcphdr {scalar_t__ rst; scalar_t__ fin; scalar_t__ psh; int seq; } ;
struct sk_buff {int data; } ;
struct ipv6hdr {void* payload_len; } ;
struct iphdr {void* tot_len; void* id; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

void FUNC_6(struct sk_buff *VAR_0, char *VAR_1, struct tso_t *VAR_2,
     int VAR_3, bool VAR_4)
{
 struct tcphdr *VAR_5;
 int VAR_6 = FUNC_4(VAR_0) + FUNC_5(VAR_0);
 int VAR_7 = FUNC_3(VAR_0);

 FUNC_1(VAR_1, VAR_0->data, VAR_6);
 if (!VAR_2->ipv6) {
  struct iphdr *VAR_8 = (void *)(VAR_1 + VAR_7);

  VAR_8->id = FUNC_0(VAR_2->ip_id);
  VAR_8->tot_len = FUNC_0(VAR_3 + VAR_6 - VAR_7);
  VAR_2->ip_id++;
 } else {
  struct ipv6hdr *VAR_9 = (void *)(VAR_1 + VAR_7);

  VAR_9->payload_len = FUNC_0(VAR_3 + FUNC_5(VAR_0));
 }
 VAR_5 = (struct tcphdr *)(VAR_1 + FUNC_4(VAR_0));
 FUNC_2(VAR_2->tcp_seq, &VAR_5->seq);

 if (!VAR_4) {

  VAR_5->psh = 0;
  VAR_5->fin = 0;
  VAR_5->rst = 0;
 }
}
