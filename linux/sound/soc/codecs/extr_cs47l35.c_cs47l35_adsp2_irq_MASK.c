
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_voice_trigger_info {int core_num; } ;
struct madera_priv {int * adsp; struct madera* madera; } ;
struct madera {int dev; int notifier; } ;
struct cs47l35 {struct madera_priv core; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,struct madera_voice_trigger_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct cs47l35 *VAR_8 = VAR_7;
 struct madera_priv *VAR_9 = &VAR_8->core;
 struct madera *VAR_10 = VAR_9->madera;
 struct madera_voice_trigger_info VAR_11;
 int VAR_12 = 0;
 int VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
  VAR_14 = FUNC_2(&VAR_9->adsp[VAR_13]);
  if (VAR_14 != -VAR_1)
   VAR_12++;
  if (VAR_14 == VAR_5) {
   VAR_11.core_num = VAR_13 + 1;
   FUNC_0(&VAR_10->notifier,
      VAR_4,
      &VAR_11);
  }
 }

 if (!VAR_12) {
  FUNC_1(VAR_10->dev, "Spurious compressed data IRQ\n");
  return VAR_3;
 }

 return VAR_2;
}
