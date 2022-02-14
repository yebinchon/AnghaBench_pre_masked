
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_6__ {scalar_t__ adapter_type; int adapter_index; } ;
struct TYPE_7__ {TYPE_2__ s; } ;
struct hpi_response {int error; TYPE_3__ u; } ;
struct hpi_message {int obj_index; } ;
struct TYPE_8__ {TYPE_1__* adapter; } ;
struct TYPE_5__ {scalar_t__ type; int index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct hpi_message *VAR_3,
 struct hpi_response *VAR_4)
{
 int VAR_5 = VAR_3->obj_index;
 u16 VAR_6 = 0;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_2.adapter[VAR_6].type) {
   if (!VAR_5)
    break;
   VAR_5--;
  }
 }

 if (VAR_6 < VAR_1) {
  VAR_4->u.s.adapter_index = VAR_2.adapter[VAR_6].index;
  VAR_4->u.s.adapter_type = VAR_2.adapter[VAR_6].type;
 } else {
  VAR_4->u.s.adapter_index = 0;
  VAR_4->u.s.adapter_type = 0;
  VAR_4->error = VAR_0;
 }
}
