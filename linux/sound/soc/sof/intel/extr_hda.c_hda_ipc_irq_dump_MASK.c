
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_sof_dev {int dev; } ;
struct hdac_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (struct hdac_bus*,int ) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ) ;
 struct hdac_bus* FUNC_3 (struct snd_sof_dev*) ;

void FUNC_4(struct snd_sof_dev *VAR_8)
{
 struct hdac_bus *VAR_9 = FUNC_3(VAR_8);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u8 VAR_14;


 VAR_10 = FUNC_2(VAR_8, VAR_0, VAR_3);
 VAR_11 = FUNC_2(VAR_8, VAR_1, VAR_6);
 VAR_12 = FUNC_2(VAR_8, VAR_1, VAR_5);
 VAR_13 = FUNC_2(VAR_8, VAR_2, VAR_7);
 VAR_14 = FUNC_1(VAR_9, VAR_4);

 FUNC_0(VAR_8->dev,
  "error: hda irq intsts 0x%8.8x intlctl 0x%8.8x rirb %2.2x\n",
  VAR_11, VAR_12, VAR_14);
 FUNC_0(VAR_8->dev,
  "error: dsp irq ppsts 0x%8.8x adspis 0x%8.8x\n",
  VAR_13, VAR_10);
}
