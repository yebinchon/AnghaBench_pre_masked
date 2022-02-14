
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm8955_priv {TYPE_1__* supplies; } ;
struct wm8955_pdata {scalar_t__ monoin_diff; scalar_t__ out2_speaker; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,char*,int) ;
 struct wm8955_pdata* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 struct wm8955_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_9 (struct snd_soc_component*) ;
 int * VAR_25 ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_26)
{
 struct wm8955_priv *VAR_27 = FUNC_7(VAR_26);
 struct wm8955_pdata *VAR_28 = FUNC_2(VAR_26->dev);
 int VAR_29, VAR_30;

 for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_27->supplies); VAR_30++)
  VAR_27->supplies[VAR_30].supply = VAR_25[VAR_30];

 VAR_29 = FUNC_3(VAR_26->dev, FUNC_0(VAR_27->supplies),
     VAR_27->supplies);
 if (VAR_29 != 0) {
  FUNC_1(VAR_26->dev, "Failed to request supplies: %d\n", VAR_29);
  return VAR_29;
 }

 VAR_29 = FUNC_5(FUNC_0(VAR_27->supplies),
        VAR_27->supplies);
 if (VAR_29 != 0) {
  FUNC_1(VAR_26->dev, "Failed to enable supplies: %d\n", VAR_29);
  return VAR_29;
 }

 VAR_29 = FUNC_9(VAR_26);
 if (VAR_29 < 0) {
  FUNC_1(VAR_26->dev, "Failed to issue reset: %d\n", VAR_29);
  goto err_enable;
 }


 FUNC_8(VAR_26, VAR_6,
       VAR_5, VAR_5);
 FUNC_8(VAR_26, VAR_17,
       VAR_16, VAR_16);
 FUNC_8(VAR_26, VAR_11,
       VAR_7 | VAR_8,
       VAR_7 | VAR_8);
 FUNC_8(VAR_26, VAR_22,
       VAR_18 | VAR_19,
       VAR_18 | VAR_19);
 FUNC_8(VAR_26, VAR_12,
       VAR_9 | VAR_10,
       VAR_9 | VAR_10);
 FUNC_8(VAR_26, VAR_24,
       VAR_20 | VAR_21,
       VAR_20 | VAR_21);
 FUNC_8(VAR_26, VAR_13,
       VAR_15, VAR_15);


 FUNC_8(VAR_26, VAR_2, VAR_3, VAR_3);


 if (VAR_28) {
  if (VAR_28->out2_speaker)
   FUNC_8(VAR_26, VAR_1,
         VAR_23, VAR_23);

  if (VAR_28->monoin_diff)
   FUNC_8(VAR_26, VAR_14,
         VAR_4, VAR_4);
 }

 FUNC_6(VAR_26, VAR_0);


 FUNC_4(FUNC_0(VAR_27->supplies), VAR_27->supplies);

 return 0;

err_enable:
 FUNC_4(FUNC_0(VAR_27->supplies), VAR_27->supplies);
 return VAR_29;
}
