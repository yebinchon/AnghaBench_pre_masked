
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_stream_info_element {size_t stream_idx; TYPE_2__* format; } ;
struct wined3d_stream_info {unsigned int use_map; scalar_t__ position_transformed; struct wined3d_stream_info_element* elements; } ;
struct wined3d_state {TYPE_1__* streams; } ;
struct wined3d_buffer {scalar_t__ conversion_map; } ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
typedef size_t UINT ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {struct wined3d_buffer* buffer; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct wined3d_buffer*,int ,struct wined3d_stream_info_element const*,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static BOOL FUNC_3(struct wined3d_buffer *VAR_8, const struct wined3d_stream_info *VAR_9,
        const struct wined3d_state *VAR_10, UINT VAR_11, DWORD VAR_12, DWORD *VAR_13)
{
    const struct wined3d_stream_info_element *VAR_14 = &VAR_9->elements[VAR_11];
    enum wined3d_format_id VAR_15;
    BOOL VAR_16 = VAR_3;




    if (!(VAR_9->use_map & (1u << VAR_11))
            || VAR_10->streams[VAR_14->stream_idx].buffer != VAR_8)
        return VAR_3;

    VAR_15 = VAR_14->format->id;

    if (VAR_12 & VAR_6 && VAR_15 == VAR_4)
    {
        VAR_16 = FUNC_1(VAR_8, VAR_0, VAR_14, VAR_13);
    }
    else if (VAR_12 & VAR_7 && VAR_9->position_transformed)
    {
        if (VAR_15 != VAR_5)
        {
            FUNC_0("Unexpected format %s for transformed position.\n", FUNC_2(VAR_15));
            return VAR_3;
        }

        VAR_16 = FUNC_1(VAR_8, VAR_2, VAR_14, VAR_13);
    }
    else if (VAR_8->conversion_map)
    {
        VAR_16 = FUNC_1(VAR_8, VAR_1, VAR_14, VAR_13);
    }

    return VAR_16;
}
