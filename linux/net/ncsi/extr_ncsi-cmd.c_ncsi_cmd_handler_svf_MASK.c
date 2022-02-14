
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int common; } ;
struct ncsi_cmd_svf_pkt {TYPE_1__ cmd; int enable; int index; int vlan; } ;
struct ncsi_cmd_arg {int * bytes; int * words; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ncsi_cmd_arg*) ;
 struct ncsi_cmd_svf_pkt* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0,
    struct ncsi_cmd_arg *VAR_1)
{
 struct ncsi_cmd_svf_pkt *VAR_2;

 VAR_2 = FUNC_2(VAR_0, sizeof(*VAR_2));
 VAR_2->vlan = FUNC_0(VAR_1->words[1]);
 VAR_2->index = VAR_1->bytes[6];
 VAR_2->enable = VAR_1->bytes[7];
 FUNC_1(&VAR_2->cmd.common, VAR_1);

 return 0;
}
