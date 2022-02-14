
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ac97 {int dummy; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,unsigned short) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static unsigned short FUNC_5(struct snd_ac97 *VAR_10,
           unsigned short VAR_11)
{
 u32 VAR_12;
 unsigned long VAR_13;

 FUNC_2(VAR_9->regmap, VAR_0,
       (((VAR_11 | 0x80) << VAR_3) &
        VAR_2) |
       VAR_1);

 VAR_13 = VAR_8 + FUNC_0(100);

 do {
  FUNC_1(VAR_9->regmap, VAR_4, &VAR_12);
  if (VAR_12 & VAR_7)
   break;
  FUNC_4(1000, 2000);
 } while (!FUNC_3(VAR_8, VAR_13));

 return ((VAR_12 & VAR_5) >>
  VAR_6);
}
