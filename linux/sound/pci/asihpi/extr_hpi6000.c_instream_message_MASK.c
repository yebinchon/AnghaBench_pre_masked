
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int error; } ;
struct hpi_message {int function; } ;
struct hpi_adapter_obj {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_1(struct hpi_adapter_obj *VAR_1,
 struct hpi_message *VAR_2, struct hpi_response *VAR_3)
{

 switch (VAR_2->function) {
 case 129:
 case 128:





  VAR_3->error = VAR_0;
  break;
 default:
  FUNC_0(VAR_1, VAR_2, VAR_3);
  return;
 }
}
