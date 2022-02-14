
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ca0106 {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,struct snd_ca0106*,int ) ;
 int FUNC_1 (int ,char*,struct snd_ca0106*,int *,int ) ;

int FUNC_2(struct snd_ca0106 *VAR_9)
{
 FUNC_0(VAR_9->card, "iec958", VAR_9, VAR_1);
 FUNC_1(VAR_9->card, "ca0106_reg32", VAR_9,
        VAR_5,
        VAR_8);
 FUNC_0(VAR_9->card, "ca0106_reg16", VAR_9,
        VAR_3);
 FUNC_0(VAR_9->card, "ca0106_reg8", VAR_9,
        VAR_6);
 FUNC_1(VAR_9->card, "ca0106_regs1", VAR_9,
        VAR_2,
        VAR_7);
 FUNC_1(VAR_9->card, "ca0106_i2c", VAR_9, ((void*)0),
        VAR_0);
 FUNC_0(VAR_9->card, "ca0106_regs2", VAR_9,
        VAR_4);
 return 0;
}
