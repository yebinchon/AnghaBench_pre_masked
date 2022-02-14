
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;


__attribute__((used)) static int FUNC_0(struct snd_rme9652 *VAR_5)
{
 switch (VAR_5->control_register & VAR_4) {
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 }

 return 0;
}
