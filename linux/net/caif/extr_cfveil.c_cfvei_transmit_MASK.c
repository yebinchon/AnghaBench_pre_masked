
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int id; } ;
struct cfsrvl {int dev_info; TYPE_1__ layer; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_2__* dn; } ;
struct caif_payload_info {int hdr_len; int * dev_info; int channel_id; } ;
struct TYPE_4__ {int (* transmit ) (TYPE_2__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cfpkt*,int *,int) ;
 int FUNC_2 (struct cfpkt*) ;
 struct caif_payload_info* FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfsrvl*,int*) ;
 struct cfsrvl* FUNC_5 (struct cflayer*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_8(struct cflayer *VAR_1, struct cfpkt *VAR_2)
{
 u8 VAR_3 = 0;
 struct caif_payload_info *VAR_4;
 int VAR_5;
 struct cfsrvl *VAR_6 = FUNC_5(VAR_1);
 if (!FUNC_4(VAR_6, &VAR_5))
  goto err;
 FUNC_0(VAR_1->dn != ((void*)0));
 FUNC_0(VAR_1->dn->transmit != ((void*)0));

 if (FUNC_1(VAR_2, &VAR_3, 1) < 0) {
  FUNC_6("Packet is erroneous!\n");
  VAR_5 = -VAR_0;
  goto err;
 }


 VAR_4 = FUNC_3(VAR_2);
 VAR_4->channel_id = VAR_6->layer.id;
 VAR_4->hdr_len = 1;
 VAR_4->dev_info = &VAR_6->dev_info;
 return VAR_1->dn->transmit(VAR_1->dn, VAR_2);
err:
 FUNC_2(VAR_2);
 return VAR_5;
}
