
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int type; } ;
 int FUNC_0 (struct snd_akm4xxx*,int) ;
 int FUNC_1 (struct snd_akm4xxx*,int) ;
 int FUNC_2 (struct snd_akm4xxx*,int) ;

void FUNC_3(struct snd_akm4xxx *VAR_0, int VAR_1)
{
 switch (VAR_0->type) {
 case 131:
 case 130:
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:

  break;
 case 134:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 133:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 132:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
