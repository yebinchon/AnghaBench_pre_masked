
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int dummy; } ;
struct hpi_message {scalar_t__ object; int function; int adapter_index; } ;
struct hpi_adapter_obj {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;
 struct hpi_adapter_obj* FUNC_1 (int ) ;
 int FUNC_2 (struct hpi_response*,scalar_t__,int ,int ) ;

void FUNC_3(struct hpi_message *VAR_2, struct hpi_response *VAR_3)
{
 struct hpi_adapter_obj *VAR_4 = ((void*)0);

 if (VAR_2->object != VAR_1) {

  VAR_4 = FUNC_1(VAR_2->adapter_index);
 } else {

  FUNC_0(((void*)0), VAR_2, VAR_3);
  return;
 }

 if (VAR_4)
  FUNC_0(VAR_4, VAR_2, VAR_3);
 else
  FUNC_2(VAR_3, VAR_2->object, VAR_2->function,
   VAR_0);
}
