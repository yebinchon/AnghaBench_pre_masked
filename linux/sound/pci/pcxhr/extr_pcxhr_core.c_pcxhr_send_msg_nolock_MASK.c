
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pcxhr_rmh {int cmd_len; int* cmd; size_t cmd_idx; } ;
struct pcxhr_mgr {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct pcxhr_mgr*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct pcxhr_mgr*,int ,int ,int ,int ,unsigned char*) ;
 int FUNC_5 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;
 int FUNC_6 (struct pcxhr_mgr*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct pcxhr_mgr *VAR_17, struct pcxhr_rmh *VAR_18)
{
 int VAR_19;
 int VAR_20;
 u32 VAR_21;
 unsigned char VAR_22;

 if (FUNC_7(VAR_18->cmd_len >= VAR_14))
  return -VAR_1;
 VAR_19 = FUNC_6(VAR_17, VAR_11, 1);
 if (VAR_19) {
  FUNC_3(&VAR_17->pci->dev,
   "pcxhr_send_message : ED_DSP_CRASHED\n");
  return VAR_19;
 }

 VAR_19 = FUNC_4(VAR_17, VAR_3, VAR_7,
      VAR_7, VAR_15, &VAR_22);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_6(VAR_17, VAR_12, 1);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_4(VAR_17, VAR_3, VAR_7, 0,
      VAR_15, &VAR_22);
 if (VAR_19)
  return VAR_19;

 VAR_21 = VAR_18->cmd[0];

 if (VAR_18->cmd_len > 1)
  VAR_21 |= 0x008000;
 else
  VAR_21 &= 0xff7fff;






 VAR_19 = FUNC_4(VAR_17, VAR_3, VAR_10,
      VAR_10, VAR_15, &VAR_22);
 if (VAR_19)
  return VAR_19;
 FUNC_1(VAR_17, VAR_4, (VAR_21>>16)&0xFF);
 FUNC_1(VAR_17, VAR_6, (VAR_21>>8)&0xFF);
 FUNC_1(VAR_17, VAR_5, (VAR_21&0xFF));

 if (VAR_18->cmd_len > 1) {

  VAR_21 = VAR_18->cmd_len - 1;
  VAR_19 = FUNC_4(VAR_17, VAR_3,
       VAR_10,
       VAR_10,
       VAR_15, &VAR_22);
  if (VAR_19)
   return VAR_19;
  FUNC_1(VAR_17, VAR_4, (VAR_21>>16)&0xFF);
  FUNC_1(VAR_17, VAR_6, (VAR_21>>8)&0xFF);
  FUNC_1(VAR_17, VAR_5, (VAR_21&0xFF));

  for (VAR_20=1; VAR_20 < VAR_18->cmd_len; VAR_20++) {

   VAR_21 = VAR_18->cmd[VAR_20];





   VAR_19 = FUNC_4(VAR_17, VAR_3,
        VAR_10,
        VAR_10,
        VAR_15, &VAR_22);
   if (VAR_19)
    return VAR_19;
   FUNC_1(VAR_17, VAR_4, (VAR_21>>16)&0xFF);
   FUNC_1(VAR_17, VAR_6, (VAR_21>>8)&0xFF);
   FUNC_1(VAR_17, VAR_5, (VAR_21&0xFF));
  }
 }

 VAR_19 = FUNC_4(VAR_17, VAR_3, VAR_7,
      VAR_7, VAR_15, &VAR_22);
 if (VAR_19)
  return VAR_19;

 if (VAR_22 & VAR_8) {

  VAR_19 = FUNC_4(VAR_17, VAR_3,
       VAR_9,
       VAR_9,
       VAR_15, &VAR_22);
  if (VAR_19) {
   FUNC_3(&VAR_17->pci->dev,
    "ERROR RMH: ISR:RXDF=1 (ISR = %x)\n", VAR_22);
   return VAR_19;
  }

  VAR_21 = FUNC_0(VAR_17, VAR_4) << 16;
  VAR_21 |= FUNC_0(VAR_17, VAR_6) << 8;
  VAR_21 |= FUNC_0(VAR_17, VAR_5);
  FUNC_3(&VAR_17->pci->dev, "ERROR RMH(%d): 0x%x\n",
      VAR_18->cmd_idx, VAR_21);
  VAR_19 = -VAR_1;
 } else {

  VAR_19 = FUNC_5(VAR_17, VAR_18);
 }

 if (FUNC_6(VAR_17, VAR_13, 1) < 0)
  return -VAR_2;
 return VAR_19;
}
