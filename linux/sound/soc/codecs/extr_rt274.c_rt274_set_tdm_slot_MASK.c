
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_7, unsigned int VAR_8,
   unsigned int VAR_9, int VAR_10, int VAR_11)

{
 struct snd_soc_component *VAR_12 = VAR_7->component;

 if (VAR_9 || VAR_8) {
  FUNC_1(VAR_12,
   VAR_1, VAR_6, VAR_6);
 } else {
  FUNC_1(VAR_12,
   VAR_1, VAR_6, VAR_5);
  return 0;
 }

 switch (VAR_10) {
 case 4:
  FUNC_1(VAR_12,
   VAR_1, VAR_4, VAR_3);
  break;
 case 2:
  FUNC_1(VAR_12,
   VAR_1, VAR_4, VAR_2);
  break;
 default:
  FUNC_0(VAR_12->dev,
   "Support 2 or 4 slots TDM only\n");
  return -VAR_0;
 }

 return 0;
}
