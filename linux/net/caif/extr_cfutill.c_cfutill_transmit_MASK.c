
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


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfpkt*,int *,int) ;
 int FUNC_2 (struct cfpkt*) ;
 struct caif_payload_info* FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct cfsrvl*,int*) ;
 struct cfsrvl* FUNC_5 (struct cflayer*) ;
 int FUNC_6 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_7(struct cflayer *VAR_0, struct cfpkt *VAR_1)
{
 u8 VAR_2 = 0;
 struct caif_payload_info *VAR_3;
 int VAR_4;
 struct cfsrvl *VAR_5 = FUNC_5(VAR_0);
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_0->dn != ((void*)0));
 FUNC_0(VAR_0->dn->transmit != ((void*)0));

 if (!FUNC_4(VAR_5, &VAR_4)) {
  FUNC_2(VAR_1);
  return VAR_4;
 }

 FUNC_1(VAR_1, &VAR_2, 1);

 VAR_3 = FUNC_3(VAR_1);
 VAR_3->channel_id = VAR_5->layer.id;




 VAR_3->hdr_len = 1;
 VAR_3->dev_info = &VAR_5->dev_info;
 return VAR_0->dn->transmit(VAR_0->dn, VAR_1);
}
