
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int error; } ;
struct hpi_message {scalar_t__ obj_index; int function; int adapter_index; } ;
struct hpi_adapter_obj {int dummy; } ;


 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_4 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_5 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_6 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_7 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_8 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_9 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_10(struct hpi_adapter_obj *VAR_3,
 struct hpi_message *VAR_4, struct hpi_response *VAR_5)
{

 if (VAR_4->obj_index >= VAR_1) {
  VAR_5->error = VAR_0;
  FUNC_0(VAR_2,
   "Message referencing invalid stream %d "
   "on adapter index %d\n", VAR_4->obj_index,
   VAR_4->adapter_index);
  return;
 }

 switch (VAR_4->function) {
 case 128:
  FUNC_9(VAR_3, VAR_4, VAR_5);
  break;
 case 135:
  FUNC_2(VAR_3, VAR_4, VAR_5);
  break;
 case 134:
  FUNC_3(VAR_3, VAR_4, VAR_5);
  break;
 case 132:
  FUNC_5(VAR_3, VAR_4, VAR_5);
  break;
 case 133:
  FUNC_4(VAR_3, VAR_4, VAR_5);
  break;
 case 129:
  FUNC_8(VAR_3, VAR_4, VAR_5);
  break;
 case 131:
  FUNC_6(VAR_3, VAR_4, VAR_5);
  break;
 case 130:
  FUNC_7(VAR_3, VAR_4, VAR_5);
  break;
 default:
  FUNC_1(VAR_3, VAR_4, VAR_5);
  break;
 }
}
