
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ncsi_request {int enabled; int cmd; int timer; int id; int nlhdr; int snd_portid; int snd_seq; } ;
struct ncsi_cmd_handler {unsigned char type; int (* handler ) (int ,struct ncsi_cmd_arg*) ;scalar_t__ payload; } ;
struct ncsi_cmd_arg {scalar_t__ req_flags; unsigned char type; scalar_t__ payload; int id; TYPE_3__* info; TYPE_2__* ndp; } ;
struct ethhdr {int h_source; int h_dest; int h_proto; } ;
struct TYPE_6__ {int * nlhdr; int snd_portid; int snd_seq; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ ndev; } ;


 int FUNC_0 (struct ncsi_cmd_handler*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,scalar_t__) ;
 struct ncsi_request* FUNC_5 (struct ncsi_cmd_arg*) ;
 struct ncsi_cmd_handler* VAR_7 ;
 int FUNC_6 (struct ncsi_request*) ;
 int FUNC_7 (int ,char*,unsigned char) ;
 int FUNC_8 (int ) ;
 struct ethhdr* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,struct ncsi_cmd_arg*) ;

int FUNC_11(struct ncsi_cmd_arg *VAR_8)
{
 struct ncsi_cmd_handler *VAR_9 = ((void*)0);
 struct ncsi_request *VAR_10;
 unsigned char VAR_11;
 struct ethhdr *VAR_12;
 int VAR_13, VAR_14;


 if (VAR_8->req_flags == VAR_5)
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_8->type;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {
  if (VAR_7[VAR_13].type == VAR_11) {
   if (VAR_7[VAR_13].handler)
    VAR_9 = &VAR_7[VAR_13];
   else
    VAR_9 = ((void*)0);

   break;
  }
 }

 if (!VAR_9) {
  FUNC_7(VAR_8->ndp->ndev.dev,
      "Cannot send packet with type 0x%02x\n", VAR_8->type);
  return -VAR_0;
 }






 if (VAR_9->payload >= 0)
  VAR_8->payload = VAR_9->payload;
 VAR_10 = FUNC_5(VAR_8);
 if (!VAR_10)
  return -VAR_1;


 if (VAR_8->req_flags == VAR_5) {
  VAR_10->snd_seq = VAR_8->info->snd_seq;
  VAR_10->snd_portid = VAR_8->info->snd_portid;
  VAR_10->nlhdr = *VAR_8->info->nlhdr;
 }


 VAR_8->id = VAR_10->id;
 VAR_14 = VAR_9->handler(VAR_10->cmd, VAR_8);
 if (VAR_14) {
  FUNC_6(VAR_10);
  return VAR_14;
 }


 VAR_12 = FUNC_9(VAR_10->cmd, sizeof(*VAR_12));
 VAR_12->h_proto = FUNC_3(VAR_2);
 FUNC_2(VAR_12->h_dest);
 FUNC_2(VAR_12->h_source);





 VAR_10->enabled = 1;
 FUNC_4(&VAR_10->timer, VAR_6 + 1 * VAR_3);


 FUNC_8(VAR_10->cmd);
 VAR_14 = FUNC_1(VAR_10->cmd);
 if (VAR_14 < 0) {
  FUNC_6(VAR_10);
  return VAR_14;
 }

 return 0;
}
