
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_cmd_hdr {int cmd; } ;
struct snd_sof_dev {int boot_complete; int dev; int boot_wait; } ;
typedef int hdr ;
struct TYPE_2__ {int (* fw_ready ) (struct snd_sof_dev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_sof_dev*,int) ;
 int FUNC_3 (struct snd_sof_dev*,int) ;
 int FUNC_4 (struct snd_sof_dev*,int *,struct sof_ipc_cmd_hdr*,int) ;
 TYPE_1__* FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*,int) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct snd_sof_dev *VAR_2)
{
 struct sof_ipc_cmd_hdr VAR_3;
 u32 VAR_4, VAR_5;
 int VAR_6 = 0;


 FUNC_4(VAR_2, ((void*)0), &VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_2->dev, "ipc rx", VAR_3.cmd);

 VAR_4 = VAR_3.cmd & VAR_1;
 VAR_5 = VAR_3.cmd & VAR_0;


 switch (VAR_4) {
 case 131:
  FUNC_0(VAR_2->dev, "error: ipc reply unknown\n");
  break;
 case 135:

  if (!VAR_2->boot_complete) {
   VAR_6 = FUNC_5(VAR_2)->fw_ready(VAR_2, VAR_4);
   if (VAR_6 < 0) {




    FUNC_0(VAR_2->dev, "error: ABI mismatch %d\n",
     VAR_6);
   } else {

    VAR_2->boot_complete = 1;
   }


   FUNC_7(&VAR_2->boot_wait);
  }
  break;
 case 134:
 case 129:
 case 132:
 case 133:
  break;
 case 130:

  FUNC_2(VAR_2, VAR_3.cmd);
  break;
 case 128:
  FUNC_3(VAR_2, VAR_5);
  break;
 default:
  FUNC_0(VAR_2->dev, "error: unknown DSP message 0x%x\n", VAR_4);
  break;
 }

 FUNC_1(VAR_2->dev, "ipc rx done", VAR_3.cmd);
}
