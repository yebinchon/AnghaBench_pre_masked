
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct madera_priv {int in_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct madera_priv*,int) ;
 struct madera_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int*) ;
 int FUNC_3 (struct snd_soc_component*,unsigned int,int,int) ;
 struct snd_soc_component* FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;

int FUNC_6(struct snd_soc_dapm_widget *VAR_5, struct snd_kcontrol *VAR_6,
   int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_4(VAR_5->dapm);
 struct madera_priv *VAR_9 = FUNC_1(VAR_8);
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 if (VAR_5->shift % 2)
  VAR_10 = VAR_0 + ((VAR_5->shift / 2) * 8);
 else
  VAR_10 = VAR_1 + ((VAR_5->shift / 2) * 8);

 switch (VAR_7) {
 case 128:
  VAR_9->in_pending++;
  break;
 case 130:
  VAR_9->in_pending--;
  FUNC_3(VAR_8, VAR_10,
           VAR_2, 0);


  if (VAR_9->in_pending == 0) {
   FUNC_5(1000, 3000);
   FUNC_0(VAR_9, 1);
  }
  break;
 case 129:
  FUNC_3(VAR_8, VAR_10,
           VAR_2 | VAR_4,
           VAR_2 | VAR_4);
  break;
 case 131:

  VAR_12 = FUNC_2(VAR_8, VAR_3,
          &VAR_11);
  if (!VAR_12 && !VAR_11)
   FUNC_0(VAR_9, 0);
  break;
 default:
  break;
 }

 return 0;
}
