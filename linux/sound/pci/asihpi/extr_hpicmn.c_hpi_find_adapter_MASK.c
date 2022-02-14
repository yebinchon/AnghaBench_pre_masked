
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct hpi_adapter_obj {scalar_t__ type; } ;
struct TYPE_2__ {struct hpi_adapter_obj* adapter; } ;


 int FUNC_0 (int ,char*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

struct hpi_adapter_obj *FUNC_1(u16 VAR_3)
{
 struct hpi_adapter_obj *VAR_4 = ((void*)0);

 if (VAR_3 >= VAR_0) {
  FUNC_0(VAR_1, "find_adapter invalid index %d\n",
   VAR_3);
  return ((void*)0);
 }

 VAR_4 = &VAR_2.adapter[VAR_3];
 if (VAR_4->type != 0) {




  return VAR_4;
 } else {




  return ((void*)0);
 }
}
