
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct adau {int* tdm_slot; int regmap; scalar_t__* dsp_bypass; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int FUNC_2 (struct adau*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,int) ;
 struct adau* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_23,
 unsigned int VAR_24, unsigned int VAR_25, int VAR_26, int VAR_27)
{
 struct adau *VAR_28 = FUNC_5(VAR_23->component);
 unsigned int VAR_29, VAR_30;
 unsigned int VAR_31, VAR_32;


 if (VAR_26 == 0) {
  VAR_26 = 2;
  VAR_25 = 3;
  VAR_24 = 3;
  VAR_27 = 32;
 }

 switch (VAR_26) {
 case 2:
  VAR_29 = VAR_9;
  break;
 case 4:
  VAR_29 = VAR_10;
  break;
 case 8:
  if (VAR_28->type == VAR_0)
   return -VAR_20;

  VAR_29 = VAR_11;
  break;
 default:
  return -VAR_20;
 }

 switch (VAR_27 * VAR_26) {
 case 32:
  if (VAR_28->type == VAR_1)
   return -VAR_20;

  VAR_30 = VAR_16;
  break;
 case 64:
  VAR_30 = VAR_18;
  break;
 case 48:
  VAR_30 = VAR_17;
  break;
 case 128:
  VAR_30 = VAR_14;
  break;
 case 256:
  if (VAR_28->type == VAR_0)
   return -VAR_20;

  VAR_30 = VAR_15;
  break;
 default:
  return -VAR_20;
 }

 switch (VAR_25) {
 case 0x03:
  VAR_32 = FUNC_1(1);
  VAR_28->tdm_slot[VAR_21] = 0;
  break;
 case 0x0c:
  VAR_32 = FUNC_1(2);
  VAR_28->tdm_slot[VAR_21] = 1;
  break;
 case 0x30:
  VAR_32 = FUNC_1(3);
  VAR_28->tdm_slot[VAR_21] = 2;
  break;
 case 0xc0:
  VAR_32 = FUNC_1(4);
  VAR_28->tdm_slot[VAR_21] = 3;
  break;
 default:
  return -VAR_20;
 }

 switch (VAR_24) {
 case 0x03:
  VAR_31 = FUNC_0(1);
  VAR_28->tdm_slot[VAR_22] = 0;
  break;
 case 0x0c:
  VAR_31 = FUNC_0(2);
  VAR_28->tdm_slot[VAR_22] = 1;
  break;
 case 0x30:
  VAR_31 = FUNC_0(3);
  VAR_28->tdm_slot[VAR_22] = 2;
  break;
 case 0xc0:
  VAR_31 = FUNC_0(4);
  VAR_28->tdm_slot[VAR_22] = 3;
  break;
 default:
  return -VAR_20;
 }

 FUNC_3(VAR_28->regmap, VAR_2,
  VAR_3, VAR_31);
 FUNC_3(VAR_28->regmap, VAR_4,
  VAR_5, VAR_32);
 FUNC_3(VAR_28->regmap, VAR_8,
  VAR_12, VAR_29);
 FUNC_3(VAR_28->regmap, VAR_13,
  VAR_19, VAR_30);

 if (!FUNC_2(VAR_28))
  return 0;

 if (VAR_28->dsp_bypass[VAR_22]) {
  FUNC_4(VAR_28->regmap, VAR_6,
   (VAR_28->tdm_slot[VAR_22] * 2) + 1);
 }

 if (VAR_28->dsp_bypass[VAR_21]) {
  FUNC_4(VAR_28->regmap, VAR_7,
   (VAR_28->tdm_slot[VAR_21] * 2) + 1);
 }

 return 0;
}
