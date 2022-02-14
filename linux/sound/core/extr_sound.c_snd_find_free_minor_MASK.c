
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_2(int VAR_4, struct snd_card *VAR_5, int VAR_6)
{
 int VAR_7;

 switch (VAR_4) {
 case 129:
 case 128:
  VAR_7 = VAR_4;
  break;
 case 134:
  if (FUNC_1(!VAR_5))
   return -VAR_1;
  VAR_7 = FUNC_0(VAR_5->number, VAR_4);
  break;
 case 133:
 case 130:
 case 131:
 case 132:
 case 135:
  if (FUNC_1(!VAR_5))
   return -VAR_1;
  VAR_7 = FUNC_0(VAR_5->number, VAR_4 + VAR_6);
  break;
 default:
  return -VAR_1;
 }
 if (FUNC_1(VAR_7 < 0 || VAR_7 >= VAR_2))
  return -VAR_1;
 if (VAR_3[VAR_7])
  return -VAR_0;
 return VAR_7;
}
