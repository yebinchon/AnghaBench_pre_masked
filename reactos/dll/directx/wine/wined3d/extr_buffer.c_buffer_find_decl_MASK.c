
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_stream_info {int dummy; } ;
struct wined3d_state {int dummy; } ;
struct TYPE_2__ {int usage; } ;
struct wined3d_buffer {int flags; scalar_t__ stride; int * conversion_map; TYPE_1__ resource; } ;
typedef scalar_t__ UINT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (struct wined3d_buffer*,struct wined3d_stream_info const*,struct wined3d_state const*,int ,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL FUNC_4(struct wined3d_buffer *VAR_19, const struct wined3d_stream_info *VAR_20,
        const struct wined3d_state *VAR_21, DWORD VAR_22)
{
    UINT VAR_23 = 0;
    BOOL VAR_24 = VAR_0;





    if (VAR_19->flags & VAR_4)
    {
        if(VAR_19->resource.usage & VAR_2) return VAR_0;
    }

    if (!VAR_22)
    {
        FUNC_1("No fixup required.\n");
        if(VAR_19->conversion_map)
        {
            FUNC_3(VAR_19->conversion_map);
            VAR_19->conversion_map = ((void*)0);
            VAR_19->stride = 0;
            return VAR_1;
        }

        return VAR_0;
    }

    FUNC_1("Finding vertex buffer conversion information\n");
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_9,
            VAR_22, &VAR_23) || VAR_24;
    VAR_22 &= ~VAR_3;

    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_6,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_5,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_8,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_7,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_10,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_11,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_12,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_13,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_14,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_15,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_16,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_17,
            VAR_22, &VAR_23) || VAR_24;
    VAR_24 = FUNC_2(VAR_19, VAR_20, VAR_21, VAR_18,
            VAR_22, &VAR_23) || VAR_24;

    if (!VAR_23 && VAR_19->conversion_map)
    {

        if (!VAR_24)
            FUNC_0("no converted attributes found, old conversion map exists, and no declaration change?\n");
        FUNC_3(VAR_19->conversion_map);
        VAR_19->conversion_map = ((void*)0);
        VAR_19->stride = 0;
    }

    if (VAR_24) FUNC_1("Conversion information changed\n");

    return VAR_24;
}
