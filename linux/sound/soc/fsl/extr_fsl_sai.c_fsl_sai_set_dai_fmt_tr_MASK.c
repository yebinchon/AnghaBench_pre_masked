
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct fsl_sai {int is_dsp_mode; int is_slave_mode; int regmap; int is_lsb_first; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int,unsigned int) ;






 unsigned int VAR_8 ;



 unsigned int VAR_9 ;

 unsigned int VAR_10 ;



 int FUNC_2 (int ,int ,int,int) ;
 struct fsl_sai* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_11,
    unsigned int VAR_12, int VAR_13)
{
 struct fsl_sai *VAR_14 = FUNC_3(VAR_11);
 unsigned int VAR_15 = VAR_14->soc_data->reg_offset;
 bool VAR_16 = VAR_13 == VAR_1;
 u32 VAR_17 = 0, VAR_18 = 0;

 if (!VAR_14->is_lsb_first)
  VAR_18 |= VAR_7;


 switch (VAR_12 & VAR_8) {
 case 134:






  VAR_17 |= VAR_3;
  VAR_18 |= VAR_5 | VAR_6;
  break;
 case 131:




  VAR_17 |= VAR_3;
  break;
 case 136:






  VAR_17 |= VAR_3;
  VAR_18 |= VAR_5;
  VAR_14->is_dsp_mode = 1;
  break;
 case 135:




  VAR_17 |= VAR_3;
  VAR_14->is_dsp_mode = 1;
  break;
 case 128:

 default:
  return -VAR_0;
 }


 switch (VAR_12 & VAR_9) {
 case 133:

  VAR_17 ^= VAR_3;
  VAR_18 ^= VAR_6;
  break;
 case 132:

  VAR_17 ^= VAR_3;
  break;
 case 130:

  VAR_18 ^= VAR_6;
  break;
 case 129:

  break;
 default:
  return -VAR_0;
 }


 switch (VAR_12 & VAR_10) {
 case 137:
  VAR_17 |= VAR_2;
  VAR_18 |= VAR_4;
  VAR_14->is_slave_mode = 0;
  break;
 case 140:
  VAR_14->is_slave_mode = 1;
  break;
 case 138:
  VAR_17 |= VAR_2;
  VAR_14->is_slave_mode = 0;
  break;
 case 139:
  VAR_18 |= VAR_4;
  VAR_14->is_slave_mode = 1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_14->regmap, FUNC_0(VAR_16, VAR_15),
      VAR_3 | VAR_2, VAR_17);
 FUNC_2(VAR_14->regmap, FUNC_1(VAR_16, VAR_15),
      VAR_7 | VAR_5 |
      VAR_6 | VAR_4, VAR_18);

 return 0;
}
