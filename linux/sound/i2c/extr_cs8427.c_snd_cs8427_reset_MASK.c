
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_device {int bus; struct cs8427* private_data; } ;
struct cs8427 {int* regmap; unsigned long reset_timeout; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_i2c_device*,int ) ;
 int FUNC_3 (struct snd_i2c_device*,size_t,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct snd_i2c_device *VAR_8)
{
 struct cs8427 *VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12 = 0;

 if (FUNC_1(!VAR_8))
  return;
 VAR_9 = VAR_8->private_data;
 FUNC_4(VAR_8->bus);
 if ((VAR_9->regmap[VAR_0] & VAR_3) ==
     VAR_3)
  VAR_12 = 1;
 VAR_9->regmap[VAR_0] &= ~(VAR_2 | VAR_5);
 FUNC_3(VAR_8, VAR_0,
        VAR_9->regmap[VAR_0]);
 FUNC_7(200);
 VAR_9->regmap[VAR_0] |= VAR_2 | VAR_4;
 FUNC_3(VAR_8, VAR_0,
        VAR_9->regmap[VAR_0]);
 FUNC_7(200);
 FUNC_5(VAR_8->bus);
 VAR_10 = VAR_7 + VAR_9->reset_timeout;
 while (FUNC_6(VAR_10, VAR_7)) {
  FUNC_4(VAR_8->bus);
  VAR_11 = FUNC_2(VAR_8, VAR_1);
  FUNC_5(VAR_8->bus);
  if (!(VAR_11 & VAR_6))
   break;
  FUNC_0(1);
 }
 FUNC_4(VAR_8->bus);
 VAR_9->regmap[VAR_0] &= ~VAR_5;
 if (VAR_12)
  VAR_9->regmap[VAR_0] |= VAR_3;
 FUNC_3(VAR_8, VAR_0,
        VAR_9->regmap[VAR_0]);
 FUNC_5(VAR_8->bus);
}
