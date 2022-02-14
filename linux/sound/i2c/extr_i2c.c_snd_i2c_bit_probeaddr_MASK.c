
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_i2c_bus*,unsigned short) ;
 int FUNC_1 (struct snd_i2c_bus*) ;
 int FUNC_2 (struct snd_i2c_bus*) ;

__attribute__((used)) static int FUNC_3(struct snd_i2c_bus *VAR_2, unsigned short VAR_3)
{
 int VAR_4;

 if (VAR_3 & 0x8000)
  return -VAR_1;
 if (VAR_3 & 0x7f80)
  return -VAR_0;
 FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_2, VAR_3 << 1);
 FUNC_2(VAR_2);
 return VAR_4;
}
