
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dst; void* src; } ;
struct sw_flow_key {TYPE_1__ tp; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int checksum; void* dest; void* source; } ;
struct ovs_key_sctp {int sctp_dst; int sctp_src; } ;
typedef int __le32 ;


 void* FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 struct sctphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1,
      const struct ovs_key_sctp *VAR_2,
      const struct ovs_key_sctp *VAR_3)
{
 unsigned int VAR_4 = FUNC_5(VAR_0);
 struct sctphdr *VAR_5;
 __le32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_0, VAR_4 + sizeof(struct sctphdr));
 if (FUNC_6(VAR_9))
  return VAR_9;

 VAR_5 = FUNC_2(VAR_0);
 VAR_8 = VAR_5->checksum;
 VAR_6 = FUNC_1(VAR_0, VAR_4);

 VAR_5->source = FUNC_0(VAR_5->source, VAR_2->sctp_src, VAR_3->sctp_src);
 VAR_5->dest = FUNC_0(VAR_5->dest, VAR_2->sctp_dst, VAR_3->sctp_dst);

 VAR_7 = FUNC_1(VAR_0, VAR_4);


 VAR_5->checksum = VAR_8 ^ VAR_6 ^ VAR_7;

 FUNC_3(VAR_0);
 VAR_1->tp.src = VAR_5->source;
 VAR_1->tp.dst = VAR_5->dest;

 return 0;
}
