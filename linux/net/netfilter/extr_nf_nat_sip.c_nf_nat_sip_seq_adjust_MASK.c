
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int seq; } ;
struct sk_buff {scalar_t__ data; } ;
struct nf_conn {int dummy; } ;
typedef scalar_t__ s16 ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ VAR_0 ;
 struct nf_conn* FUNC_0 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*,int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, unsigned int VAR_2,
      s16 VAR_3)
{
 enum ip_conntrack_info VAR_4;
 struct nf_conn *VAR_5 = FUNC_0(VAR_1, &VAR_4);
 const struct tcphdr *VAR_6;

 if (FUNC_1(VAR_5) != VAR_0 || VAR_3 == 0)
  return;

 VAR_6 = (struct tcphdr *)(VAR_1->data + VAR_2);
 FUNC_2(VAR_5, VAR_4, VAR_6->seq, VAR_3);
}
