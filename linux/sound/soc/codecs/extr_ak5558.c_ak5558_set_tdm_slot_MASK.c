
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ak5558_priv {int slots; int slot_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ak5558_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6, unsigned int VAR_7,
          unsigned int VAR_8, int VAR_9,
          int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_6->component;
 struct ak5558_priv *VAR_12 = FUNC_0(VAR_11);
 int VAR_13;

 VAR_12->slots = VAR_9;
 VAR_12->slot_width = VAR_10;

 switch (VAR_9 * VAR_10) {
 case 128:
  VAR_13 = VAR_3;
  break;
 case 256:
  VAR_13 = VAR_4;
  break;
 case 512:
  VAR_13 = VAR_5;
  break;
 default:
  VAR_13 = VAR_2;
  break;
 }

 FUNC_1(VAR_11, VAR_0, VAR_1,
       VAR_13);
 return 0;
}
