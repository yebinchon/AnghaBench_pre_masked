
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_micfil {int mclk; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct device*,char*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct fsl_micfil *VAR_0,
        unsigned int VAR_1)
{
 struct device *VAR_2 = &VAR_0->pdev->dev;
 int VAR_3;

 FUNC_0(VAR_0->mclk);

 VAR_3 = FUNC_2(VAR_0->mclk, VAR_1 * 1024);
 if (VAR_3)
  FUNC_3(VAR_2, "failed to set rate (%u): %d\n",
    VAR_1 * 1024, VAR_3);

 FUNC_1(VAR_0->mclk);

 return VAR_3;
}
