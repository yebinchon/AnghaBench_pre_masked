
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int seq; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef int s32 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct sk_buff *VAR_1,
     struct nf_conn *VAR_2, enum ip_conntrack_info VAR_3,
     s32 VAR_4)
{
 const struct tcphdr *VAR_5;

 if (FUNC_1(VAR_2) != VAR_0)
  return;

 VAR_5 = (struct tcphdr *)(FUNC_3(VAR_1) + FUNC_0(VAR_1));
 FUNC_2(VAR_2, VAR_3, VAR_5->seq, VAR_4);
}
