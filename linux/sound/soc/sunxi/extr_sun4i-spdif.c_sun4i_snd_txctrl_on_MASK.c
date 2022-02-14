
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_spdif_dev {int regmap; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_7,
    struct sun4i_spdif_dev *VAR_8)
{
 if (VAR_7->runtime->channels == 1)
  FUNC_0(VAR_8->regmap, VAR_4,
       VAR_5,
       VAR_5);


 FUNC_0(VAR_8->regmap, VAR_4,
      VAR_6, VAR_6);


 FUNC_0(VAR_8->regmap, VAR_2,
      VAR_3, VAR_3);


 FUNC_0(VAR_8->regmap, VAR_0,
      VAR_1, VAR_1);
}
