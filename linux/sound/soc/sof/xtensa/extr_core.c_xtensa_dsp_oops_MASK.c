
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sof_ipc_dsp_oops_xtensa {scalar_t__ exccause; scalar_t__ epc1; scalar_t__ epc5; scalar_t__ eps2; scalar_t__ eps6; int interrupt; int intenable; int eps7; int eps5; int eps4; int eps3; int depc; int epc7; int epc6; int epc4; int epc3; int epc2; int sar; int ps; int excvaddr; } ;
struct snd_sof_dev {int dev; } ;
struct TYPE_3__ {scalar_t__ id; int description; int msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct snd_sof_dev *VAR_1, void *VAR_2)
{
 struct sof_ipc_dsp_oops_xtensa *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_1(VAR_1->dev, "error: DSP Firmware Oops\n");
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4].id == VAR_3->exccause) {
   FUNC_1(VAR_1->dev, "error: Exception Cause: %s, %s\n",
    VAR_0[VAR_4].msg,
    VAR_0[VAR_4].description);
  }
 }
 FUNC_1(VAR_1->dev, "EXCCAUSE 0x%8.8x EXCVADDR 0x%8.8x PS       0x%8.8x SAR     0x%8.8x\n",
  VAR_3->exccause, VAR_3->excvaddr, VAR_3->ps, VAR_3->sar);
 FUNC_1(VAR_1->dev, "EPC1     0x%8.8x EPC2     0x%8.8x EPC3     0x%8.8x EPC4    0x%8.8x",
  VAR_3->epc1, VAR_3->epc2, VAR_3->epc3, VAR_3->epc4);
 FUNC_1(VAR_1->dev, "EPC5     0x%8.8x EPC6     0x%8.8x EPC7     0x%8.8x DEPC    0x%8.8x",
  VAR_3->epc5, VAR_3->epc6, VAR_3->epc7, VAR_3->depc);
 FUNC_1(VAR_1->dev, "EPS2     0x%8.8x EPS3     0x%8.8x EPS4     0x%8.8x EPS5    0x%8.8x",
  VAR_3->eps2, VAR_3->eps3, VAR_3->eps4, VAR_3->eps5);
 FUNC_1(VAR_1->dev, "EPS6     0x%8.8x EPS7     0x%8.8x INTENABL 0x%8.8x INTERRU 0x%8.8x",
  VAR_3->eps6, VAR_3->eps7, VAR_3->intenable, VAR_3->interrupt);
}
