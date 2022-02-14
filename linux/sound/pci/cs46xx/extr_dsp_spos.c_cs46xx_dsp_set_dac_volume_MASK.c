
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct snd_cs46xx {int spos_mutex; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {void* dac_volume_right; void* dac_volume_left; struct dsp_scb_descriptor* the_null_scb; TYPE_2__* rear_mix_scb; TYPE_1__* master_mix_scb; } ;
struct dsp_scb_descriptor {struct dsp_scb_descriptor* next_scb_ptr; } ;
struct TYPE_4__ {struct dsp_scb_descriptor* sub_list_ptr; } ;
struct TYPE_3__ {struct dsp_scb_descriptor* sub_list_ptr; } ;


 int FUNC_0 (struct snd_cs46xx*,struct dsp_scb_descriptor*,void*,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3 (struct snd_cs46xx * VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct dsp_spos_instance * VAR_3 = VAR_0->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_4;

 FUNC_1(&VAR_0->spos_mutex);


 VAR_4 = VAR_3->master_mix_scb->sub_list_ptr;
 while (VAR_4 != VAR_3->the_null_scb) {
  FUNC_0 (VAR_0,VAR_4,VAR_1,VAR_2);
  VAR_4 = VAR_4->next_scb_ptr;
 }


 VAR_4 = VAR_3->rear_mix_scb->sub_list_ptr;
 while (VAR_4 != VAR_3->the_null_scb) {
  FUNC_0 (VAR_0,VAR_4,VAR_1,VAR_2);
  VAR_4 = VAR_4->next_scb_ptr;
 }

 VAR_3->dac_volume_left = VAR_1;
 VAR_3->dac_volume_right = VAR_2;

 FUNC_2(&VAR_0->spos_mutex);

 return 0;
}
