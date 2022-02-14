
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adsp; struct arizona* arizona; } ;
struct wm5102_priv {TYPE_1__ core; } ;
struct arizona {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct wm5102_priv *VAR_5 = VAR_4;
 struct arizona *VAR_6 = VAR_5->core.arizona;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_5->core.adsp[0]);
 if (VAR_7 == -VAR_0) {
  FUNC_0(VAR_6->dev, "Spurious compressed data IRQ\n");
  return VAR_2;
 }

 return VAR_1;
}
