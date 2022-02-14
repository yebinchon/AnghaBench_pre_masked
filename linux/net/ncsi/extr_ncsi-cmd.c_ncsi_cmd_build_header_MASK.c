
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ncsi_pkt_hdr {scalar_t__* reserved1; int length; int channel; int type; int id; scalar_t__ reserved; int revision; scalar_t__ mc_id; } ;
struct ncsi_cmd_arg {scalar_t__ payload; int channel; int package; int type; int id; } ;
typedef int __be32 ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ncsi_pkt_hdr *VAR_1,
      struct ncsi_cmd_arg *VAR_2)
{
 u32 VAR_3;
 __be32 *VAR_4;

 VAR_1->mc_id = 0;
 VAR_1->revision = VAR_0;
 VAR_1->reserved = 0;
 VAR_1->id = VAR_2->id;
 VAR_1->type = VAR_2->type;
 VAR_1->channel = FUNC_1(VAR_2->package,
       VAR_2->channel);
 VAR_1->length = FUNC_3(VAR_2->payload);
 VAR_1->reserved1[0] = 0;
 VAR_1->reserved1[1] = 0;


 VAR_3 = FUNC_4((unsigned char *)VAR_1,
        sizeof(*VAR_1) + VAR_2->payload);
 VAR_4 = (__be32 *)((void *)VAR_1 + sizeof(struct ncsi_pkt_hdr) +
      FUNC_0(VAR_2->payload, 4));
 *VAR_4 = FUNC_2(VAR_3);
}
