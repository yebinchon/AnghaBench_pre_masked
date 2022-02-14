
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct hpi_adapter_obj {int index; scalar_t__ type; } ;
struct TYPE_4__ {int gw_num_adapters; struct hpi_adapter_obj* adapter; } ;


 int FUNC_0 (int ,char*,scalar_t__,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct hpi_adapter_obj*) ;

u16 FUNC_4(struct hpi_adapter_obj *VAR_5)
{
 u16 VAR_6 = 0;


 FUNC_1(&VAR_4);

 if (VAR_5->index >= VAR_2) {
  VAR_6 = VAR_0;
  goto unlock;
 }

 if (VAR_4.adapter[VAR_5->index].type) {
  int VAR_7;
  for (VAR_7 = VAR_2 - 1; VAR_7 >= 0; VAR_7--) {
   if (!VAR_4.adapter[VAR_7].type) {
    FUNC_0(VAR_3,
     "ASI%X duplicate index %d moved to %d\n",
     VAR_5->type, VAR_5->index, VAR_7);
    VAR_5->index = VAR_7;
    break;
   }
  }
  if (VAR_7 < 0) {
   VAR_6 = VAR_1;
   goto unlock;
  }
 }
 VAR_4.adapter[VAR_5->index] = *VAR_5;
 FUNC_3(&VAR_4.adapter[VAR_5->index]);
 VAR_4.gw_num_adapters++;

unlock:
 FUNC_2(&VAR_4);
 return VAR_6;
}
