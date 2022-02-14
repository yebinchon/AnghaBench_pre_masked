
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8731_priv {scalar_t__ playback_fs; scalar_t__ deemph; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int,scalar_t__) ;
 struct wm8731_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct wm8731_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5, VAR_6;




 if (VAR_3->deemph) {
  VAR_6 = 1;
  for (VAR_5 = 2; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
   if (FUNC_1(VAR_1[VAR_5] - VAR_3->playback_fs) <
       FUNC_1(VAR_1[VAR_6] - VAR_3->playback_fs))
    VAR_6 = VAR_5;
  }

  VAR_4 = VAR_6 << 1;
 } else {
  VAR_6 = 0;
  VAR_4 = 0;
 }

 FUNC_2(VAR_2->dev, "Set deemphasis %d (%dHz)\n",
  VAR_6, VAR_1[VAR_6]);

 return FUNC_4(VAR_2, VAR_0, 0x6, VAR_4);
}
