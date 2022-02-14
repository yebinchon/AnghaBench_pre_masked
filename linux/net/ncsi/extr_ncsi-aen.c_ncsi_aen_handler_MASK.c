
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct ncsi_dev_priv {TYPE_1__ ndev; } ;
struct ncsi_aen_pkt_hdr {scalar_t__ type; } ;
struct ncsi_aen_handler {scalar_t__ type; int (* handler ) (struct ncsi_dev_priv*,struct ncsi_aen_pkt_hdr*) ;int payload; } ;


 int FUNC_0 (struct ncsi_aen_handler*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct ncsi_aen_handler* VAR_1 ;
 int FUNC_2 (struct ncsi_aen_pkt_hdr*,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct ncsi_dev_priv*,struct ncsi_aen_pkt_hdr*) ;

int FUNC_7(struct ncsi_dev_priv *VAR_2, struct sk_buff *VAR_3)
{
 struct ncsi_aen_pkt_hdr *VAR_4;
 struct ncsi_aen_handler *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;


 VAR_4 = (struct ncsi_aen_pkt_hdr *)FUNC_5(VAR_3);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_1[VAR_6].type == VAR_4->type) {
   VAR_5 = &VAR_1[VAR_6];
   break;
  }
 }

 if (!VAR_5) {
  FUNC_4(VAR_2->ndev.dev, "Invalid AEN (0x%x) received\n",
       VAR_4->type);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5->payload);
 if (VAR_7) {
  FUNC_4(VAR_2->ndev.dev,
       "NCSI: 'bad' packet ignored for AEN type 0x%x\n",
       VAR_4->type);
  goto out;
 }

 VAR_7 = VAR_5->handler(VAR_2, VAR_4);
 if (VAR_7)
  FUNC_3(VAR_2->ndev.dev,
      "NCSI: Handler for AEN type 0x%x returned %d\n",
      VAR_4->type, VAR_7);
out:
 FUNC_1(VAR_3);
 return VAR_7;
}
