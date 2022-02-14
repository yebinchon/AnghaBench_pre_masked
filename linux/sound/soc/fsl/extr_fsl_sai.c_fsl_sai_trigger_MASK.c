
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct fsl_sai {int regmap; int is_slave_mode; scalar_t__* synchronous; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,unsigned int) ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;






 size_t VAR_10 ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int ) ;
 struct fsl_sai* FUNC_8 (struct snd_soc_dai*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_11, int VAR_12,
  struct snd_soc_dai *VAR_13)
{
 struct fsl_sai *VAR_14 = FUNC_8(VAR_13);
 unsigned int VAR_15 = VAR_14->soc_data->reg_offset;

 bool VAR_16 = VAR_11->stream == VAR_9;
 u32 VAR_17, VAR_18 = 100;






 FUNC_6(VAR_14->regmap, FUNC_2(VAR_15), VAR_1,
      VAR_14->synchronous[VAR_10] ? VAR_1 : 0);
 FUNC_6(VAR_14->regmap, FUNC_0(VAR_15), VAR_1,
      VAR_14->synchronous[VAR_8] ? VAR_1 : 0);





 switch (VAR_12) {
 case 130:
 case 131:
 case 132:
  FUNC_6(VAR_14->regmap, FUNC_4(VAR_16, VAR_15),
       VAR_3, VAR_3);

  FUNC_6(VAR_14->regmap, FUNC_1(VAR_15),
       VAR_5, VAR_5);
  FUNC_6(VAR_14->regmap, FUNC_3(VAR_15),
       VAR_5, VAR_5);

  FUNC_6(VAR_14->regmap, FUNC_4(VAR_16, VAR_15),
       VAR_6, VAR_7);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_6(VAR_14->regmap, FUNC_4(VAR_16, VAR_15),
       VAR_3, 0);
  FUNC_6(VAR_14->regmap, FUNC_4(VAR_16, VAR_15),
       VAR_6, 0);


  FUNC_5(VAR_14->regmap, FUNC_4(!VAR_16, VAR_15), &VAR_17);
  if (!(VAR_17 & VAR_3)) {

   FUNC_6(VAR_14->regmap, FUNC_3(VAR_15),
        VAR_5, 0);
   FUNC_6(VAR_14->regmap, FUNC_1(VAR_15),
        VAR_5, 0);


   do {
    FUNC_9(10);
    FUNC_5(VAR_14->regmap,
         FUNC_4(VAR_16, VAR_15), &VAR_17);
   } while (--VAR_18 && VAR_17 & VAR_5);

   FUNC_6(VAR_14->regmap, FUNC_3(VAR_15),
        VAR_2, VAR_2);
   FUNC_6(VAR_14->regmap, FUNC_1(VAR_15),
        VAR_2, VAR_2);
   if (!VAR_14->is_slave_mode) {

    FUNC_7(VAR_14->regmap, FUNC_3(VAR_15),
          VAR_4);
    FUNC_7(VAR_14->regmap, FUNC_1(VAR_15),
          VAR_4);

    FUNC_7(VAR_14->regmap, FUNC_3(VAR_15), 0);
    FUNC_7(VAR_14->regmap, FUNC_1(VAR_15), 0);
   }
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
