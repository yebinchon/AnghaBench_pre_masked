
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
struct sst_hsw_ipc_fw_ready {int fw_info_size; scalar_t__* fw_info; int outbox_size; int outbox_offset; int inbox_size; int inbox_offset; } ;
struct sst_hsw {int boot_complete; int dev; int boot_wait; int dsp; } ;
typedef int fw_ready ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,char*,char*,char*,char*,char*) ;
 int FUNC_3 (char*,scalar_t__*,size_t) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,struct sst_hsw_ipc_fw_ready*,int,int) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sst_hsw *VAR_1, u32 VAR_2)
{
 struct sst_hsw_ipc_fw_ready VAR_3;
 u32 VAR_4;
 u8 VAR_5[VAR_0 - 5 * sizeof(u32)];
 char *VAR_6[5], *VAR_7;
 int VAR_8 = 0;

 VAR_4 = (VAR_2 & 0x1FFFFFFF) << 3;

 FUNC_1(VAR_1->dev, "ipc: DSP is ready 0x%8.8x offset %d\n",
  VAR_2, VAR_4);


 FUNC_5(VAR_1->dsp, &VAR_3, VAR_4, sizeof(VAR_3));

 FUNC_4(VAR_1->dsp, VAR_3.inbox_offset,
  VAR_3.inbox_size, VAR_3.outbox_offset,
  VAR_3.outbox_size);

 VAR_1->boot_complete = 1;
 FUNC_7(&VAR_1->boot_wait);

 FUNC_1(VAR_1->dev, " mailbox upstream 0x%x - size 0x%x\n",
  VAR_3.inbox_offset, VAR_3.inbox_size);
 FUNC_1(VAR_1->dev, " mailbox downstream 0x%x - size 0x%x\n",
  VAR_3.outbox_offset, VAR_3.outbox_size);
 if (VAR_3.fw_info_size < sizeof(VAR_3.fw_info)) {
  VAR_3.fw_info[VAR_3.fw_info_size] = 0;
  FUNC_1(VAR_1->dev, " Firmware info: %s \n", VAR_3.fw_info);


  FUNC_3(VAR_5, VAR_3.fw_info, VAR_3.fw_info_size);
  VAR_7 = &VAR_5[0];
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++)
   VAR_6[VAR_8] = FUNC_6(&VAR_7, " ");
  FUNC_2(VAR_1->dev, "FW loaded, mailbox readback FW info: type %s, - "
   "version: %s.%s, build %s, source commit id: %s\n",
   VAR_6[0], VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4]);
 }
}
