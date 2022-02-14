
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfpkt {int dummy; } ;
struct cfmuxl {int dummy; } ;
struct cflayer {int (* transmit ) (struct cflayer*,struct cfpkt*) ;} ;
struct caif_payload_info {int hdr_len; int channel_id; TYPE_1__* dev_info; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cflayer*) ;
 int FUNC_2 (struct cflayer*) ;
 int FUNC_3 (struct cfpkt*,int *,int) ;
 int FUNC_4 (struct cfpkt*) ;
 struct caif_payload_info* FUNC_5 (struct cfpkt*) ;
 struct cfmuxl* FUNC_6 (struct cflayer*) ;
 struct cflayer* FUNC_7 (struct cfmuxl*,TYPE_1__*) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct cflayer*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_12(struct cflayer *VAR_1, struct cfpkt *VAR_2)
{
 struct cfmuxl *VAR_3 = FUNC_6(VAR_1);
 int VAR_4;
 u8 VAR_5;
 struct cflayer *VAR_6;
 struct caif_payload_info *VAR_7 = FUNC_5(VAR_2);
 FUNC_0(!VAR_7);

 FUNC_9();

 VAR_6 = FUNC_7(VAR_3, VAR_7->dev_info);
 if (VAR_6 == ((void*)0)) {
  FUNC_8("Send data on unknown phy ID = %d (0x%x)\n",
   VAR_7->dev_info->id, VAR_7->dev_info->id);
  FUNC_10();
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 VAR_7->hdr_len += 1;
 VAR_5 = VAR_7->channel_id;
 FUNC_3(VAR_2, &VAR_5, 1);


 FUNC_1(VAR_6);

 FUNC_10();

 VAR_4 = VAR_6->transmit(VAR_6, VAR_2);

 FUNC_2(VAR_6);
 return VAR_4;
}
