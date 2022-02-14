
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_13, int VAR_14)
{
 struct snd_soc_component *VAR_15 = VAR_13->component;
 unsigned int VAR_16;
 u8 VAR_17;

 if (VAR_14) {



  FUNC_1(VAR_15, VAR_5,
      VAR_12, 0);

  FUNC_1(VAR_15, VAR_6,
    VAR_7,
    0 << VAR_8);


  FUNC_1(VAR_15, VAR_2,
    VAR_0 |
    VAR_1,
    VAR_0 |
    VAR_1);
 } else {
  FUNC_1(VAR_15, VAR_6,
    VAR_7,
    1 << VAR_8);

  VAR_16 = FUNC_0(VAR_15, VAR_4);
  if (((VAR_16 & VAR_10) >>
   VAR_11) == VAR_9) {
   VAR_17 = VAR_3;
  } else {
   VAR_17 = 0;
  }


  FUNC_1(VAR_15, VAR_2,
    VAR_0 |
    VAR_1 |
    VAR_3, VAR_17);


  FUNC_1(VAR_15, VAR_5,
    VAR_12,
    VAR_12);
 }

 return 0;
}
