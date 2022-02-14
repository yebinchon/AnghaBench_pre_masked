
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_device {struct cs8427* private_data; } ;
struct cs8427 {int* regmap; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_i2c_device*,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct snd_i2c_device *VAR_2, int VAR_3)
{
 struct cs8427 *VAR_4 = VAR_2->private_data;
 int VAR_5;

 VAR_3 = VAR_3 ? VAR_0 : 0;
 if (VAR_3 != (VAR_4->regmap[VAR_1] & VAR_3)) {
  VAR_4->regmap[VAR_1] &= ~VAR_0;
  VAR_4->regmap[VAR_1] |= VAR_3;
  VAR_5 = FUNC_0(VAR_2, VAR_1,
        VAR_4->regmap[VAR_1]);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
