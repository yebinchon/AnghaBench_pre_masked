
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct madera_priv {struct madera* madera; } ;
struct madera_codec_pdata {int* out_mono; int* max_channels_clocked; int* pdm_fmt; int* pdm_mute; int* dmic_ref; } ;
struct TYPE_2__ {struct madera_codec_pdata codec; } ;
struct madera {int dev; TYPE_1__ pdata; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,int*,int,int) ;
 int FUNC_2 (struct madera_priv*) ;

__attribute__((used)) static void FUNC_3(struct madera_priv *VAR_0)
{
 struct madera *VAR_1 = VAR_0->madera;
 struct madera_codec_pdata *VAR_2 = &VAR_1->pdata.codec;
 u32 VAR_3[FUNC_0(VAR_2->out_mono)];
 int VAR_4, VAR_5;

 FUNC_2(VAR_0);

 VAR_5 = FUNC_1(VAR_1->dev, "cirrus,out-mono",
       VAR_3, FUNC_0(VAR_3), 1);
 if (VAR_5 > 0)
  for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
   VAR_2->out_mono[VAR_4] = !!VAR_3[VAR_4];

 FUNC_1(VAR_1->dev,
          "cirrus,max-channels-clocked",
          VAR_2->max_channels_clocked,
          FUNC_0(VAR_2->max_channels_clocked),
          1);

 FUNC_1(VAR_1->dev, "cirrus,pdm-fmt",
          VAR_2->pdm_fmt,
          FUNC_0(VAR_2->pdm_fmt), 1);

 FUNC_1(VAR_1->dev, "cirrus,pdm-mute",
          VAR_2->pdm_mute,
          FUNC_0(VAR_2->pdm_mute), 1);

 FUNC_1(VAR_1->dev, "cirrus,dmic-ref",
          VAR_2->dmic_ref,
          FUNC_0(VAR_2->dmic_ref), 1);
}
