
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;
struct fsl_esai {int regmap; scalar_t__ synchronous; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct fsl_esai* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
       struct snd_soc_dai *VAR_6)
{
 struct fsl_esai *VAR_7 = FUNC_2(VAR_6);

 if (!VAR_6->active) {

  FUNC_1(VAR_7->regmap, VAR_3,
       VAR_0, VAR_7->synchronous ?
       VAR_0 : 0);


  FUNC_1(VAR_7->regmap, VAR_4,
       VAR_1, FUNC_0(2));
  FUNC_1(VAR_7->regmap, VAR_2,
       VAR_1, FUNC_0(2));
 }

 return 0;

}
