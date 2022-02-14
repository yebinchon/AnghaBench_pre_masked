
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct g12a_tohdmitx_input* playback_dma_data; } ;
struct g12a_tohdmitx_input {unsigned int fmt; } ;



__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_0,
           unsigned int VAR_1)
{
 struct g12a_tohdmitx_input *VAR_2 = VAR_0->playback_dma_data;


 VAR_2->fmt = VAR_1;
 return 0;
}
