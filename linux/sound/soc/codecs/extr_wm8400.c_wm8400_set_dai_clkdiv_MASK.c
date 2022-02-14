
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_7,
  int VAR_8, int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_7->component;
 u16 VAR_11;

 switch (VAR_8) {
 case 128:
  VAR_11 = FUNC_0(VAR_10, VAR_4) &
   ~VAR_6;
  FUNC_1(VAR_10, VAR_4, VAR_11 | VAR_9);
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_10, VAR_4) &
   ~VAR_5;
  FUNC_1(VAR_10, VAR_4, VAR_11 | VAR_9);
  break;
 case 131:
  VAR_11 = FUNC_0(VAR_10, VAR_4) &
   ~VAR_1;
  FUNC_1(VAR_10, VAR_4, VAR_11 | VAR_9);
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_10, VAR_3) &
   ~VAR_2;
  FUNC_1(VAR_10, VAR_3, VAR_11 | VAR_9);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
