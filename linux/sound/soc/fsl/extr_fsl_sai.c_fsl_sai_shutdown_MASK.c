
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct fsl_sai {int regmap; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct fsl_sai* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct fsl_sai *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 = VAR_4->soc_data->reg_offset;
 bool VAR_6 = VAR_2->stream == VAR_1;

 FUNC_1(VAR_4->regmap, FUNC_0(VAR_6, VAR_5),
      VAR_0, 0);
}
