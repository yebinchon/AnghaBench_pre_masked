
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_mcbsp {int fclk; TYPE_1__* dev; TYPE_2__* pdata; int pm_qos_req; int id; } ;
struct TYPE_6__ {int (* free ) (int ) ;} ;
struct TYPE_5__ {scalar_t__ buffer_size; TYPE_3__* ops; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct omap_mcbsp* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct omap_mcbsp *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->pdata->ops && VAR_2->pdata->ops->free)
  VAR_2->pdata->ops->free(VAR_2->id);

 if (FUNC_4(&VAR_2->pm_qos_req))
  FUNC_3(&VAR_2->pm_qos_req);

 if (VAR_2->pdata->buffer_size)
  FUNC_6(&VAR_2->dev->kobj, &VAR_0);

 FUNC_1(VAR_1);

 FUNC_0(VAR_2->fclk);

 return 0;
}
