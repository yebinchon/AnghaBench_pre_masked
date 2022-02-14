
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {int sysclk; int asyncclk; int * sr_ref; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int ,char*,...) ;
 struct wm5100_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int) ;
 int FUNC_5 (struct snd_soc_component*,int,int,int) ;
 int* VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_5, int VAR_6)
{
 struct wm5100_priv *VAR_7 = FUNC_3(VAR_5);
 int VAR_8, VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
  if (VAR_3[VAR_10] == VAR_6)
   break;
 if (VAR_10 == FUNC_0(VAR_3)) {
  FUNC_2(VAR_5->dev, "Unsupported sample rate: %dHz\n", VAR_6);
  return -VAR_1;
 }
 VAR_8 = VAR_10;

 if ((VAR_7->sysclk % VAR_6) == 0) {

  VAR_9 = -1;
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
   if (!VAR_7->sr_ref[VAR_10] && VAR_9 == -1) {
    VAR_9 = VAR_10;
    continue;
   }
   if ((FUNC_4(VAR_5, VAR_4[VAR_10]) &
        VAR_2) == VAR_8)
    break;
  }

  if (VAR_10 < FUNC_0(VAR_4)) {
   VAR_7->sr_ref[VAR_10]++;
   FUNC_1(VAR_5->dev, "SR %dHz, slot %d, ref %d\n",
    VAR_6, VAR_10, VAR_7->sr_ref[VAR_10]);
   return VAR_10;
  }

  if (VAR_9 == -1) {
   FUNC_2(VAR_5->dev, "All SR slots already in use\n");
   return -VAR_0;
  }

  FUNC_1(VAR_5->dev, "Allocating SR slot %d for %dHz\n",
   VAR_9, VAR_6);
  VAR_7->sr_ref[VAR_9]++;
  FUNC_5(VAR_5, VAR_4[VAR_9],
        VAR_2,
        VAR_8);

  return VAR_9;

 } else {
  FUNC_2(VAR_5->dev,
   "SR %dHz incompatible with %dHz SYSCLK and %dHz ASYNCCLK\n",
   VAR_6, VAR_7->sysclk, VAR_7->asyncclk);
  return -VAR_1;
 }
}
