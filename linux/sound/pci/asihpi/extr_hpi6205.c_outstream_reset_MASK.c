
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpi_response {int dummy; } ;
struct hpi_message {size_t obj_index; } ;
struct hpi_hw_obj {int* flag_outstream_just_reset; } ;
struct hpi_adapter_obj {struct hpi_hw_obj* priv; } ;


 int FUNC_0 (struct hpi_adapter_obj*,struct hpi_message*,struct hpi_response*) ;

__attribute__((used)) static void FUNC_1(struct hpi_adapter_obj *VAR_0,
 struct hpi_message *VAR_1, struct hpi_response *VAR_2)
{
 struct hpi_hw_obj *VAR_3 = VAR_0->priv;
 VAR_3->flag_outstream_just_reset[VAR_1->obj_index] = 1;
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
