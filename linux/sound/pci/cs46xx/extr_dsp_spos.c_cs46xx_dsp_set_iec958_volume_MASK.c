
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct snd_cs46xx {int spos_mutex; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {void* spdif_input_volume_right; void* spdif_input_volume_left; int * asynch_rx_scb; } ;


 int FUNC_0 (struct snd_cs46xx*,int *,void*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3 (struct snd_cs46xx * VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct dsp_spos_instance * VAR_3 = VAR_0->dsp_spos_instance;

 FUNC_1(&VAR_0->spos_mutex);

 if (VAR_3->asynch_rx_scb != ((void*)0))
  FUNC_0 (VAR_0,VAR_3->asynch_rx_scb,
        VAR_1,VAR_2);

 VAR_3->spdif_input_volume_left = VAR_1;
 VAR_3->spdif_input_volume_right = VAR_2;

 FUNC_2(&VAR_0->spos_mutex);

 return 0;
}
