
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_spdifrx_data {int ctrl_chan; TYPE_2__* desc; TYPE_1__* dmab; } ;
typedef int dma_cookie_t ;
struct TYPE_5__ {struct stm32_spdifrx_data* callback_param; int callback; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct stm32_spdifrx_data *VAR_5)
{
 dma_cookie_t VAR_6;
 int VAR_7;

 VAR_5->desc = FUNC_2(VAR_5->ctrl_chan,
          VAR_5->dmab->addr,
          VAR_3,
          VAR_1,
          VAR_0);
 if (!VAR_5->desc)
  return -VAR_2;

 VAR_5->desc->callback = VAR_4;
 VAR_5->desc->callback_param = VAR_5;
 VAR_6 = FUNC_3(VAR_5->desc);
 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  return -VAR_2;

 FUNC_0(VAR_5->ctrl_chan);

 return 0;
}
