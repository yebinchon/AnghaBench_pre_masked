
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * agc; scalar_t__ agc_ena; scalar_t__ lin2_diff; scalar_t__ lin1_diff; } ;
struct wm9090_priv {TYPE_1__ pdata; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (struct snd_soc_component*,int *,int) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm9090_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,scalar_t__,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int *,int) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int *,int) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_12)
{
 struct wm9090_priv *VAR_13 = FUNC_3(VAR_12);
 struct snd_soc_dapm_context *VAR_14 = FUNC_2(VAR_12);
 int VAR_15;

 FUNC_7(VAR_14, VAR_9,
      FUNC_0(VAR_9));

 FUNC_6(VAR_14, VAR_3, FUNC_0(VAR_3));

 FUNC_1(VAR_12, VAR_8,
        FUNC_0(VAR_8));

 if (VAR_13->pdata.lin1_diff) {
  FUNC_6(VAR_14, VAR_4,
     FUNC_0(VAR_4));
 } else {
  FUNC_6(VAR_14, VAR_5,
     FUNC_0(VAR_5));
  FUNC_1(VAR_12, VAR_10,
         FUNC_0(VAR_10));
 }

 if (VAR_13->pdata.lin2_diff) {
  FUNC_6(VAR_14, VAR_6,
     FUNC_0(VAR_6));
 } else {
  FUNC_6(VAR_14, VAR_7,
     FUNC_0(VAR_7));
  FUNC_1(VAR_12, VAR_11,
         FUNC_0(VAR_11));
 }

 if (VAR_13->pdata.agc_ena) {
  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13->pdata.agc); VAR_15++)
   FUNC_5(VAR_12, VAR_0 + VAR_15,
          VAR_13->pdata.agc[VAR_15]);
  FUNC_4(VAR_12, VAR_2,
        VAR_1, VAR_1);
 } else {
  FUNC_4(VAR_12, VAR_2,
        VAR_1, 0);
 }

 return 0;

}
