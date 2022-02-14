
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int id; } ;
struct cfsrvl {int dev_info; TYPE_1__ layer; } ;
struct cfpkt {int dummy; } ;
struct cflayer {TYPE_2__* dn; } ;
struct caif_payload_info {int * dev_info; int channel_id; } ;
struct TYPE_4__ {int (* transmit ) (TYPE_2__*,struct cfpkt*) ;} ;


 int FUNC_0 (struct cfpkt*,int *,int) ;
 int FUNC_1 (struct cfpkt*) ;
 struct caif_payload_info* FUNC_2 (struct cfpkt*) ;
 int FUNC_3 (struct cfsrvl*,int*) ;
 struct cfsrvl* FUNC_4 (struct cflayer*) ;
 int FUNC_5 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_6(struct cflayer *VAR_0, struct cfpkt *VAR_1)
{
 struct cfsrvl *VAR_2 = FUNC_4(VAR_0);
 struct caif_payload_info *VAR_3;
 u32 VAR_4 = 0;
 int VAR_5;

 if (!FUNC_3(VAR_2, &VAR_5)) {
  FUNC_1(VAR_1);
  return VAR_5;
 }

 FUNC_0(VAR_1, &VAR_4, 4);

 VAR_3 = FUNC_2(VAR_1);
 VAR_3->channel_id = VAR_2->layer.id;
 VAR_3->dev_info = &VAR_2->dev_info;
 return VAR_0->dn->transmit(VAR_0->dn, VAR_1);
}
