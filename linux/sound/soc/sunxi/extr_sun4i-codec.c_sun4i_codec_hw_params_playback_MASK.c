
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int addr_width; } ;
struct sun4i_codec {TYPE_1__ playback_dma_data; int regmap; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int min; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sun4i_codec *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       unsigned int VAR_10)
{
 u32 VAR_11;


 FUNC_3(VAR_8->regmap, VAR_3,
      7 << VAR_4,
      VAR_10 << VAR_4);


 if (FUNC_2(VAR_9) == 1)
  VAR_11 = FUNC_0(VAR_5);
 else
  VAR_11 = 0;

 FUNC_3(VAR_8->regmap, VAR_3,
      FUNC_0(VAR_5),
      VAR_11);


 if (FUNC_1(VAR_9, VAR_2)->min == 32) {
  FUNC_3(VAR_8->regmap, VAR_3,
       FUNC_0(VAR_7),
       FUNC_0(VAR_7));


  FUNC_3(VAR_8->regmap, VAR_3,
       FUNC_0(VAR_6),
       0);

  VAR_8->playback_dma_data.addr_width = VAR_1;
 } else {
  FUNC_3(VAR_8->regmap, VAR_3,
       FUNC_0(VAR_7),
       0);


  FUNC_3(VAR_8->regmap, VAR_3,
       FUNC_0(VAR_6),
       FUNC_0(VAR_6));

  VAR_8->playback_dma_data.addr_width = VAR_0;
 }

 return 0;
}
