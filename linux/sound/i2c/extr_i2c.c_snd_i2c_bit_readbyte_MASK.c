
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_bus {int dummy; } ;


 scalar_t__ FUNC_0 (struct snd_i2c_bus*,int ) ;
 int FUNC_1 (struct snd_i2c_bus*,int,int) ;
 int FUNC_2 (struct snd_i2c_bus*,int) ;
 int FUNC_3 (struct snd_i2c_bus*,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_i2c_bus *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned char VAR_3 = 0;

 FUNC_3(VAR_0, 0, 1);
 FUNC_1(VAR_0, 1, 0);
 for (VAR_2 = 7; VAR_2 >= 0; VAR_2--) {
  FUNC_3(VAR_0, 1, 1);
  if (FUNC_0(VAR_0, 0))
   VAR_3 |= (1 << VAR_2);
  FUNC_3(VAR_0, 0, 1);
 }
 FUNC_1(VAR_0, 1, 1);
 FUNC_2(VAR_0, !!VAR_1);
 return VAR_3;
}
