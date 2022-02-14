
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_1 (struct snd_soc_component*,unsigned short,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4,
          struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 unsigned short VAR_8;


 FUNC_0(VAR_6, VAR_0, 0x5, 0x1);

 if (VAR_4->stream == VAR_3)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 return FUNC_1(VAR_6, VAR_8, VAR_7->rate);
}
