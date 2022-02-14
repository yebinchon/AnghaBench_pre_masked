
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lx_rmh {scalar_t__ dsp_stat; int stat_len; int stat; int cmd_len; int cmd; } ;
struct lx6464es {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct lx6464es*,int ) ;
 int FUNC_3 (struct lx6464es*,int ,int ,int) ;
 int FUNC_4 (struct lx6464es*,int ,int) ;
 int FUNC_5 (struct lx6464es*,int ,int ,int ) ;
 int FUNC_6 (struct lx_rmh*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct lx6464es *VAR_11, struct lx_rmh *VAR_12)
{
 u32 VAR_13 = 128;
 int VAR_14;

 if (FUNC_2(VAR_11, VAR_10) & (VAR_5 | VAR_6)) {
  FUNC_0(VAR_11->card->dev, "PIOSendMessage eReg_CSM %x\n", VAR_13);
  return -VAR_1;
 }


 FUNC_5(VAR_11, VAR_8, VAR_12->cmd, VAR_12->cmd_len);


 FUNC_4(VAR_11, VAR_10, VAR_5);


 for (VAR_14 = 0; VAR_14 != VAR_7 * 1000; ++VAR_14) {
  if (FUNC_2(VAR_11, VAR_10) & VAR_6) {
   if (VAR_12->dsp_stat == 0)
    VAR_13 = FUNC_2(VAR_11, VAR_8);
   else
    VAR_13 = 0;
   goto polling_successful;
  } else
   FUNC_8(1);
 }
 FUNC_1(VAR_11->card->dev, "TIMEOUT lx_message_send_atomic! "
     "polling failed\n");

polling_successful:
 if ((VAR_13 & VAR_2) == 0) {

  if (VAR_12->stat_len) {
   FUNC_7(VAR_12->stat_len >= (VAR_4-1));
   FUNC_3(VAR_11, VAR_9, VAR_12->stat,
        VAR_12->stat_len);
  }
 } else
  FUNC_0(VAR_11->card->dev, "rmh error: %08x\n", VAR_13);


 FUNC_4(VAR_11, VAR_10, 0);

 switch (VAR_13) {
 case 128:
  FUNC_1(VAR_11->card->dev, "lx_message_send: dsp timeout\n");
  return -VAR_3;

 case 129:
  FUNC_1(VAR_11->card->dev, "lx_message_send: dsp crashed\n");
  return -VAR_0;
 }

 FUNC_6(VAR_12);

 return VAR_13;
}
