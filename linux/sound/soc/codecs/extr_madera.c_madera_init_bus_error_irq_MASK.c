
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_priv {int * adsp; struct madera* madera; } ;
struct madera {int dev; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ,char*,int) ;
 int * VAR_0 ;
 int FUNC_1 (struct madera*,int ,char*,int ,int *) ;

int FUNC_2(struct madera_priv *VAR_1, int VAR_2,
         irq_handler_t VAR_3)
{
 struct madera *VAR_4 = VAR_1->madera;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4,
     VAR_0[VAR_2],
     "ADSP2 bus error",
     VAR_3,
     &VAR_1->adsp[VAR_2]);
 if (VAR_5)
  FUNC_0(VAR_4->dev,
   "Failed to request DSP Lock region IRQ: %d\n", VAR_5);

 return VAR_5;
}
