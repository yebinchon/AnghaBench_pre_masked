
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_priv {int * adsp; struct madera* madera; } ;
struct madera {int dev; } ;
struct cs47l15 {struct madera_priv core; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct cs47l15 *VAR_5 = VAR_4;
 struct madera_priv *VAR_6 = &VAR_5->core;
 struct madera *VAR_7 = VAR_6->madera;
 int VAR_8;

 VAR_8 = FUNC_1(&VAR_6->adsp[0]);
 if (VAR_8 == -VAR_0) {
  FUNC_0(VAR_7->dev, "Spurious compressed data IRQ\n");
  return VAR_2;
 }

 return VAR_1;
}
