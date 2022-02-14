
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hpi_adapter_obj {size_t index; int type; } ;
struct TYPE_6__ {TYPE_1__* adapter; int gw_num_adapters; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(struct hpi_adapter_obj *VAR_2)
{
 if (!VAR_2->type) {
  FUNC_0(VAR_0, "removing null adapter?\n");
  return;
 }

 FUNC_1(&VAR_1);
 if (VAR_1.adapter[VAR_2->index].type)
  VAR_1.gw_num_adapters--;
 FUNC_3(&VAR_1.adapter[VAR_2->index], 0, sizeof(VAR_1.adapter[0]));
 FUNC_2(&VAR_1);
}
