
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int dummy; } ;
struct hpi_message {int function; } ;
struct hpi_adapter_obj {int dummy; } ;



 int FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 int FUNC_1 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_2(struct hpi_adapter_obj *VAR_0,
 struct hpi_message *VAR_1, struct hpi_response *VAR_2)
{
 switch (VAR_1->function) {
 case 128:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 default:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 }
}
