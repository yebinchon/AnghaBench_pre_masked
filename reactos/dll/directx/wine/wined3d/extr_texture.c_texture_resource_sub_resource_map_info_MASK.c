
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture_sub_resource {int dummy; } ;
struct wined3d_texture {unsigned int level_count; } ;
struct wined3d_resource {unsigned int format_flags; struct wined3d_format* format; } ;
struct wined3d_map_info {int row_pitch; int slice_pitch; int size; } ;
struct wined3d_format {int byte_count; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct wined3d_texture* FUNC_0 (struct wined3d_resource*) ;
 int FUNC_1 (struct wined3d_texture*,unsigned int) ;
 int FUNC_2 (struct wined3d_texture*,unsigned int) ;
 int FUNC_3 (struct wined3d_texture*,unsigned int) ;
 int FUNC_4 (struct wined3d_texture*,unsigned int,int*,int*) ;
 struct wined3d_texture_sub_resource* FUNC_5 (struct wined3d_texture*,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_6(struct wined3d_resource *VAR_3, unsigned int VAR_4,
        struct wined3d_map_info *VAR_5, DWORD VAR_6)
{
    const struct wined3d_format *VAR_7 = VAR_3->format;
    struct wined3d_texture_sub_resource *VAR_8;
    unsigned int VAR_9 = VAR_3->format_flags;
    struct wined3d_texture *VAR_10;
    unsigned int VAR_11;

    VAR_10 = FUNC_0(VAR_3);
    if (!(VAR_8 = FUNC_5(VAR_10, VAR_4)))
        return VAR_0;

    VAR_11 = VAR_4 % VAR_10->level_count;

    if (VAR_9 & VAR_1)
    {
        VAR_5->row_pitch = FUNC_3(VAR_10, VAR_11) * VAR_7->byte_count;
        VAR_5->slice_pitch = FUNC_2(VAR_10, VAR_11) * VAR_5->row_pitch;
    }
    else
    {
        FUNC_4(VAR_10, VAR_11, &VAR_5->row_pitch, &VAR_5->slice_pitch);
    }

    VAR_5->size = VAR_5->slice_pitch * FUNC_1(VAR_10, VAR_11);

    return VAR_2;
}
