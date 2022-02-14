
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct wm5110_priv {TYPE_1__ core; } ;
struct arizona_voice_trigger_info {int core; } ;
struct arizona {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arizona*,int ,struct arizona_voice_trigger_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct wm5110_priv *VAR_8 = VAR_7;
 struct arizona *VAR_9 = VAR_8->core.arizona;
 struct arizona_voice_trigger_info VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  VAR_13 = FUNC_2(&VAR_8->core.adsp[VAR_12]);
  if (VAR_13 != -VAR_1)
   VAR_11++;
  if (VAR_13 == VAR_5) {
   VAR_10.core = VAR_12;
   FUNC_0(VAR_9,
            VAR_0,
            &VAR_10);
  }
 }

 if (!VAR_11) {
  FUNC_1(VAR_9->dev, "Spurious compressed data IRQ\n");
  return VAR_3;
 }

 return VAR_2;
}
