
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct ak4641_priv {scalar_t__ playback_fs; scalar_t__ deemph; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 struct ak4641_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct ak4641_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0 ; VAR_4 < FUNC_0(VAR_1); VAR_4++) {

  if (VAR_3->deemph && VAR_1[VAR_4] != 0 &&
      FUNC_1(VAR_1[VAR_4] - VAR_3->playback_fs) <
      FUNC_1(VAR_1[VAR_5] - VAR_3->playback_fs))
   VAR_5 = VAR_4;

  if (!VAR_3->deemph && VAR_1[VAR_4] == 0)
   VAR_5 = VAR_4;
 }

 FUNC_2(VAR_2->dev, "Set deemphasis %d\n", VAR_5);

 return FUNC_4(VAR_2, VAR_0, 0x3, VAR_5);
}
