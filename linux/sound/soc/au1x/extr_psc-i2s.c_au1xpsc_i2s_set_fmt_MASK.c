
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct au1xpsc_audio_data {unsigned long cfg; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;


 unsigned int VAR_6 ;



 unsigned int VAR_7 ;

 unsigned int VAR_8 ;



 struct au1xpsc_audio_data* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_9,
          unsigned int VAR_10)
{
 struct au1xpsc_audio_data *VAR_11 = FUNC_0(VAR_9);
 unsigned long VAR_12;
 int VAR_13;

 VAR_13 = -VAR_0;

 VAR_12 = VAR_11->cfg;

 VAR_12 &= ~(VAR_5 | VAR_2);
 switch (VAR_10 & VAR_6) {
 case 134:
  VAR_12 |= VAR_5;
  break;
 case 130:
  break;
 case 131:
  VAR_12 |= VAR_2;
  break;
 default:
  goto out;
 }

 VAR_12 &= ~(VAR_1 | VAR_4);
 switch (VAR_10 & VAR_7) {
 case 128:
  VAR_12 |= VAR_1 | VAR_4;
  break;
 case 129:
  VAR_12 |= VAR_1;
  break;
 case 132:
  VAR_12 |= VAR_4;
  break;
 case 133:
  break;
 default:
  goto out;
 }

 switch (VAR_10 & VAR_8) {
 case 136:
  VAR_12 |= VAR_3;
  break;
 case 135:
  VAR_12 &= ~VAR_3;
  break;
 default:
  goto out;
 }

 VAR_11->cfg = VAR_12;
 VAR_13 = 0;
out:
 return VAR_13;
}
