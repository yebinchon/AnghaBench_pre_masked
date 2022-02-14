
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8903_priv {scalar_t__ fs; scalar_t__ deemph; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;
 struct wm8903_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_4)
{
 struct wm8903_priv *VAR_5 = FUNC_3(VAR_4);
 int VAR_6, VAR_7, VAR_8;




 if (VAR_5->deemph) {
  VAR_8 = 1;
  for (VAR_7 = 2; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
   if (FUNC_1(VAR_3[VAR_7] - VAR_5->fs) <
       FUNC_1(VAR_3[VAR_8] - VAR_5->fs))
    VAR_8 = VAR_7;
  }

  VAR_6 = VAR_8 << VAR_2;
 } else {
  VAR_8 = 0;
  VAR_6 = 0;
 }

 FUNC_2(VAR_4->dev, "Set deemphasis %d (%dHz)\n",
  VAR_8, VAR_3[VAR_8]);

 return FUNC_4(VAR_4, VAR_0,
       VAR_1, VAR_6);
}
