
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_ext_bus_ops {int dummy; } ;
struct hdac_bus_ops {int dummy; } ;
struct hdac_bus {int cmd_dma_state; scalar_t__ idx; struct hdac_ext_bus_ops const* ext_ops; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct hdac_bus*,struct device*,struct hdac_bus_ops const*) ;

int FUNC_1(struct hdac_bus *VAR_0, struct device *VAR_1,
   const struct hdac_bus_ops *VAR_2,
   const struct hdac_ext_bus_ops *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_0->ext_ops = VAR_3;





 VAR_0->idx = 0;
 VAR_0->cmd_dma_state = 1;

 return 0;
}
