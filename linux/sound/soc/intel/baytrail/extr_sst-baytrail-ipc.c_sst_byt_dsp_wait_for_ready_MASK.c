
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {struct sst_byt* dsp; } ;
struct sst_byt {int dev; int boot_complete; int boot_wait; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

int FUNC_4(struct device *VAR_2, struct sst_pdata *VAR_3)
{
 struct sst_byt *VAR_4 = VAR_3->dsp;
 int VAR_5;

 FUNC_0(VAR_4->dev, "wait for dsp reboot\n");

 VAR_5 = FUNC_3(VAR_4->boot_wait, VAR_4->boot_complete,
     FUNC_2(VAR_1));
 if (VAR_5 == 0) {
  FUNC_1(VAR_4->dev, "ipc: error DSP boot timeout\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4->dev, "dsp rebooted\n");
 return 0;
}
