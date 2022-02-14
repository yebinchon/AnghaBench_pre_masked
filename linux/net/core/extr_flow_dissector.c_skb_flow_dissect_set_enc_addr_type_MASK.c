
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_dissector_key_control {int addr_type; } ;
struct flow_dissector {int dummy; } ;
typedef enum flow_dissector_key_id { ____Placeholder_flow_dissector_key_id } flow_dissector_key_id ;


 int VAR_0 ;
 int FUNC_0 (struct flow_dissector*,int ) ;
 struct flow_dissector_key_control* FUNC_1 (struct flow_dissector*,int ,void*) ;

__attribute__((used)) static void
FUNC_2(enum flow_dissector_key_id VAR_1,
       struct flow_dissector *VAR_2,
       void *VAR_3)
{
 struct flow_dissector_key_control *VAR_4;

 if (!FUNC_0(VAR_2, VAR_0))
  return;

 VAR_4 = FUNC_1(VAR_2,
      VAR_0,
      VAR_3);
 VAR_4->addr_type = VAR_1;
}
