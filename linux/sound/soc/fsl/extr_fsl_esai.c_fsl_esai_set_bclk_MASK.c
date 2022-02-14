
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct fsl_esai {int* hck_rate; int* sck_rate; scalar_t__* sck_div; scalar_t__ slave_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_soc_dai*,int,int,int,int) ;
 struct fsl_esai* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, bool VAR_2, u32 VAR_3)
{
 struct fsl_esai *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5 = VAR_4->hck_rate[VAR_2];
 u32 VAR_6, VAR_7 = VAR_5 / VAR_3;
 int VAR_8;


 if (VAR_4->slave_mode || VAR_4->sck_rate[VAR_2] == VAR_3)
  return 0;

 if (VAR_7 * VAR_3 > VAR_5)
  VAR_6 = VAR_7 * VAR_3 - VAR_5;
 else if (VAR_7 * VAR_3 < VAR_5)
  VAR_6 = VAR_5 - VAR_7 * VAR_3;
 else
  VAR_6 = 0;


 if (VAR_6 != 0 && VAR_5 / VAR_6 < 1000) {
  FUNC_0(VAR_1->dev, "failed to derive required SCK%c rate\n",
    VAR_2 ? 'T' : 'R');
  return -VAR_0;
 }


 if (!VAR_4->sck_div[VAR_2] && (VAR_7 > 16 || VAR_7 == 0)) {
  FUNC_0(VAR_1->dev, "the ratio is out of range (1 ~ 16)\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_7, 1,
   VAR_4->sck_div[VAR_2] ? 0 : VAR_7);
 if (VAR_8)
  return VAR_8;


 VAR_4->sck_rate[VAR_2] = VAR_3;

 return 0;
}
