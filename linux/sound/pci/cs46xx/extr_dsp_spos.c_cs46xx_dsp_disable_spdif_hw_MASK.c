
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int spdif_status_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_cs46xx*,int ,int) ;
 int FUNC_1 (struct snd_cs46xx*,int ,int ) ;

__attribute__((used)) static void FUNC_2 (struct snd_cs46xx *VAR_5)
{
 struct dsp_spos_instance * VAR_6 = VAR_5->dsp_spos_instance;


 FUNC_1(VAR_5, VAR_0, 0);


 FUNC_0 (VAR_5,VAR_3, 0);



 FUNC_0 (VAR_5,VAR_4, 0x0);


 FUNC_0 (VAR_5,VAR_2, 0x0);


 VAR_6->spdif_status_out &= ~VAR_1;
}
