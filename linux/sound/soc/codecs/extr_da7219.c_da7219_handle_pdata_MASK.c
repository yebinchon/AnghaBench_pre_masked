
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {scalar_t__ mic_pga_delay; int wakeup_source; struct da7219_pdata* pdata; } ;
struct da7219_pdata {int micbias_lvl; int mic_amp_in_sel; int wakeup_source; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct da7219_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_5)
{
 struct da7219_priv *VAR_6 = FUNC_0(VAR_5);
 struct da7219_pdata *VAR_7 = VAR_6->pdata;

 if (VAR_7) {
  u8 VAR_8 = 0;

  VAR_6->wakeup_source = VAR_7->wakeup_source;


  switch (VAR_7->micbias_lvl) {
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
   VAR_8 |= (VAR_7->micbias_lvl <<
     VAR_0);
   break;
  }

  FUNC_1(VAR_5, VAR_1, VAR_8);





  VAR_6->mic_pga_delay = VAR_3 +
     (VAR_7->micbias_lvl *
      VAR_4);


  switch (VAR_7->mic_amp_in_sel) {
  case 130:
  case 128:
  case 129:
   FUNC_1(VAR_5, VAR_2,
          VAR_7->mic_amp_in_sel);
   break;
  }
 }
}
