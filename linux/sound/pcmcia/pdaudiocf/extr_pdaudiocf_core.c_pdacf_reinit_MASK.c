
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int * regmap; int ak4117; int suspend_reg_scr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pdacf*,int,int ) ;
 int FUNC_1 (struct snd_pdacf*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct snd_pdacf *VAR_3, int VAR_4)
{
 FUNC_1(VAR_3, 0);
 if (VAR_4)
  FUNC_0(VAR_3, VAR_1, VAR_3->suspend_reg_scr);
 FUNC_2(VAR_3->ak4117);
 FUNC_0(VAR_3, VAR_2, VAR_3->regmap[VAR_2>>1]);
 FUNC_0(VAR_3, VAR_0, VAR_3->regmap[VAR_0>>1]);
}
