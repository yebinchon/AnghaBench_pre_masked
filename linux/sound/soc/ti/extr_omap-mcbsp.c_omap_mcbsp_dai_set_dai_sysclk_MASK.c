
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct omap_mcbsp_reg_cfg {int pcr0; int srgr2; } ;
struct omap_mcbsp {unsigned int in_freq; scalar_t__ active; struct omap_mcbsp_reg_cfg cfg_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct omap_mcbsp*,int ) ;
 struct omap_mcbsp* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_9,
      int VAR_10, unsigned int VAR_11,
      int VAR_12)
{
 struct omap_mcbsp *VAR_13 = FUNC_2(VAR_9);
 struct omap_mcbsp_reg_cfg *VAR_14 = &VAR_13->cfg_regs;
 int VAR_15 = 0;

 if (VAR_13->active) {
  if (VAR_11 == VAR_13->in_freq)
   return 0;
  else
   return -VAR_3;
 }

 VAR_13->in_freq = VAR_11;
 VAR_14->srgr2 &= ~VAR_1;
 VAR_14->pcr0 &= ~VAR_8;

 switch (VAR_10) {
 case 132:
  VAR_14->srgr2 |= VAR_1;
  break;
 case 129:
  if (FUNC_0()) {
   VAR_15 = -VAR_4;
   break;
  }
  VAR_15 = FUNC_1(VAR_13,
            VAR_7);
  break;
 case 130:
  if (FUNC_0()) {
   VAR_15 = 0;
   break;
  }
  VAR_15 = FUNC_1(VAR_13,
            VAR_6);
  break;

 case 128:
  VAR_14->srgr2 |= VAR_1;
  VAR_14->pcr0 |= VAR_8;






  VAR_14->pcr0 &= ~VAR_2;
  break;
 case 131:
  VAR_14->pcr0 |= VAR_8;

  VAR_14->pcr0 &= ~VAR_0;
  break;
 default:
  VAR_15 = -VAR_5;
 }

 return VAR_15;
}
