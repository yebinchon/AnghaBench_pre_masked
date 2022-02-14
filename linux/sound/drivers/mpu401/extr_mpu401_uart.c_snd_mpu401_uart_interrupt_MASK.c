
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_mpu401*) ;

irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct snd_mpu401 *VAR_4 = VAR_3;

 if (!VAR_4)
  return VAR_1;
 FUNC_0(VAR_4);
 return VAR_0;
}
