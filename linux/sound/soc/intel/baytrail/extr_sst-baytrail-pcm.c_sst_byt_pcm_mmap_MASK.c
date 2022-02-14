
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_pcm_substream*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
       struct vm_area_struct *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_2->dev, "PCM: mmap\n");
 return FUNC_1(VAR_0, VAR_1);
}
