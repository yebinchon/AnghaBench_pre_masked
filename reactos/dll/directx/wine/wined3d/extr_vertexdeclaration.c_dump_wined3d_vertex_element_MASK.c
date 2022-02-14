
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vertex_element {int usage_idx; int usage; int method; int instance_data_step_rate; int input_slot_class; int output_slot; int offset; int input_slot; int format; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_vertex_element *VAR_0)
{
    FUNC_0("                 format: %s (%#x)\n", FUNC_3(VAR_0->format), VAR_0->format);
    FUNC_0("             input_slot: %u\n", VAR_0->input_slot);
    FUNC_0("                 offset: %u\n", VAR_0->offset);
    FUNC_0("            output_slot: %u\n", VAR_0->output_slot);
    FUNC_0("       input slot class: %s\n", FUNC_4(VAR_0->input_slot_class));
    FUNC_0("instance data step rate: %u\n", VAR_0->instance_data_step_rate);
    FUNC_0("                 method: %s (%#x)\n", FUNC_1(VAR_0->method), VAR_0->method);
    FUNC_0("                  usage: %s (%#x)\n", FUNC_2(VAR_0->usage), VAR_0->usage);
    FUNC_0("              usage_idx: %u\n", VAR_0->usage_idx);
}
