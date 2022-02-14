
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct adav80x {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct adav80x* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
 struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct adav80x *VAR_4 = FUNC_1(VAR_3);

 if (!FUNC_2(VAR_3) || !VAR_4->rate)
  return 0;

 return FUNC_0(VAR_1->runtime,
   VAR_0, VAR_4->rate);
}
