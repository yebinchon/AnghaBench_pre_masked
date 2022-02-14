
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {int bclk; int lrclk; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (int,int) ;
 struct wm8960_priv* FUNC_2 (struct snd_soc_component*) ;
 int* VAR_3 ;

__attribute__((used)) static
int FUNC_3(struct snd_soc_component *VAR_4, int VAR_5,
    int *VAR_6, int *VAR_7, int *VAR_8)
{
 struct wm8960_priv *VAR_9 = FUNC_2(VAR_4);
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_11 = VAR_9->bclk;
 VAR_12 = VAR_9->lrclk;
 VAR_15 = VAR_5;

 VAR_16 = -VAR_0;
 *VAR_6 = *VAR_7 = *VAR_8 = -1;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_3); ++VAR_17) {
  if (VAR_3[VAR_17] == -1)
   continue;
  for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_2); ++VAR_18) {
   VAR_10 = VAR_12 * VAR_2[VAR_18];
   VAR_13 = VAR_10 * VAR_3[VAR_17];

   for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_1); ++VAR_19) {
    if (!FUNC_1(VAR_5, VAR_13))
     continue;

    VAR_14 = VAR_10 - VAR_11 * VAR_1[VAR_19] / 10;
    if (VAR_14 == 0) {
     *VAR_6 = VAR_17;
     *VAR_7 = VAR_18;
     *VAR_8 = VAR_19;
     return VAR_13;
    }
    if (VAR_14 > 0 && VAR_15 > VAR_14) {
     *VAR_6 = VAR_17;
     *VAR_7 = VAR_18;
     *VAR_8 = VAR_19;
     VAR_15 = VAR_14;
     VAR_16 = VAR_13;
    }
   }
  }
 }

 return VAR_16;
}
