
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssp_priv {int sysclk; scalar_t__ extclk; struct ssp_device* ssp; } ;
struct ssp_device {scalar_t__ type; int clk; TYPE_1__* pdev; } ;
struct snd_soc_dai {int id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 (int *,char*,int ,int,unsigned int) ;
 int FUNC_4 (struct ssp_device*,int ) ;
 int FUNC_5 (struct ssp_device*,int) ;
 int FUNC_6 (struct ssp_device*,int ,int) ;
 struct ssp_priv* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_8,
 int VAR_9, unsigned int VAR_10, int VAR_11)
{
 struct ssp_priv *VAR_12 = FUNC_7(VAR_8);
 struct ssp_device *VAR_13 = VAR_12->ssp;

 u32 VAR_14 = FUNC_4(VAR_13, VAR_3) &
  ~(VAR_5 | VAR_7 | VAR_6 | VAR_4);

 if (VAR_12->extclk) {
  int VAR_15;






  VAR_15 = FUNC_2(VAR_12->extclk, VAR_10);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_9 = 131;
 }

 FUNC_3(&VAR_13->pdev->dev,
  "pxa_ssp_set_dai_sysclk id: %d, clk_id %d, freq %u\n",
  VAR_8->id, VAR_9, VAR_10);

 switch (VAR_9) {
 case 129:
  VAR_14 |= VAR_6;
  break;
 case 128:

  if (VAR_13->type == VAR_1)
   VAR_12->sysclk = 1843200;
  else
   VAR_12->sysclk = 13000000;
  break;
 case 131:
  VAR_12->sysclk = VAR_10;
  VAR_14 |= VAR_5;
  break;
 case 130:
  VAR_12->sysclk = VAR_10;
  VAR_14 |= VAR_7 | VAR_6;
  break;
 case 132:
  VAR_12->sysclk = 0;
  FUNC_5(VAR_13, 1);
  VAR_14 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }



 if (VAR_13->type != VAR_2)
  FUNC_0(VAR_13->clk);
 FUNC_6(VAR_13, VAR_3, VAR_14);
 if (VAR_13->type != VAR_2)
  FUNC_1(VAR_13->clk);

 return 0;
}
