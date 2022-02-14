
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {unsigned int pll_in; unsigned int pll_out; int regvalue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_12, int VAR_13,
  int VAR_14, unsigned int VAR_15, unsigned int VAR_16)
{
 int VAR_17;
 struct snd_soc_component *VAR_18 = VAR_12->component;
 int VAR_19 = 0, VAR_20 = 0;
 u16 VAR_21;

 if (VAR_13 < 128 || VAR_13 > 129)
  return -VAR_9;


 FUNC_2(VAR_18, VAR_7,
    VAR_6,
    0);


 VAR_21 = FUNC_1(VAR_18, VAR_0);
 if (VAR_21 & VAR_1)
  return 0;

 if (!VAR_15 || !VAR_16)
  return 0;

 switch (VAR_13) {
 case 128:
  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_10); VAR_17++) {
   if (VAR_10[VAR_17].pll_in == VAR_15
      && VAR_10[VAR_17].pll_out == VAR_16) {

    VAR_20 = VAR_10[VAR_17].regvalue;
    break;
   }
  }
  break;
 case 129:
  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_11); VAR_17++) {
   if (VAR_11[VAR_17].pll_in == VAR_15
      && VAR_11[VAR_17].pll_out == VAR_16) {

    VAR_19 = VAR_2;
    VAR_20 = VAR_11[VAR_17].regvalue;
    break;
   }
  }
  break;
 default:
  return -VAR_8;
 }

 if (!VAR_20)
  return -VAR_8;

 FUNC_3(VAR_18, VAR_4, VAR_19);
 FUNC_3(VAR_18, VAR_5, VAR_20);
 FUNC_2(VAR_18, VAR_7,
    VAR_6,
    VAR_6);
 VAR_19 |= VAR_3;
 FUNC_3(VAR_18, VAR_4, VAR_19);

 return 0;
}
