
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct hi6210_i2s {int dai; int clocks; void** clk; void* sysctrl; scalar_t__ base_phys; void* base; int lock; struct device* dev; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,struct hi6210_i2s*) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 struct hi6210_i2s* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int *,int ) ;
 int FUNC_8 (struct device*,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device *VAR_9 = &VAR_7->dev;
 struct hi6210_i2s *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->dev = VAR_9;
 FUNC_10(&VAR_10->lock);

 VAR_11 = FUNC_9(VAR_7, VAR_4, 0);
 VAR_10->base = FUNC_5(VAR_9, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_2(VAR_10->base);

 VAR_10->base_phys = (phys_addr_t)VAR_11->start;
 VAR_10->dai = VAR_5;

 FUNC_3(&VAR_7->dev, VAR_10);

 VAR_10->sysctrl = FUNC_11(VAR_8,
      "hisilicon,sysctrl-syscon");
 if (FUNC_0(VAR_10->sysctrl))
  return FUNC_2(VAR_10->sysctrl);

 VAR_10->clk[VAR_0] = FUNC_4(&VAR_7->dev, "dacodec");
 if (FUNC_1(VAR_10->clk[VAR_0]))
  return FUNC_2(VAR_10->clk[VAR_0]);
 VAR_10->clocks++;

 VAR_10->clk[VAR_1] = FUNC_4(&VAR_7->dev, "i2s-base");
 if (FUNC_1(VAR_10->clk[VAR_1]))
  return FUNC_2(VAR_10->clk[VAR_1]);
 VAR_10->clocks++;

 VAR_12 = FUNC_7(&VAR_7->dev, ((void*)0), 0);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(&VAR_7->dev, &VAR_6,
      &VAR_10->dai, 1);
 return VAR_12;
}
