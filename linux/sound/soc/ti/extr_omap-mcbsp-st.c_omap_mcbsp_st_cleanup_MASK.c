
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_mcbsp {TYPE_2__* st_data; TYPE_1__* dev; } ;
struct TYPE_4__ {int mcbsp_iclk; } ;
struct TYPE_3__ {int kobj; } ;


 int FUNC_0 (int ) ;
 struct omap_mcbsp* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct platform_device *VAR_1)
{
 struct omap_mcbsp *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->st_data) {
  FUNC_2(&VAR_2->dev->kobj, &VAR_0);
  FUNC_0(VAR_2->st_data->mcbsp_iclk);
 }
}
