
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_dissector {int used_keys; } ;
typedef enum flow_dissector_key_id { ____Placeholder_flow_dissector_key_id } flow_dissector_key_id ;



__attribute__((used)) static void FUNC_0(struct flow_dissector *VAR_0,
         enum flow_dissector_key_id VAR_1)
{
 VAR_0->used_keys |= (1 << VAR_1);
}
