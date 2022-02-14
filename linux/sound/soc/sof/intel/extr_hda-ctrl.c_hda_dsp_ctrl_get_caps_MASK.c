
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; int * bar; } ;
struct hdac_bus {int remap_addr; int mlcap; int gtscap; int drsmcap; int spbcap; int ppcap; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int) ;
 struct hdac_bus* FUNC_3 (struct snd_sof_dev*) ;

int FUNC_4(struct snd_sof_dev *VAR_9)
{
 struct hdac_bus *VAR_10 = FUNC_3(VAR_9);
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_2(VAR_9, VAR_1, VAR_7);

 do {
  VAR_11 = FUNC_2(VAR_9, VAR_1, VAR_12);

  FUNC_0(VAR_9->dev, "checking for capabilities at offset 0x%x\n",
   VAR_12 & VAR_6);

  VAR_13 = (VAR_11 & VAR_4) >> VAR_5;

  switch (VAR_13) {
  case 129:
   FUNC_0(VAR_9->dev, "found DSP capability at 0x%x\n",
    VAR_12);
   VAR_10->ppcap = VAR_10->remap_addr + VAR_12;
   VAR_9->bar[VAR_2] = VAR_10->ppcap;
   break;
  case 128:
   FUNC_0(VAR_9->dev, "found SPIB capability at 0x%x\n",
    VAR_12);
   VAR_10->spbcap = VAR_10->remap_addr + VAR_12;
   VAR_9->bar[VAR_3] = VAR_10->spbcap;
   break;
  case 132:
   FUNC_0(VAR_9->dev, "found DRSM capability at 0x%x\n",
    VAR_12);
   VAR_10->drsmcap = VAR_10->remap_addr + VAR_12;
   VAR_9->bar[VAR_0] = VAR_10->drsmcap;
   break;
  case 131:
   FUNC_0(VAR_9->dev, "found GTS capability at 0x%x\n",
    VAR_12);
   VAR_10->gtscap = VAR_10->remap_addr + VAR_12;
   break;
  case 130:
   FUNC_0(VAR_9->dev, "found ML capability at 0x%x\n",
    VAR_12);
   VAR_10->mlcap = VAR_10->remap_addr + VAR_12;
   break;
  default:
   FUNC_1(VAR_9->dev, "found capability %d at 0x%x\n",
     VAR_13, VAR_12);
   break;
  }

  VAR_12 = VAR_11 & VAR_6;
 } while (VAR_14++ <= VAR_8 && VAR_12);

 return 0;
}
