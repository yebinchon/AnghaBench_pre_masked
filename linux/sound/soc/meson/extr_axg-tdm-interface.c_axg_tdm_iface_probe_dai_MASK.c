
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {void* playback_dma_data; scalar_t__ playback_widget; void* capture_dma_data; scalar_t__ capture_widget; } ;
struct axg_tdm_iface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*) ;
 void* FUNC_1 (struct axg_tdm_iface*) ;
 struct axg_tdm_iface* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1)
{
 struct axg_tdm_iface *VAR_2 = FUNC_2(VAR_1);

 if (VAR_1->capture_widget) {
  VAR_1->capture_dma_data = FUNC_1(VAR_2);
  if (!VAR_1->capture_dma_data)
   return -VAR_0;
 }

 if (VAR_1->playback_widget) {
  VAR_1->playback_dma_data = FUNC_1(VAR_2);
  if (!VAR_1->playback_dma_data) {
   FUNC_0(VAR_1);
   return -VAR_0;
  }
 }

 return 0;
}
