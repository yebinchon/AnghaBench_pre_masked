
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {scalar_t__ lrclk; scalar_t__ deemph; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_1 ;
 int FUNC_2 (int ,char*,int) ;
 struct wm8960_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct wm8960_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5, VAR_6;




 if (VAR_3->deemph) {
  VAR_6 = 1;
  for (VAR_5 = 2; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   if (FUNC_1(VAR_1[VAR_5] - VAR_3->lrclk) <
       FUNC_1(VAR_1[VAR_6] - VAR_3->lrclk))
    VAR_6 = VAR_5;
  }

  VAR_4 = VAR_6 << 1;
 } else {
  VAR_4 = 0;
 }

 FUNC_2(VAR_2->dev, "Set deemphasis %d\n", VAR_4);

 return FUNC_4(VAR_2, VAR_0,
       0x6, VAR_4);
}
