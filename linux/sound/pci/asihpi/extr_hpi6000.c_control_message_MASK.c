
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct hpi_response {void* error; void* specific_error; } ;
struct hpi_message {int function; } ;
struct hpi_hw_obj {int p_cache; } ;
struct hpi_adapter_obj {int has_control_cache; struct hpi_hw_obj* priv; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*) ;
 int FUNC_1 (int ,struct hpi_message*,struct hpi_response*) ;
 int FUNC_2 (int ,struct hpi_message*,struct hpi_response*) ;
 int FUNC_3 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_4(struct hpi_adapter_obj *VAR_2,
 struct hpi_message *VAR_3, struct hpi_response *VAR_4)
{
 struct hpi_hw_obj *VAR_5 = VAR_2->priv;

 switch (VAR_3->function) {
 case 129:
  if (VAR_2->has_control_cache) {
   u16 VAR_6;
   VAR_6 = FUNC_0(VAR_2, VAR_3);

   if (VAR_6) {
    if (VAR_6 >= VAR_0) {
     VAR_4->error =
      VAR_1;
     VAR_4->specific_error = VAR_6;
    } else {
     VAR_4->error = VAR_6;
    }
    break;
   }

   if (FUNC_1(VAR_5->p_cache, VAR_3, VAR_4))
    break;
  }
  FUNC_3(VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  FUNC_3(VAR_2, VAR_3, VAR_4);
  FUNC_2(VAR_5->p_cache, VAR_3, VAR_4);
  break;

 case 130:
 default:
  FUNC_3(VAR_2, VAR_3, VAR_4);
  break;
 }
}
