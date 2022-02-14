
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 unsigned int VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++) {
  if (VAR_7 == VAR_2[VAR_8]) {
   FUNC_2(VAR_6, VAR_1,
     0xf << 17, VAR_8 << 17);
   return 0;
  }
 }

 return -VAR_0;
}
