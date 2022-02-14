
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;
struct hdac_bus {scalar_t__ codec_powered; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct hdac_bus* FUNC_1 (struct snd_sof_dev*) ;

int FUNC_2(struct snd_sof_dev *VAR_1)
{
 struct hdac_bus *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->codec_powered) {
  FUNC_0(VAR_1->dev, "some codecs still powered (%08X), not idle\n",
   (unsigned int)VAR_2->codec_powered);
  return -VAR_0;
 }

 return 0;
}
