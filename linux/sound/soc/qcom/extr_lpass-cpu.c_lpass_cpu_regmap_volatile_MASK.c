
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpass_variant {int irq_ports; int rdma_channels; int wrdma_channels; scalar_t__ wrdma_channel_start; } ;
struct lpass_data {struct lpass_variant* variant; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (struct lpass_variant*,int) ;
 unsigned int FUNC_1 (struct lpass_variant*,int) ;
 unsigned int FUNC_2 (struct lpass_variant*,scalar_t__) ;
 struct lpass_data* FUNC_3 (struct device*) ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_0, unsigned int VAR_1)
{
 struct lpass_data *VAR_2 = FUNC_3(VAR_0);
 struct lpass_variant *VAR_3 = VAR_2->variant;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->irq_ports; ++VAR_4)
  if (VAR_1 == FUNC_0(VAR_3, VAR_4))
   return 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->rdma_channels; ++VAR_4)
  if (VAR_1 == FUNC_1(VAR_3, VAR_4))
   return 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->wrdma_channels; ++VAR_4)
  if (VAR_1 == FUNC_2(VAR_3, VAR_4 + VAR_3->wrdma_channel_start))
   return 1;

 return 0;
}
