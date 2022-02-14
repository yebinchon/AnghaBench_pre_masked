
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_vertex_declaration_element {size_t input_slot; unsigned int output_slot; scalar_t__ input_slot_class; int instance_data_step_rate; TYPE_3__* format; int offset; int usage_idx; int usage; int ffp_valid; } ;
struct wined3d_vertex_declaration {unsigned int element_count; struct wined3d_vertex_declaration_element* elements; int position_transformed; } ;
struct wined3d_stream_state {int offset; int flags; int stride; int buffer; } ;
struct wined3d_stream_info {unsigned int use_map; unsigned int swizzle_map; TYPE_2__* elements; int position_transformed; } ;
struct wined3d_state {int * shader; struct wined3d_stream_state* streams; struct wined3d_vertex_declaration* vertex_declaration; } ;
struct wined3d_gl_info {int * supported; } ;
struct wined3d_d3d_info {scalar_t__ ffp_generic_attributes; } ;
struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_4__ {int * addr; scalar_t__ buffer_object; } ;
struct TYPE_5__ {size_t stream_idx; int divisor; int stride; TYPE_1__ data; TYPE_3__* format; } ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_7 (struct wined3d_state const*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,unsigned int*) ;

void FUNC_9(struct wined3d_stream_info *VAR_9,
        const struct wined3d_state *VAR_10, const struct wined3d_gl_info *VAR_11,
        const struct wined3d_d3d_info *VAR_12)
{

    struct wined3d_vertex_declaration *VAR_13 = VAR_10->vertex_declaration;
    BOOL VAR_14 = VAR_12->ffp_generic_attributes;
    BOOL VAR_15 = FUNC_7(VAR_10);
    unsigned int VAR_16;

    VAR_9->use_map = 0;
    VAR_9->swizzle_map = 0;
    VAR_9->position_transformed = 0;

    if (!VAR_13)
        return;

    VAR_9->position_transformed = VAR_13->position_transformed;


    for (VAR_16 = 0; VAR_16 < VAR_13->element_count; ++VAR_16)
    {
        const struct wined3d_vertex_declaration_element *VAR_17 = &VAR_13->elements[VAR_16];
        const struct wined3d_stream_state *VAR_18 = &VAR_10->streams[VAR_17->input_slot];
        BOOL VAR_19;
        unsigned int VAR_20;

        FUNC_1("%p Element %p (%u of %u).\n", VAR_13->elements,
                VAR_17, VAR_16 + 1, VAR_13->element_count);

        if (!VAR_18->buffer)
            continue;

        FUNC_1("offset %u input_slot %u usage_idx %d.\n", VAR_17->offset, VAR_17->input_slot, VAR_17->usage_idx);

        if (VAR_15)
        {
            if (VAR_17->output_slot == VAR_7)
            {
                VAR_19 = VAR_1;
            }
            else if (VAR_17->output_slot == VAR_6)
            {



                VAR_19 = FUNC_8(VAR_10->shader[VAR_8],
                        VAR_17->usage, VAR_17->usage_idx, &VAR_20);
            }
            else
            {
                VAR_20 = VAR_17->output_slot;
                VAR_19 = VAR_2;
            }
        }
        else
        {
            if (!VAR_14 && !VAR_17->ffp_valid)
            {
                FUNC_2("Skipping unsupported fixed function element of format %s and usage %s.\n",
                        FUNC_4(VAR_17->format->id), FUNC_3(VAR_17->usage));
                VAR_19 = VAR_1;
            }
            else
            {
                VAR_19 = FUNC_6(VAR_17->usage, VAR_17->usage_idx, &VAR_20);
            }
        }

        if (VAR_19)
        {
            FUNC_1("Load %s array %u [usage %s, usage_idx %u, "
                    "input_slot %u, offset %u, stride %u, format %s, class %s, step_rate %u].\n",
                    VAR_15 ? "shader": "fixed function", VAR_20,
                    FUNC_3(VAR_17->usage), VAR_17->usage_idx, VAR_17->input_slot,
                    VAR_17->offset, VAR_18->stride, FUNC_4(VAR_17->format->id),
                    FUNC_5(VAR_17->input_slot_class), VAR_17->instance_data_step_rate);

            VAR_9->elements[VAR_20].format = VAR_17->format;
            VAR_9->elements[VAR_20].data.buffer_object = 0;
            VAR_9->elements[VAR_20].data.addr = (BYTE *)((void*)0) + VAR_18->offset + VAR_17->offset;
            VAR_9->elements[VAR_20].stride = VAR_18->stride;
            VAR_9->elements[VAR_20].stream_idx = VAR_17->input_slot;
            if (VAR_18->flags & VAR_4)
            {
                VAR_9->elements[VAR_20].divisor = 1;
            }
            else if (VAR_17->input_slot_class == VAR_5)
            {
                VAR_9->elements[VAR_20].divisor = VAR_17->instance_data_step_rate;
                if (!VAR_17->instance_data_step_rate)
                    FUNC_0("Instance step rate 0 not implemented.\n");
            }
            else
            {
                VAR_9->elements[VAR_20].divisor = 0;
            }

            if (!VAR_11->supported[VAR_0]
                    && VAR_17->format->id == VAR_3)
            {
                VAR_9->swizzle_map |= 1u << VAR_20;
            }
            VAR_9->use_map |= 1u << VAR_20;
        }
    }
}
