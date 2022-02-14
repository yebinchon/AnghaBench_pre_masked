
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ source; scalar_t__ dest; int check; } ;
struct TYPE_2__ {scalar_t__ dst; scalar_t__ src; } ;
struct sw_flow_key {TYPE_1__ tp; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_tcp {int tcp_dst; int tcp_src; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__*,scalar_t__,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct tcphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1,
     const struct ovs_key_tcp *VAR_2,
     const struct ovs_key_tcp *VAR_3)
{
 struct tcphdr *VAR_4;
 __be16 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_0, FUNC_5(VAR_0) +
      sizeof(struct tcphdr));
 if (FUNC_7(VAR_7))
  return VAR_7;

 VAR_4 = FUNC_6(VAR_0);
 VAR_5 = FUNC_0(VAR_4->source, VAR_2->tcp_src, VAR_3->tcp_src);
 if (FUNC_1(VAR_5 != VAR_4->source)) {
  FUNC_2(VAR_0, &VAR_4->source, VAR_5, &VAR_4->check);
  VAR_1->tp.src = VAR_5;
 }
 VAR_6 = FUNC_0(VAR_4->dest, VAR_2->tcp_dst, VAR_3->tcp_dst);
 if (FUNC_1(VAR_6 != VAR_4->dest)) {
  FUNC_2(VAR_0, &VAR_4->dest, VAR_6, &VAR_4->check);
  VAR_1->tp.dst = VAR_6;
 }
 FUNC_3(VAR_0);

 return 0;
}
