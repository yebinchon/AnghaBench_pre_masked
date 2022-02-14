
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int id; } ;
struct cfsrvl {int dev_info; TYPE_1__ layer; int supports_flowctrl; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_2__* dn; } ;
struct caif_payload_info {int hdr_len; int * dev_info; int channel_id; } ;
typedef enum caif_modemcmd { ____Placeholder_caif_modemcmd } caif_modemcmd ;
struct TYPE_5__ {int (* transmit ) (TYPE_2__*,struct cfpkt*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfpkt*,int *,int) ;
 struct cfpkt* FUNC_2 (int ) ;
 int FUNC_3 (struct cfpkt*) ;
 struct caif_payload_info* FUNC_4 (struct cfpkt*) ;
 int FUNC_5 (struct cfpkt*,int ) ;
 struct cfsrvl* FUNC_6 (struct cflayer*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,struct cfpkt*) ;
 int FUNC_9 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_10(struct cflayer *VAR_7, enum caif_modemcmd VAR_8)
{
 struct cfsrvl *VAR_9 = FUNC_6(VAR_7);

 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(VAR_7->dn != ((void*)0));
 FUNC_0(VAR_7->dn->transmit != ((void*)0));

 if (!VAR_9->supports_flowctrl)
  return 0;

 switch (VAR_8) {
 case 128:
  {
   struct cfpkt *VAR_10;
   struct caif_payload_info *VAR_11;
   u8 VAR_12 = VAR_5;
   VAR_10 = FUNC_2(VAR_3);
   if (!VAR_10)
    return -VAR_1;

   if (FUNC_1(VAR_10, &VAR_12, 1) < 0) {
    FUNC_7("Packet is erroneous!\n");
    FUNC_3(VAR_10);
    return -VAR_2;
   }
   VAR_11 = FUNC_4(VAR_10);
   VAR_11->channel_id = VAR_9->layer.id;
   VAR_11->hdr_len = 1;
   VAR_11->dev_info = &VAR_9->dev_info;
   FUNC_5(VAR_10, VAR_6);
   return VAR_7->dn->transmit(VAR_7->dn, VAR_10);
  }
 case 129:
  {
   struct cfpkt *VAR_13;
   struct caif_payload_info *VAR_14;
   u8 VAR_15 = VAR_4;
   VAR_13 = FUNC_2(VAR_3);
   if (!VAR_13)
    return -VAR_1;

   if (FUNC_1(VAR_13, &VAR_15, 1) < 0) {
    FUNC_7("Packet is erroneous!\n");
    FUNC_3(VAR_13);
    return -VAR_2;
   }
   VAR_14 = FUNC_4(VAR_13);
   VAR_14->channel_id = VAR_9->layer.id;
   VAR_14->hdr_len = 1;
   VAR_14->dev_info = &VAR_9->dev_info;
   FUNC_5(VAR_13, VAR_6);
   return VAR_7->dn->transmit(VAR_7->dn, VAR_13);
  }
 default:
   break;
 }
 return -VAR_0;
}
