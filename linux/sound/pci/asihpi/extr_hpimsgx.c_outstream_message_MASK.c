
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpi_response {int dummy; } ;
struct hpi_message {scalar_t__ obj_index; size_t adapter_index; int function; } ;
struct TYPE_2__ {scalar_t__ num_outstreams; } ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct hpi_response*,int ,int,int ) ;
 int FUNC_1 (struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,void*) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*,void*) ;

__attribute__((used)) static void FUNC_4(struct hpi_message *VAR_3,
 struct hpi_response *VAR_4, void *VAR_5)
{
 if (VAR_3->obj_index >= VAR_2[VAR_3->adapter_index].num_outstreams) {
  FUNC_0(VAR_4, VAR_1, VAR_3->function,
   VAR_0);
  return;
 }

 switch (VAR_3->function) {
 case 128:
  FUNC_3(VAR_3, VAR_4, VAR_5);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_4, VAR_5);
  break;
 default:
  FUNC_1(VAR_3, VAR_4);
  break;
 }
}
