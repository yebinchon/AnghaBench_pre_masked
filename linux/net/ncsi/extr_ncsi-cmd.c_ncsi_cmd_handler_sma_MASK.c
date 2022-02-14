
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int common; } ;
struct ncsi_cmd_sma_pkt {TYPE_1__ cmd; int at_e; int index; int * mac; } ;
struct ncsi_cmd_arg {int * bytes; } ;


 int FUNC_0 (int *,struct ncsi_cmd_arg*) ;
 struct ncsi_cmd_sma_pkt* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0,
    struct ncsi_cmd_arg *VAR_1)
{
 struct ncsi_cmd_sma_pkt *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0, sizeof(*VAR_2));
 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_2->mac[VAR_3] = VAR_1->bytes[VAR_3];
 VAR_2->index = VAR_1->bytes[6];
 VAR_2->at_e = VAR_1->bytes[7];
 FUNC_0(&VAR_2->cmd.common, VAR_1);

 return 0;
}
