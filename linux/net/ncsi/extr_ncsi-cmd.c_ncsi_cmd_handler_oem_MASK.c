
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ncsi_cmd_pkt_hdr {int dummy; } ;
struct TYPE_2__ {int common; } ;
struct ncsi_cmd_oem_pkt {TYPE_1__ cmd; int mfr_id; } ;
struct ncsi_cmd_arg {int payload; int data; } ;


 int FUNC_0 (int *,int ,unsigned int) ;
 int FUNC_1 (int *,struct ncsi_cmd_arg*) ;
 struct ncsi_cmd_oem_pkt* FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0,
    struct ncsi_cmd_arg *VAR_1)
{
 struct ncsi_cmd_oem_pkt *VAR_2;
 unsigned int VAR_3;

 VAR_3 = sizeof(struct ncsi_cmd_pkt_hdr) + 4;
 if (VAR_1->payload < 26)
  VAR_3 += 26;
 else
  VAR_3 += VAR_1->payload;

 VAR_2 = FUNC_2(VAR_0, VAR_3);
 FUNC_0(&VAR_2->mfr_id, VAR_1->data, VAR_1->payload);
 FUNC_1(&VAR_2->cmd.common, VAR_1);

 return 0;
}
