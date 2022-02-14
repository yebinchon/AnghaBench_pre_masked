
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct fsl_sai {int regmap; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct fsl_sai* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
  int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct fsl_sai *VAR_11 = FUNC_2(VAR_7);
 unsigned int VAR_12 = VAR_11->soc_data->reg_offset;
 bool VAR_13 = VAR_10 == VAR_1;
 u32 VAR_14 = 0;

 switch (VAR_8) {
 case 131:
  VAR_14 |= VAR_2;
  break;
 case 130:
  VAR_14 |= VAR_4;
  break;
 case 129:
  VAR_14 |= VAR_5;
  break;
 case 128:
  VAR_14 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_11->regmap, FUNC_0(VAR_13, VAR_12),
      VAR_3, VAR_14);

 return 0;
}
