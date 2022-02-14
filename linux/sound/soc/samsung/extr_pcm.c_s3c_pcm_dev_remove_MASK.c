
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_pcm_info {int pclk; int cclk; } ;
struct platform_device {size_t id; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct s3c_pcm_info* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct s3c_pcm_info *VAR_2 = &VAR_0[VAR_1->id];

 FUNC_1(&VAR_1->dev);
 FUNC_0(VAR_2->cclk);
 FUNC_0(VAR_2->pclk);

 return 0;
}
