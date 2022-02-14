
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_stream_output_element {unsigned int output_slot; unsigned int component_count; scalar_t__ register_idx; scalar_t__ component_idx; scalar_t__ stream_idx; } ;
struct wined3d_stream_output_desc {unsigned int element_count; scalar_t__ rasterizer_stream_idx; unsigned int buffer_stride_count; int* buffer_strides; struct wined3d_stream_output_element* elements; } ;
typedef scalar_t__ GLenum ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const**,unsigned int*,char**,unsigned int*,struct wined3d_string_buffer*,unsigned int) ;
 int FUNC_2 (char const**,unsigned int*,char**,unsigned int*,struct wined3d_string_buffer*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_5(const struct wined3d_stream_output_desc *VAR_4,
        struct wined3d_string_buffer *VAR_5, const char **VAR_6, unsigned int *VAR_7,
        char *VAR_8, unsigned int *VAR_9, GLenum VAR_10)
{
    unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_13 = VAR_14 = 0;
    VAR_15 = 0;
    for (VAR_12 = 0; VAR_12 < VAR_1; ++VAR_12)
    {
        VAR_16 = 0;

        for (VAR_11 = 0; VAR_11 < VAR_4->element_count; ++VAR_11)
        {
            const struct wined3d_stream_output_element *VAR_17 = &VAR_4->elements[VAR_11];

            VAR_15 = FUNC_3(VAR_15, VAR_17->output_slot);
            if (VAR_17->output_slot != VAR_12)
                continue;

            if (VAR_17->stream_idx)
            {
                FUNC_0("Unhandled stream %u.\n", VAR_17->stream_idx);
                continue;
            }

            VAR_16 += VAR_17->component_count;

            if (VAR_17->register_idx == VAR_3)
            {
                FUNC_1(VAR_6, &VAR_13,
                        &VAR_8, &VAR_14, VAR_5, VAR_17->component_count);
                continue;
            }

            if (VAR_17->component_idx || VAR_17->component_count != 4)
            {
                if (VAR_4->rasterizer_stream_idx != VAR_2)
                {
                    FUNC_0("Unsupported component range %u-%u.\n", VAR_17->component_idx, VAR_17->component_count);
                    FUNC_1(VAR_6, &VAR_13,
                            &VAR_8, &VAR_14, VAR_5, VAR_17->component_count);
                    continue;
                }

                FUNC_4(VAR_5, "shader_in_out.reg%u_%u_%u",
                        VAR_17->register_idx, VAR_17->component_idx, VAR_17->component_idx + VAR_17->component_count - 1);
                FUNC_2(VAR_6, &VAR_13, &VAR_8, &VAR_14, VAR_5);
            }
            else
            {
                FUNC_4(VAR_5, "shader_in_out.reg%u", VAR_17->register_idx);
                FUNC_2(VAR_6, &VAR_13, &VAR_8, &VAR_14, VAR_5);
            }
        }

        if (VAR_12 < VAR_4->buffer_stride_count
                && VAR_16 < VAR_4->buffer_strides[VAR_12] / 4)
        {
            unsigned int VAR_18 = VAR_4->buffer_strides[VAR_12] / 4 - VAR_16;
            FUNC_1(VAR_6, &VAR_13,
                    &VAR_8, &VAR_14, VAR_5, VAR_18);
        }

        if (VAR_15 <= VAR_12)
            break;

        if (VAR_10 == VAR_0)
        {
            FUNC_4(VAR_5, "gl_NextBuffer");
            FUNC_2(VAR_6, &VAR_13, &VAR_8, &VAR_14, VAR_5);
        }
    }

    if (VAR_7)
        *VAR_7 = VAR_13;
    if (VAR_9)
        *VAR_9 = VAR_14;
}
