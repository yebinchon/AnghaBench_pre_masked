
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct es8328_priv {scalar_t__ playback_fs; scalar_t__ deemph; } ;
struct TYPE_3__ {int val; scalar_t__ rate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 struct es8328_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_4)
{
 struct es8328_priv *VAR_5 = FUNC_3(VAR_4);
 int VAR_6, VAR_7, VAR_8;





 if (VAR_5->deemph) {
  VAR_8 = 0;
  for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
   if (FUNC_1(VAR_3[VAR_7].rate - VAR_5->playback_fs) <
       FUNC_1(VAR_3[VAR_8].rate - VAR_5->playback_fs))
    VAR_8 = VAR_7;
  }

  VAR_6 = VAR_3[VAR_8].val;
 } else {
  VAR_6 = VAR_2;
 }

 FUNC_2(VAR_4->dev, "Set deemphasis %d\n", VAR_6);

 return FUNC_4(VAR_4, VAR_0,
   VAR_1, VAR_6);
}
