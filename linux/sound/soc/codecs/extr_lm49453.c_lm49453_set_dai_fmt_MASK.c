
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 unsigned int VAR_6 ;

 unsigned int VAR_7 ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_8, unsigned int VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_8->component;

 u16 VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

 switch (VAR_9 & VAR_7) {
 case 131:
  VAR_11 = 0;
  break;
 case 132:
  VAR_11 = VAR_3;
  break;
 case 133:
  VAR_11 = VAR_1;
  break;
 case 134:
  VAR_11 = VAR_1 |
     VAR_3;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_9 & VAR_6) {
 case 128:
  break;
 case 130:
  VAR_12 = 1;
  VAR_13 = (1 << 5);
  VAR_14 = 1;
  break;
 case 129:
  VAR_12 = 1;
  VAR_13 = (1 << 5);
  VAR_14 = 0;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_10, VAR_4,
       VAR_2|FUNC_0(0)|FUNC_0(5),
       (VAR_11 | VAR_12 | VAR_13));

 FUNC_2(VAR_10, VAR_5, VAR_14);

 return 0;
}
