
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ source; scalar_t__ dest; scalar_t__ check; } ;
struct TYPE_2__ {scalar_t__ dst; scalar_t__ src; } ;
struct sw_flow_key {TYPE_1__ tp; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct ovs_key_udp {int udp_dst; int udp_src; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct udphdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2, struct sw_flow_key *VAR_3,
     const struct ovs_key_udp *VAR_4,
     const struct ovs_key_udp *VAR_5)
{
 struct udphdr *VAR_6;
 __be16 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_2, FUNC_5(VAR_2) +
      sizeof(struct udphdr));
 if (FUNC_7(VAR_9))
  return VAR_9;

 VAR_6 = FUNC_6(VAR_2);

 VAR_7 = FUNC_0(VAR_6->source, VAR_4->udp_src, VAR_5->udp_src);
 VAR_8 = FUNC_0(VAR_6->dest, VAR_4->udp_dst, VAR_5->udp_dst);

 if (VAR_6->check && VAR_2->ip_summed != VAR_0) {
  if (FUNC_1(VAR_7 != VAR_6->source)) {
   FUNC_2(VAR_2, &VAR_6->source, VAR_7, &VAR_6->check);
   VAR_3->tp.src = VAR_7;
  }
  if (FUNC_1(VAR_8 != VAR_6->dest)) {
   FUNC_2(VAR_2, &VAR_6->dest, VAR_8, &VAR_6->check);
   VAR_3->tp.dst = VAR_8;
  }

  if (FUNC_7(!VAR_6->check))
   VAR_6->check = VAR_1;
 } else {
  VAR_6->source = VAR_7;
  VAR_6->dest = VAR_8;
  VAR_3->tp.src = VAR_7;
  VAR_3->tp.dst = VAR_8;
 }

 FUNC_3(VAR_2);

 return 0;
}
