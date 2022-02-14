
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int spos_mutex; int reg_lock; int (* amplifier_ctrl ) (struct snd_cs46xx*,int) ;int (* active_ctrl ) (struct snd_cs46xx*,int) ;struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int asynch_rx_scb; int spdif_status_out; int spdif_status_in; int spdif_in_src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_cs46xx*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_cs46xx*,int ,int,int) ;
 int FUNC_2 (struct snd_cs46xx*,int ,int) ;
 int FUNC_3 (struct snd_cs46xx*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct snd_cs46xx*,int) ;
 int FUNC_10 (struct snd_cs46xx*,int) ;

int FUNC_11 (struct snd_cs46xx *VAR_8)
{
 struct dsp_spos_instance * VAR_9 = VAR_8->dsp_spos_instance;


 VAR_8->active_ctrl(VAR_8, 1);
 VAR_8->amplifier_ctrl(VAR_8, 1);

 if (FUNC_6(VAR_9->asynch_rx_scb))
  return -VAR_2;
 if (FUNC_6(!VAR_9->spdif_in_src))
  return -VAR_2;

 FUNC_4(&VAR_8->spos_mutex);

 if ( ! (VAR_9->spdif_status_out & VAR_1) ) {

  FUNC_2 (VAR_8,VAR_6, 0x80000005);





  FUNC_2 (VAR_8,VAR_7, 0x800003ff);

  VAR_9->spdif_status_out |= VAR_1;
 }


 VAR_9->asynch_rx_scb = FUNC_0(VAR_8,"AsynchFGRxSCB",
        VAR_0,
        VAR_5,
        VAR_4,
        VAR_9->spdif_in_src,
        VAR_3);

 FUNC_7(&VAR_8->reg_lock);







 FUNC_3(VAR_8,VAR_9->spdif_in_src);


 FUNC_1 (VAR_8,VAR_9->spdif_in_src,0x7fff,0x7fff);

 FUNC_8(&VAR_8->reg_lock);






 VAR_9->spdif_status_in = 1;
 FUNC_5(&VAR_8->spos_mutex);

 return 0;
}
