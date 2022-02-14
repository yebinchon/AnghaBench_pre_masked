
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {int regmap; int sync_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_9(struct snd_ac97 *VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;






 FUNC_2(VAR_3->sync_gpio, "codec-sync");

 FUNC_0(VAR_3->sync_gpio, 1);

 FUNC_7(2);
 FUNC_3(VAR_3->sync_gpio, 0);
 FUNC_7(2);
 FUNC_1(VAR_3->sync_gpio);

 VAR_6 = VAR_2 + FUNC_4(100);

 do {
  FUNC_5(VAR_3->regmap, VAR_0, &VAR_5);
  if (VAR_5 & VAR_1)
   break;
  FUNC_8(1000, 2000);
 } while (!FUNC_6(VAR_2, VAR_6));
}
