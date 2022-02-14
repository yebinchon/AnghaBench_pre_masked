
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uda1380_priv {int work; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct uda1380_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2, int VAR_3,
  struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct uda1380_priv *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = FUNC_2(VAR_5, VAR_1);

 switch (VAR_3) {
 case 129:
 case 130:
  FUNC_3(VAR_5, VAR_1,
     VAR_7 & ~VAR_0);
  FUNC_0(&VAR_6->work);
  break;
 case 128:
 case 131:
  FUNC_3(VAR_5, VAR_1,
     VAR_7 | VAR_0);
  FUNC_0(&VAR_6->work);
  break;
 }
 return 0;
}
