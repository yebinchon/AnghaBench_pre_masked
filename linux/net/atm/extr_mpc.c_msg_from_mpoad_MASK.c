
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int truesize; scalar_t__ data; } ;
struct mpoa_client {int parameters; TYPE_1__* dev; } ;
struct TYPE_5__ {int params; } ;
struct k_message {int type; TYPE_2__ content; } ;
struct atm_vcc {int dummy; } ;
struct TYPE_6__ {int sk_wmem_alloc; } ;
struct TYPE_4__ {char* name; } ;




 int const VAR_0 ;




 int FUNC_0 (struct k_message*,struct mpoa_client*) ;
 int FUNC_1 (struct k_message*,struct mpoa_client*) ;
 int FUNC_2 (struct k_message*,struct mpoa_client*) ;





 int FUNC_3 (int ) ;
 int FUNC_4 (struct k_message*,struct mpoa_client*,int const) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct k_message*,struct mpoa_client*) ;
 struct mpoa_client* FUNC_8 (struct atm_vcc*) ;
 int FUNC_9 (struct k_message*,struct mpoa_client*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct k_message*,struct mpoa_client*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct k_message*,struct mpoa_client*) ;
 int FUNC_15 (struct k_message*,struct mpoa_client*) ;
 TYPE_3__* FUNC_16 (struct atm_vcc*) ;

__attribute__((used)) static int FUNC_17(struct atm_vcc *VAR_1, struct sk_buff *VAR_2)
{

 struct mpoa_client *VAR_3 = FUNC_8(VAR_1);
 struct k_message *VAR_4 = (struct k_message *)VAR_2->data;
 FUNC_3(FUNC_13(VAR_2->truesize, &FUNC_16(VAR_1)->sk_wmem_alloc));

 if (VAR_3 == ((void*)0)) {
  FUNC_12("no mpc found\n");
  return 0;
 }
 FUNC_5("(%s)", VAR_3->dev ? VAR_3->dev->name : "<unknown>");
 switch (VAR_4->type) {
 case 134:
  FUNC_6("mpoa_res_reply_rcvd\n");
  FUNC_1(VAR_4, VAR_3);
  break;
 case 133:
  FUNC_6("mpoa_trigger_rcvd\n");
  FUNC_2(VAR_4, VAR_3);
  break;
 case 135:
  FUNC_6("nhrp_purge_rcvd\n");
  FUNC_9(VAR_4, VAR_3);
  break;
 case 136:
  FUNC_6("egress_purge_reply_rcvd\n");
  FUNC_7(VAR_4, VAR_3);
  break;
 case 132:
  FUNC_6("mps_death\n");
  FUNC_11(VAR_4, VAR_3);
  break;
 case 138:
  FUNC_6("cache_impos_rcvd\n");
  FUNC_0(VAR_4, VAR_3);
  break;
 case 130:
  FUNC_6("set_mpc_ctrl_addr\n");
  FUNC_14(VAR_4, VAR_3);
  break;
 case 128:
  FUNC_6("set_mps_mac_addr\n");
  FUNC_15(VAR_4, VAR_3);
  break;
 case 137:
  FUNC_6("clean_up_and_exit\n");
  FUNC_4(VAR_4, VAR_3, VAR_0);
  break;
 case 131:
  FUNC_6("reload\n");
  FUNC_4(VAR_4, VAR_3, 131);
  break;
 case 129:
  FUNC_6("set_mpc_params\n");
  VAR_3->parameters = VAR_4->content.params;
  break;
 default:
  FUNC_6("unknown message %d\n", VAR_4->type);
  break;
 }
 FUNC_10(VAR_2);

 return 0;
}
