
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct cs47l24_priv {TYPE_1__ core; } ;
struct arizona_voice_trigger_info {int core; } ;
struct arizona {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct arizona*,int ,struct arizona_voice_trigger_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct cs47l24_priv *VAR_7 = VAR_6;
 struct arizona *VAR_8 = VAR_7->core.arizona;
 struct arizona_voice_trigger_info VAR_9;
 int VAR_10 = 0;
 int VAR_11, VAR_12;

 for (VAR_11 = 1; VAR_11 <= 2; ++VAR_11) {
  VAR_12 = FUNC_2(&VAR_7->core.adsp[VAR_11]);
  if (VAR_12 != -VAR_1)
   VAR_10++;
  if (VAR_12 == VAR_4) {
   VAR_9.core = VAR_11;
   FUNC_0(VAR_8,
            VAR_0,
            &VAR_9);
  }
 }

 if (!VAR_10) {
  FUNC_1(VAR_8->dev, "Spurious compressed data IRQ\n");
  return VAR_3;
 }

 return VAR_2;
}
