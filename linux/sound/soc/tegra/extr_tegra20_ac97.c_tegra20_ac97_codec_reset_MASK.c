
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {int regmap; int reset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_6(struct snd_ac97 *VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;


 FUNC_0(VAR_3->reset_gpio, 0);
 FUNC_4(2);

 FUNC_0(VAR_3->reset_gpio, 1);
 FUNC_4(2);

 VAR_6 = VAR_2 + FUNC_1(100);

 do {
  FUNC_2(VAR_3->regmap, VAR_0, &VAR_5);
  if (VAR_5 & VAR_1)
   break;
  FUNC_5(1000, 2000);
 } while (!FUNC_3(VAR_2, VAR_6));
}
