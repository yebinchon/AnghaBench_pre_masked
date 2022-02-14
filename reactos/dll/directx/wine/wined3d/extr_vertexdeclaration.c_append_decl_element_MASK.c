
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vertex_element {int format; size_t offset; int usage; size_t usage_idx; int method; scalar_t__ instance_data_step_rate; int input_slot_class; int output_slot; scalar_t__ input_slot; } ;
struct wined3d_fvf_convert_state {size_t offset; size_t idx; int gl_info; struct wined3d_vertex_element* elements; } ;
struct wined3d_format {scalar_t__ attribute_size; } ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef enum wined3d_decl_usage { ____Placeholder_wined3d_decl_usage } wined3d_decl_usage ;
typedef size_t UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wined3d_format* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_fvf_convert_state *VAR_3,
        enum wined3d_format_id VAR_4, enum wined3d_decl_usage VAR_5, UINT VAR_6)
{
    struct wined3d_vertex_element *VAR_7 = VAR_3->elements;
    const struct wined3d_format *VAR_8;
    UINT VAR_9 = VAR_3->offset;
    UINT VAR_10 = VAR_3->idx;

    VAR_7[VAR_10].format = VAR_4;
    VAR_7[VAR_10].input_slot = 0;
    VAR_7[VAR_10].offset = VAR_9;
    VAR_7[VAR_10].output_slot = VAR_2;
    VAR_7[VAR_10].input_slot_class = VAR_1;
    VAR_7[VAR_10].instance_data_step_rate = 0;
    VAR_7[VAR_10].method = VAR_0;
    VAR_7[VAR_10].usage = VAR_5;
    VAR_7[VAR_10].usage_idx = VAR_6;

    VAR_8 = FUNC_0(VAR_3->gl_info, VAR_4, 0);
    VAR_3->offset += VAR_8->attribute_size;
    ++VAR_3->idx;
}
