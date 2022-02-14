
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct ak4613_priv {int dummy_write_work; struct snd_soc_component* component; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct ak4613_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3, int VAR_4,
         struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct ak4613_priv *VAR_7 = FUNC_1(VAR_6);
 if ((VAR_4 != VAR_2) &&
     (VAR_4 != VAR_1))
  return 0;

 if (VAR_3->stream != VAR_0)
  return 0;

 VAR_7->component = VAR_6;
 FUNC_0(&VAR_7->dummy_write_work);

 return 0;
}
