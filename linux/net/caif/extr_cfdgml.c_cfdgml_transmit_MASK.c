
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int id; } ;
struct cfsrvl {int dev_info; TYPE_1__ layer; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_2__* dn; } ;
struct caif_payload_info {int hdr_len; int * dev_info; int channel_id; } ;
struct TYPE_4__ {int (* transmit ) (TYPE_2__*,struct cfpkt*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfpkt*,int*,int) ;
 int FUNC_1 (struct cfpkt*) ;
 scalar_t__ FUNC_2 (struct cfpkt*) ;
 struct caif_payload_info* FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfsrvl*,int*) ;
 struct cfsrvl* FUNC_5 (struct cflayer*) ;
 int FUNC_6 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_7(struct cflayer *VAR_2, struct cfpkt *VAR_3)
{
 u8 VAR_4;
 u32 VAR_5 = 0;
 struct caif_payload_info *VAR_6;
 struct cfsrvl *VAR_7 = FUNC_5(VAR_2);
 int VAR_8;

 if (!FUNC_4(VAR_7, &VAR_8)) {
  FUNC_1(VAR_3);
  return VAR_8;
 }


 if (FUNC_2(VAR_3) > VAR_0) {
  FUNC_1(VAR_3);
  return -VAR_1;
 }

 FUNC_0(VAR_3, &VAR_5, 3);
 VAR_4 = 0x08;
 FUNC_0(VAR_3, &VAR_4, 1);


 VAR_6 = FUNC_3(VAR_3);
 VAR_6->channel_id = VAR_7->layer.id;



 VAR_6->hdr_len = 4;
 VAR_6->dev_info = &VAR_7->dev_info;
 return VAR_2->dn->transmit(VAR_2->dn, VAR_3);
}
