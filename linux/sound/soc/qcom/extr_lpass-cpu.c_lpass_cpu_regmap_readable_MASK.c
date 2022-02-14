
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpass_variant {int i2s_ports; int irq_ports; int rdma_channels; int wrdma_channels; scalar_t__ wrdma_channel_start; } ;
struct lpass_data {struct lpass_variant* variant; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (struct lpass_variant*,int) ;
 unsigned int FUNC_1 (struct lpass_variant*,int) ;
 unsigned int FUNC_2 (struct lpass_variant*,int) ;
 unsigned int FUNC_3 (struct lpass_variant*,int) ;
 unsigned int FUNC_4 (struct lpass_variant*,int) ;
 unsigned int FUNC_5 (struct lpass_variant*,int) ;
 unsigned int FUNC_6 (struct lpass_variant*,int) ;
 unsigned int FUNC_7 (struct lpass_variant*,int) ;
 unsigned int FUNC_8 (struct lpass_variant*,scalar_t__) ;
 unsigned int FUNC_9 (struct lpass_variant*,scalar_t__) ;
 unsigned int FUNC_10 (struct lpass_variant*,scalar_t__) ;
 unsigned int FUNC_11 (struct lpass_variant*,scalar_t__) ;
 unsigned int FUNC_12 (struct lpass_variant*,scalar_t__) ;
 struct lpass_data* FUNC_13 (struct device*) ;

__attribute__((used)) static bool FUNC_14(struct device *VAR_0, unsigned int VAR_1)
{
 struct lpass_data *VAR_2 = FUNC_13(VAR_0);
 struct lpass_variant *VAR_3 = VAR_2->variant;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->i2s_ports; ++VAR_4)
  if (VAR_1 == FUNC_0(VAR_3, VAR_4))
   return 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->irq_ports; ++VAR_4) {
  if (VAR_1 == FUNC_1(VAR_3, VAR_4))
   return 1;
  if (VAR_1 == FUNC_2(VAR_3, VAR_4))
   return 1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->rdma_channels; ++VAR_4) {
  if (VAR_1 == FUNC_5(VAR_3, VAR_4))
   return 1;
  if (VAR_1 == FUNC_3(VAR_3, VAR_4))
   return 1;
  if (VAR_1 == FUNC_4(VAR_3, VAR_4))
   return 1;
  if (VAR_1 == FUNC_6(VAR_3, VAR_4))
   return 1;
  if (VAR_1 == FUNC_7(VAR_3, VAR_4))
   return 1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->wrdma_channels; ++VAR_4) {
  if (VAR_1 == FUNC_10(VAR_3, VAR_4 + VAR_3->wrdma_channel_start))
   return 1;
  if (VAR_1 == FUNC_8(VAR_3, VAR_4 + VAR_3->wrdma_channel_start))
   return 1;
  if (VAR_1 == FUNC_9(VAR_3, VAR_4 + VAR_3->wrdma_channel_start))
   return 1;
  if (VAR_1 == FUNC_11(VAR_3, VAR_4 + VAR_3->wrdma_channel_start))
   return 1;
  if (VAR_1 == FUNC_12(VAR_3, VAR_4 + VAR_3->wrdma_channel_start))
   return 1;
 }

 return 0;
}
