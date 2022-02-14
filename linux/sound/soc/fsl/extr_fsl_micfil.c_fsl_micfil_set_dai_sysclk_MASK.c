
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct fsl_micfil {int mclk; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,unsigned int) ;
 int FUNC_2 (struct fsl_micfil*,unsigned int) ;
 struct fsl_micfil* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_0, int VAR_1,
         unsigned int VAR_2, int VAR_3)
{
 struct fsl_micfil *VAR_4 = FUNC_3(VAR_0);
 struct device *VAR_5 = &VAR_4->pdev->dev;

 int VAR_6;

 if (!VAR_2)
  return 0;

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (VAR_6 < 0)
  FUNC_1(VAR_5, "failed to set mclk[%lu] to rate %u\n",
   FUNC_0(VAR_4->mclk), VAR_2);

 return VAR_6;
}
