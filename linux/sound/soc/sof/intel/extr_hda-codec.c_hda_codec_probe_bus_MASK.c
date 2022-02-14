
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dummy; } ;
struct hdac_bus {int codec_mask; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct snd_sof_dev*,int) ;
 struct hdac_bus* FUNC_2 (struct snd_sof_dev*) ;

int FUNC_3(struct snd_sof_dev *VAR_1)
{
 struct hdac_bus *VAR_2 = FUNC_2(VAR_1);
 int VAR_3, VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  if (!(VAR_2->codec_mask & (1 << VAR_3)))
   continue;

  VAR_4 = FUNC_1(VAR_1, VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2->dev, "error: codec #%d probe error, ret: %d\n",
    VAR_3, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
