
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int error; } ;
struct hpi_message {scalar_t__ function; int type; int object; } ;
struct hpi_adapter_obj {int dsp_crashed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (struct hpi_response*,int ,scalar_t__,int ) ;
 int FUNC_4 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_5 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_6 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_7 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static
void FUNC_8(struct hpi_adapter_obj *VAR_7, struct hpi_message *VAR_8,
 struct hpi_response *VAR_9)
{
 if (VAR_7 && (VAR_7->dsp_crashed >= 10)
  && (VAR_8->function != VAR_0)) {

  FUNC_3(VAR_9, VAR_8->object, VAR_8->function,
   VAR_1);
  FUNC_0(VAR_6, " %d,%d dsp crashed.\n", VAR_8->object,
   VAR_8->function);
  return;
 }


 if (VAR_8->function != VAR_4)
  VAR_9->error = VAR_3;

 FUNC_0(VAR_5, "start of switch\n");
 switch (VAR_8->type) {
 case 128:
  switch (VAR_8->object) {
  case 129:
   FUNC_7(VAR_7, VAR_8, VAR_9);
   break;

  case 133:
   FUNC_1(VAR_7, VAR_8, VAR_9);
   break;

  case 132:
   FUNC_2(VAR_7, VAR_8, VAR_9);
   break;

  case 130:
   FUNC_6(VAR_7, VAR_8, VAR_9);
   break;

  case 131:
   FUNC_5(VAR_7, VAR_8, VAR_9);
   break;

  default:
   FUNC_4(VAR_7, VAR_8, VAR_9);
   break;
  }
  break;

 default:
  VAR_9->error = VAR_2;
  break;
 }
}
