
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct omap_mcbsp {int active; } ;


 int VAR_0 ;






 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int FUNC_1 (struct omap_mcbsp*,int ) ;
 struct omap_mcbsp* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct omap_mcbsp *VAR_4 = FUNC_2(VAR_3);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  VAR_4->active++;
  FUNC_0(VAR_4, VAR_1->stream);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_4, VAR_1->stream);
  VAR_4->active--;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
