
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct snd_soc_dai {int dev; } ;
struct fsl_sai {size_t* mclk_id; int regmap; scalar_t__* synchronous; int * mclk_clk; scalar_t__ is_slave_mode; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,size_t,size_t,size_t) ;
 int FUNC_5 (int ,char*,char,size_t) ;
 int FUNC_6 (int ,int ,int ,size_t) ;
 struct fsl_sai* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_6, bool VAR_7, u32 VAR_8)
{
 struct fsl_sai *VAR_9 = FUNC_7(VAR_6);
 unsigned int VAR_10 = VAR_9->soc_data->reg_offset;
 unsigned long VAR_11;
 u32 VAR_12 = 0, VAR_13, VAR_14 = VAR_8;
 u32 VAR_15;
 int VAR_16 = 0;


 if (VAR_9->is_slave_mode)
  return 0;

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_11 = FUNC_3(VAR_9->mclk_clk[VAR_15]);
  if (!VAR_11)
   continue;

  VAR_13 = VAR_11 / VAR_8;

  VAR_16 = VAR_11 - VAR_13 * VAR_8;





  if (VAR_16 != 0 && VAR_11 / VAR_16 < 1000)
   continue;

  FUNC_4(VAR_6->dev,
   "ratio %d for freq %dHz based on clock %ldHz\n",
   VAR_13, VAR_8, VAR_11);

  if (VAR_13 % 2 == 0 && VAR_13 >= 2 && VAR_13 <= 512)
   VAR_13 /= 2;
  else
   continue;

  if (VAR_16 < VAR_14) {
   VAR_12 = VAR_13;
   VAR_9->mclk_id[VAR_7] = VAR_15;
   VAR_14 = VAR_16;
  }

  if (VAR_16 == 0)
   break;
 }

 if (VAR_12 == 0) {
  FUNC_5(VAR_6->dev, "failed to derive required %cx rate: %d\n",
    VAR_7 ? 'T' : 'R', VAR_8);
  return -VAR_0;
 }
 if ((VAR_9->synchronous[VAR_5] && !VAR_9->synchronous[VAR_4]) ||
     (!VAR_7 && !VAR_9->synchronous[VAR_4])) {
  FUNC_6(VAR_9->regmap, FUNC_1(VAR_10),
       VAR_2,
       FUNC_0(VAR_9->mclk_id[VAR_7]));
  FUNC_6(VAR_9->regmap, FUNC_1(VAR_10),
       VAR_1, VAR_12 - 1);
 } else if ((VAR_9->synchronous[VAR_4] && !VAR_9->synchronous[VAR_5]) ||
     (VAR_7 && !VAR_9->synchronous[VAR_5])) {
  FUNC_6(VAR_9->regmap, FUNC_2(VAR_10),
       VAR_2,
       FUNC_0(VAR_9->mclk_id[VAR_7]));
  FUNC_6(VAR_9->regmap, FUNC_2(VAR_10),
       VAR_1, VAR_12 - 1);
 }

 FUNC_4(VAR_6->dev, "best fit: clock id=%d, div=%d, deviation =%d\n",
   VAR_9->mclk_id[VAR_7], VAR_12, VAR_14);

 return 0;
}
