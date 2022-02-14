
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;
 int VAR_10, VAR_11, VAR_12;

 switch (VAR_7->id) {
 case 0:
  VAR_10 = VAR_1;
  VAR_12 = VAR_2;
  break;
 case 1:
  VAR_10 = VAR_3;
  VAR_12 = VAR_4;
  break;
 case 2:
  VAR_10 = VAR_6;
  VAR_12 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8)
  VAR_11 = VAR_12;
 else
  VAR_11 = 0;

 return FUNC_0(VAR_9, VAR_10, VAR_12, VAR_11);
}
