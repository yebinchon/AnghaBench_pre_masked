
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {struct snd_pcm_substream* master_substream; scalar_t__ configured; struct snd_pcm_substream* slave_substream; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct twl4030_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct twl4030_priv*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct twl4030_priv *VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->master_substream) {
  VAR_6->slave_substream = VAR_3;



  if (VAR_6->configured)
   FUNC_2(VAR_6, VAR_6->master_substream);
 } else {
  if (!(FUNC_3(VAR_5, VAR_2) &
   VAR_1)) {



   FUNC_0(VAR_3->runtime,
           VAR_0,
           2);
  }
  VAR_6->master_substream = VAR_3;
 }

 return 0;
}
