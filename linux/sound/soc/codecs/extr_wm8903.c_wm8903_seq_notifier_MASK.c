
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8903_priv {int dcs_pending; int* dcs_cache; scalar_t__ class_w_users; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_dapm_type { ____Placeholder_snd_soc_dapm_type } snd_soc_dapm_type ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 struct wm8903_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_7 (struct snd_soc_component*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct snd_soc_component *VAR_6,
    enum snd_soc_dapm_type VAR_7, int VAR_8)
{
 struct wm8903_priv *VAR_9 = FUNC_4(VAR_6);
 int VAR_10 = 128;
 int VAR_11, VAR_12;


 if (VAR_9->dcs_pending) {
  FUNC_1(VAR_6->dev, "Starting DC servo for %x\n",
   VAR_9->dcs_pending);


  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9->dcs_cache); VAR_11++) {
   if (!(VAR_9->dcs_pending & (1 << VAR_11)))
    continue;

   if (VAR_9->dcs_cache[VAR_11]) {
    FUNC_1(VAR_6->dev,
     "Restore DC servo %d value %x\n",
     3 - VAR_11, VAR_9->dcs_cache[VAR_11]);

    FUNC_7(VAR_6, VAR_4 + VAR_11,
           VAR_9->dcs_cache[VAR_11] & 0xff);
   } else {
    FUNC_1(VAR_6->dev,
     "Calibrate DC servo %d\n", 3 - VAR_11);
    VAR_10 = 129;
   }
  }


  if (VAR_9->class_w_users)
   VAR_10 = 129;

  FUNC_6(VAR_6, VAR_3,
        VAR_1, VAR_10);

  FUNC_6(VAR_6, VAR_2,
        VAR_0, VAR_9->dcs_pending);

  switch (VAR_10) {
  case 128:
   break;

  case 129:
   FUNC_2(270);


   if (VAR_9->class_w_users)
    break;

   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9->dcs_cache); VAR_11++) {
    if (!(VAR_9->dcs_pending & (1 << VAR_11)))
     continue;

    VAR_12 = FUNC_5(VAR_6,
         VAR_5 + VAR_11);
    FUNC_1(VAR_6->dev, "DC servo %d: %x\n",
     3 - VAR_11, VAR_12);
    VAR_9->dcs_cache[VAR_11] = VAR_12;
   }
   break;

  default:
   FUNC_3("DCS mode %d delay not set\n", VAR_10);
   break;
  }

  VAR_9->dcs_pending = 0;
 }
}
