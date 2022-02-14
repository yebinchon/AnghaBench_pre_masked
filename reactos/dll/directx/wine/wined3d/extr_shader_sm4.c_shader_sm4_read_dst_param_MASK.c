
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm4_data {int dummy; } ;
struct wined3d_shader_dst_param {int write_mask; scalar_t__ shift; scalar_t__ modifiers; int reg; } ;
typedef enum wined3d_shader_src_modifier { ____Placeholder_wined3d_shader_src_modifier } wined3d_shader_src_modifier ;
typedef enum wined3d_data_type { ____Placeholder_wined3d_data_type } wined3d_data_type ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int const*,int const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct wined3d_sm4_data*,int const**,int const*,int,int *,int*) ;

__attribute__((used)) static BOOL FUNC_3(struct wined3d_sm4_data *VAR_5, const DWORD **VAR_6, const DWORD *VAR_7,
        enum wined3d_data_type VAR_8, struct wined3d_shader_dst_param *VAR_9)
{
    enum wined3d_shader_src_modifier VAR_10;
    DWORD VAR_11;

    if (*VAR_6 >= VAR_7)
    {
        FUNC_1("Invalid ptr %p >= end %p.\n", *VAR_6, VAR_7);
        return VAR_0;
    }
    VAR_11 = **VAR_6;

    if (!FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9->reg, &VAR_10))
    {
        FUNC_0("Failed to read parameter.\n");
        return VAR_0;
    }

    if (VAR_10 != VAR_2)
    {
        FUNC_0("Invalid source modifier %#x on destination register.\n", VAR_10);
        return VAR_0;
    }

    VAR_9->write_mask = (VAR_11 & VAR_3) >> VAR_4;
    VAR_9->modifiers = 0;
    VAR_9->shift = 0;

    return VAR_1;
}
