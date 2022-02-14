
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xonar_generic {int ext_power_bit; int has_power; int ext_power_reg; } ;
struct oxygen {TYPE_1__* card; struct xonar_generic* model_data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct oxygen*,int ) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_0)
{
 struct xonar_generic *VAR_1 = VAR_0->model_data;
 u8 VAR_2;

 VAR_2 = !!(FUNC_2(VAR_0, VAR_1->ext_power_reg)
         & VAR_1->ext_power_bit);
 if (VAR_2 != VAR_1->has_power) {
  VAR_1->has_power = VAR_2;
  if (VAR_2) {
   FUNC_1(VAR_0->card->dev, "power restored\n");
  } else {
   FUNC_0(VAR_0->card->dev,
       "Hey! Don't unplug the power cable!\n");

  }
 }
}
