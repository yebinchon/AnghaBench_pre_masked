
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_7, u32 VAR_8)
{
 struct snd_soc_component *VAR_9 = VAR_7->component;
 u8 VAR_10 = 0;


 switch (VAR_8 & VAR_5) {
 case 129:
  VAR_10 = VAR_3;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(VAR_9, VAR_6, VAR_0, VAR_10);

 return 0;
}
