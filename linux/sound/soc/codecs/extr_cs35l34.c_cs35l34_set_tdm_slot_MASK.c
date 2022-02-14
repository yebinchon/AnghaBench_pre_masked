
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cs35l34_private {int tdm_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int) ;
 struct cs35l34_private* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_9, unsigned int VAR_10,
    unsigned int VAR_11, int VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_9->component;
 struct cs35l34_private *VAR_15 = FUNC_1(VAR_14);
 unsigned int VAR_16, VAR_17;
 int VAR_18, VAR_19;

 if (VAR_13 != 8)
  return -VAR_8;

 VAR_15->tdm_mode = 1;

 VAR_18 = FUNC_0(VAR_11) - 1;
 if (VAR_18 >= 0)
  FUNC_2(VAR_14, VAR_0,
     VAR_6, VAR_18);




 VAR_18 = FUNC_0(VAR_10) - 1;
 VAR_19 = 0;


 FUNC_2(VAR_14, VAR_3,
    VAR_7 | VAR_6,
    VAR_7 | VAR_6);
 FUNC_2(VAR_14, VAR_4,
    VAR_7 | VAR_6,
    VAR_7 | VAR_6);


 while (VAR_18 >= 0) {

  if (VAR_19 == 0)
   FUNC_2(VAR_14, VAR_1,
     VAR_7 | VAR_6, VAR_18);


  if (VAR_19 == 4) {
   FUNC_2(VAR_14, VAR_2,
     VAR_7 | VAR_6, VAR_18);
  }

  if (VAR_19 == 3) {
   FUNC_2(VAR_14, VAR_3,
     VAR_7 | VAR_6, VAR_18);
  }

  if (VAR_19 == 7) {
   FUNC_2(VAR_14,
    VAR_4,
    VAR_7 | VAR_6, VAR_18);
  }


  VAR_16 = VAR_5 - (VAR_18/8);
  VAR_17 = VAR_18 - ((VAR_18 / 8) * (8));
  FUNC_2(VAR_14, VAR_16,
   1 << VAR_17, 1 << VAR_17);

  VAR_10 &= ~(1 << VAR_18);
  VAR_18 = FUNC_0(VAR_10) - 1;
  VAR_19++;
 }

 return 0;
}
