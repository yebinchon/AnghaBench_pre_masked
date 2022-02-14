
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;







 int VAR_11 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_12, struct snd_card *VAR_13, int VAR_14)
{
 int VAR_15;

 switch (VAR_12) {
 case 132:
  if (FUNC_1(!VAR_13 || VAR_14 < 0 || VAR_14 > 1))
   return -VAR_0;
  VAR_15 = FUNC_0(VAR_13->number, (VAR_14 ? VAR_5 : VAR_4));
  break;
 case 129:
  VAR_15 = VAR_9;
  break;
 case 131:
  VAR_15 = VAR_6;
  break;
 case 130:
  if (FUNC_1(!VAR_13 || VAR_14 < 0 || VAR_14 > 1))
   return -VAR_0;
  VAR_15 = FUNC_0(VAR_13->number, (VAR_14 ? VAR_8 : VAR_7));
  break;
 case 133:
  if (FUNC_1(!VAR_13 || VAR_14 < 0 || VAR_14 > 1))
   return -VAR_0;
  VAR_15 = FUNC_0(VAR_13->number, (VAR_14 ? VAR_3 : VAR_2));
  break;
 case 134:
  VAR_15 = FUNC_0(VAR_13->number, VAR_1);
  break;
 case 128:
  VAR_15 = VAR_10;
  break;
 default:
  return -VAR_0;
 }
 if (VAR_15 < 0 || VAR_15 >= VAR_11)
  return -VAR_0;
 return VAR_15;
}
