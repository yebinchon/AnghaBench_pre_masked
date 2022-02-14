
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct max98095_priv {int lock; int * bq_texts; struct max98095_cdata* dai; int bq_textcnt; struct max98095_pdata* pdata; } ;
struct max98095_pdata {unsigned int bq_cfgcnt; struct max98095_biquad_cfg* bq_cfg; } ;
struct max98095_cdata {unsigned int bq_sel; int rate; } ;
struct max98095_biquad_cfg {int band2; int band1; scalar_t__ rate; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct max98095_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_9 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct snd_kcontrol *VAR_7,
     struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_9(VAR_7);
 struct max98095_priv *VAR_10 = FUNC_6(VAR_9);
 struct max98095_pdata *VAR_11 = VAR_10->pdata;
 int VAR_12 = FUNC_3(VAR_9, VAR_7->id.name);
 struct max98095_cdata *VAR_13;
 unsigned int VAR_14 = VAR_8->value.enumerated.item[0];
 struct max98095_biquad_cfg *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 if (VAR_12 < 0)
  return VAR_12;

 if (!VAR_11 || !VAR_10->bq_textcnt)
  return 0;

 if (VAR_14 >= VAR_11->bq_cfgcnt)
  return -VAR_0;

 VAR_13 = &VAR_10->dai[VAR_12];
 VAR_13->bq_sel = VAR_14;
 VAR_16 = VAR_13->rate;


 VAR_17 = 0;
 VAR_18 = VAR_1;
 for (VAR_19 = 0; VAR_19 < VAR_11->bq_cfgcnt; VAR_19++) {
  if (FUNC_10(VAR_11->bq_cfg[VAR_19].name, VAR_10->bq_texts[VAR_14]) == 0 &&
   FUNC_0(VAR_11->bq_cfg[VAR_19].rate - VAR_16) < VAR_18) {
   VAR_17 = VAR_19;
   VAR_18 = FUNC_0(VAR_11->bq_cfg[VAR_19].rate - VAR_16);
  }
 }

 FUNC_1(VAR_9->dev, "Selected %s/%dHz for %dHz sample rate\n",
  VAR_11->bq_cfg[VAR_17].name,
  VAR_11->bq_cfg[VAR_17].rate, VAR_16);

 VAR_15 = &VAR_11->bq_cfg[VAR_17];

 VAR_20 = (VAR_12 == 0) ? VAR_4 : VAR_5;


 VAR_21 = FUNC_7(VAR_9, VAR_3);
 FUNC_8(VAR_9, VAR_3, VAR_20, 0);

 FUNC_4(&VAR_10->lock);
 FUNC_8(VAR_9, VAR_2, VAR_6, VAR_6);
 FUNC_2(VAR_9, VAR_12, 0, VAR_15->band1);
 FUNC_2(VAR_9, VAR_12, 1, VAR_15->band2);
 FUNC_8(VAR_9, VAR_2, VAR_6, 0);
 FUNC_5(&VAR_10->lock);


 FUNC_8(VAR_9, VAR_3, VAR_20, VAR_21);
 return 0;
}
