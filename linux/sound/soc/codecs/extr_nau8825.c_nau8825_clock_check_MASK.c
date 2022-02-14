
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nau8825 {int dev; } ;
struct TYPE_4__ {int osr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct nau8825 *VAR_5,
 int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_6 == VAR_2) {
  if (VAR_8 >= FUNC_0(VAR_4))
   return -VAR_1;
  VAR_9 = VAR_4[VAR_8].osr;
 } else {
  if (VAR_8 >= FUNC_0(VAR_3))
   return -VAR_1;
  VAR_9 = VAR_3[VAR_8].osr;
 }

 if (!VAR_9 || VAR_7 * VAR_8 > VAR_0) {
  FUNC_1(VAR_5->dev, "exceed the maximum frequency of CLK_ADC or CLK_DAC\n");
  return -VAR_1;
 }

 return 0;
}
