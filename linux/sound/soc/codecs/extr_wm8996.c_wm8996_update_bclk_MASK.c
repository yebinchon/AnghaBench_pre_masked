
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8996_priv {int sysclk; int* bclk_rate; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int ,char*,int,int) ;
 struct wm8996_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_5)
{
 struct wm8996_priv *VAR_6 = FUNC_2(VAR_5);
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;




 if (VAR_6->sysclk < 64000)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  switch (VAR_7) {
  case 0:
   VAR_11 = VAR_0;
   break;
  case 1:
   VAR_11 = VAR_2;
   break;
  }

  VAR_10 = VAR_6->bclk_rate[VAR_7];


  VAR_8 = 0;
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_4); VAR_12++) {
   VAR_9 = (VAR_6->sysclk / VAR_4[VAR_12]) - VAR_10;
   if (VAR_9 < 0)
    break;
   VAR_8 = VAR_12;
  }
  VAR_10 = VAR_6->sysclk / VAR_4[VAR_8];
  FUNC_1(VAR_5->dev, "Using BCLK_DIV %d for actual BCLK %dHz\n",
   VAR_4[VAR_8], VAR_10);

  FUNC_3(VAR_5, VAR_11,
        VAR_1, VAR_8);
 }
}
