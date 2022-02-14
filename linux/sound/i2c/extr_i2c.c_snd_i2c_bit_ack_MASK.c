
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_i2c_bus*,int) ;
 int FUNC_1 (struct snd_i2c_bus*,int,int) ;
 int FUNC_2 (struct snd_i2c_bus*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_i2c_bus *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, 0, 1);
 FUNC_2(VAR_1, 1, 1);
 FUNC_1(VAR_1, 1, 0);
 VAR_2 = FUNC_0(VAR_1, 1);
 FUNC_1(VAR_1, 1, 1);
 FUNC_2(VAR_1, 0, 1);
 return VAR_2 ? -VAR_0 : 0;
}
