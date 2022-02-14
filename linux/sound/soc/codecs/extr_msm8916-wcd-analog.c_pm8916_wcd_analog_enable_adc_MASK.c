
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct snd_soc_dapm_widget {scalar_t__ reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
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



 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_12,
      struct snd_kcontrol *VAR_13,
      int VAR_14)
{
 struct snd_soc_component *VAR_15 = FUNC_1(VAR_12->dapm);
 u16 VAR_16 = VAR_1;
 u8 VAR_17;

 if (VAR_12->reg == 133)
  VAR_17 = 5;
 else
  VAR_17 = 4;

 switch (VAR_14) {
 case 128:
  if (VAR_12->reg == 132)
   FUNC_0(VAR_15, VAR_0,
         VAR_11,
         VAR_10);





  FUNC_2(10000, 10010);
  FUNC_0(VAR_15, VAR_16, 1 << VAR_17,
        1 << VAR_17);
  switch (VAR_12->reg) {
  case 133:
   FUNC_0(VAR_15, VAR_2,
         VAR_5,
         VAR_4);
   break;
  case 132:
  case 131:
   FUNC_0(VAR_15, VAR_3,
         VAR_8,
         VAR_7);
   break;
  }
  break;
 case 129:




  FUNC_2(12000, 12010);
  FUNC_0(VAR_15, VAR_16, 1 << VAR_17, 0x00);
  break;
 case 130:
  switch (VAR_12->reg) {
  case 133:
   FUNC_0(VAR_15, VAR_2,
         VAR_5,
         VAR_6);
   break;
  case 132:
   FUNC_0(VAR_15, VAR_0,
         VAR_11, 0);

  case 131:
   FUNC_0(VAR_15, VAR_3,
         VAR_8,
         VAR_9);
   break;
  }


  break;
 }
 return 0;
}
