
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_soc_component {TYPE_3__* dev; } ;
struct pm8916_wcd_analog_priv {struct snd_soc_component* component; void* codec_version; void* pmic_rev; TYPE_1__* supplies; } ;
struct TYPE_8__ {int parent; } ;
struct TYPE_7__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 struct pm8916_wcd_analog_priv* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*,char*,void*,void*) ;
 int FUNC_5 (struct pm8916_wcd_analog_priv*) ;
 int FUNC_6 (int,TYPE_1__*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 void* FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (struct snd_soc_component*,struct pm8916_wcd_analog_priv*) ;
 int FUNC_10 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_11 (struct snd_soc_component*,int ,int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_8)
{
 struct pm8916_wcd_analog_priv *VAR_9 = FUNC_2(VAR_8->dev);
 int VAR_10, VAR_11;

 VAR_10 = FUNC_6(FUNC_0(VAR_9->supplies), VAR_9->supplies);
 if (VAR_10 != 0) {
  FUNC_1(VAR_8->dev, "failed to enable regulators (%d)\n", VAR_10);
  return VAR_10;
 }

 FUNC_7(VAR_8,
      FUNC_3(VAR_8->dev->parent, ((void*)0)));
 FUNC_9(VAR_8, VAR_9);
 VAR_9->pmic_rev = FUNC_8(VAR_8, VAR_4);
 VAR_9->codec_version = FUNC_8(VAR_8, VAR_3);

 FUNC_4(VAR_8->dev, "PMIC REV: %d\t CODEC Version: %d\n",
   VAR_9->pmic_rev, VAR_9->codec_version);

 FUNC_11(VAR_8, VAR_2, 0x01);
 FUNC_11(VAR_8, VAR_0, 0x01);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++)
  FUNC_11(VAR_8, VAR_7[VAR_11].reg,
         VAR_7[VAR_11].def);

 VAR_9->component = VAR_8;

 FUNC_10(VAR_8, VAR_1,
       VAR_5,
       VAR_6);

 FUNC_5(VAR_9);

 return 0;
}
