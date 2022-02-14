
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct g12a_tohdmitx_input* playback_dma_data; } ;
struct g12a_tohdmitx_input {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g12a_tohdmitx_input* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2)
{
 struct g12a_tohdmitx_input *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->playback_dma_data = VAR_3;
 return 0;
}
