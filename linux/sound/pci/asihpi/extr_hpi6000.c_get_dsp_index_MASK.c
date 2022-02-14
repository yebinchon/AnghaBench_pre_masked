
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hpi_message {int object; int obj_index; } ;
struct hpi_adapter_obj {int dummy; } ;





__attribute__((used)) static u16 FUNC_0(struct hpi_adapter_obj *VAR_0, struct hpi_message *VAR_1)
{
 u16 VAR_2 = 0;
 switch (VAR_1->object) {
 case 129:
  if (VAR_1->obj_index < 2)
   VAR_2 = 1;
  break;
 case 128:
  VAR_2 = VAR_1->obj_index;
  break;
 default:
  break;
 }
 return VAR_2;
}
