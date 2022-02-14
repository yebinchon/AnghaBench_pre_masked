
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response_header {int dummy; } ;
struct hpi_response {int size; int error; } ;
struct hpi_message {scalar_t__ object; scalar_t__ function; int type; int adapter_index; } ;
struct hpi_adapter_res {int dummy; } ;
struct hpi_adapter_obj {int dsp_crashed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;

 int FUNC_1 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 struct hpi_adapter_obj* FUNC_3 (int ) ;
 int FUNC_4 (struct hpi_response*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_6 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_7 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_8 (struct hpi_message*,struct hpi_response*) ;

void FUNC_9(struct hpi_message *VAR_6, struct hpi_response *VAR_7)
{
 struct hpi_adapter_obj *VAR_8 = ((void*)0);

 if (VAR_6->object != 129) {
  VAR_8 = FUNC_3(VAR_6->adapter_index);
  if (!VAR_8) {
   FUNC_4(VAR_7, VAR_6->object, VAR_6->function,
    VAR_1);
   FUNC_0(VAR_0, "invalid adapter index: %d \n",
    VAR_6->adapter_index);
   return;
  }


  if (VAR_8->dsp_crashed >= 10) {
   FUNC_4(VAR_7, VAR_6->object, VAR_6->function,
    VAR_2);
   FUNC_0(VAR_0, "adapter %d dsp crashed\n",
    VAR_6->adapter_index);
   return;
  }
 }

 if (VAR_6->function != VAR_5)
  FUNC_4(VAR_7, VAR_6->object, VAR_6->function,
   VAR_4);

 switch (VAR_6->type) {
 case 128:
  switch (VAR_6->object) {
  case 129:
   FUNC_8(VAR_6, VAR_7);
   break;

  case 133:
   VAR_7->size =
    sizeof(struct hpi_response_header) +
    sizeof(struct hpi_adapter_res);
   FUNC_1(VAR_8, VAR_6, VAR_7);
   break;

  case 132:
   FUNC_2(VAR_8, VAR_6, VAR_7);
   break;

  case 130:
   FUNC_7(VAR_8, VAR_6, VAR_7);
   break;

  case 131:
   FUNC_6(VAR_8, VAR_6, VAR_7);
   break;

  default:
   FUNC_5(VAR_8, VAR_6, VAR_7);
   break;
  }
  break;

 default:
  VAR_7->error = VAR_3;
  break;
 }
}
