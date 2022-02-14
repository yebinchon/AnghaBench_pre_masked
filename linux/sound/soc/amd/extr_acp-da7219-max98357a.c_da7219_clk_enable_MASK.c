
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
        int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct snd_soc_pcm_runtime *VAR_6 = VAR_2->private_data;

 FUNC_1(VAR_1, VAR_3);
 FUNC_1(VAR_0, VAR_4);
 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 < 0) {
  FUNC_2(VAR_6->dev, "can't enable master clock %d\n", VAR_5);
  return VAR_5;
 }

 return VAR_5;
}
