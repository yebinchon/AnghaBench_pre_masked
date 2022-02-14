
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned short u32 ;
struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned short*) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_8,
         unsigned short VAR_9, unsigned short VAR_10)
{
 u32 VAR_11;
 unsigned long VAR_12;

 FUNC_2(VAR_7->regmap, VAR_0,
       ((VAR_9 << VAR_3) &
        VAR_2) |
       ((VAR_10 << VAR_5) &
        VAR_4) |
       VAR_1);

 VAR_12 = VAR_6 + FUNC_0(100);

 do {
  FUNC_1(VAR_7->regmap, VAR_0, &VAR_11);
  if (!(VAR_11 & VAR_1))
   break;
  FUNC_4(1000, 2000);
 } while (!FUNC_3(VAR_6, VAR_12));
}
