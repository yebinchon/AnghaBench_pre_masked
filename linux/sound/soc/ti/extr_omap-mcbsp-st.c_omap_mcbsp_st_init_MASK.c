
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct omap_mcbsp_st_data {int io_base_st; int * mcbsp_iclk; } ;
struct omap_mcbsp {struct omap_mcbsp_st_data* st_data; TYPE_1__* dev; } ;
struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 struct omap_mcbsp_st_data* FUNC_4 (TYPE_1__*,int,int ) ;
 struct omap_mcbsp* FUNC_5 (struct platform_device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;
 int FUNC_7 (struct resource*) ;
 int VAR_3 ;
 int FUNC_8 (int *,int *) ;

int FUNC_9(struct platform_device *VAR_4)
{
 struct omap_mcbsp *VAR_5 = FUNC_5(VAR_4);
 struct omap_mcbsp_st_data *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_4, VAR_2, "sidetone");
 if (!VAR_7)
  return 0;

 VAR_6 = FUNC_4(VAR_5->dev, sizeof(*VAR_5->st_data), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->mcbsp_iclk = FUNC_1(VAR_5->dev, "ick");
 if (FUNC_0(VAR_6->mcbsp_iclk)) {
  FUNC_2(VAR_5->dev,
    "Failed to get ick, sidetone might be broken\n");
  VAR_6->mcbsp_iclk = ((void*)0);
 }

 VAR_6->io_base_st = FUNC_3(VAR_5->dev, VAR_7->start,
        FUNC_7(VAR_7));
 if (!VAR_6->io_base_st)
  return -VAR_0;

 VAR_8 = FUNC_8(&VAR_5->dev->kobj, &VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_5->st_data = VAR_6;

 return 0;
}
