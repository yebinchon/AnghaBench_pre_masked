
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_sm1_data {int dummy; } ;
struct wined3d_shader_src_param {int dummy; } ;
struct wined3d_shader_dst_param {int dummy; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct wined3d_sm1_data const*,int const*,int*,int*) ;
 int FUNC_2 (int,struct wined3d_shader_src_param*,struct wined3d_shader_dst_param*) ;
 int FUNC_3 (int,struct wined3d_shader_src_param*,struct wined3d_shader_src_param*) ;

__attribute__((used)) static unsigned int FUNC_4(const struct wined3d_sm1_data *VAR_1, const DWORD *VAR_2)
{
    unsigned int VAR_3 = 0, VAR_4 = 0;


    while (*VAR_2 & 0x80000000)
    {
        DWORD VAR_5, VAR_6 = 0;
        struct wined3d_shader_src_param VAR_7;

        VAR_3 += FUNC_1(VAR_1, VAR_2, &VAR_5, &VAR_6);
        VAR_2 += VAR_3;

        FUNC_0("Unrecognized opcode param: token=0x%08x addr_token=0x%08x.\n", VAR_5, VAR_6);

        if (VAR_5 & VAR_0)
            FUNC_3(VAR_6, ((void*)0), &VAR_7);

        if (!VAR_4)
        {
            struct wined3d_shader_dst_param VAR_8;

            FUNC_2(VAR_5, VAR_5 & VAR_0 ? &VAR_7 : ((void*)0), &VAR_8);
        }
        else
        {
            struct wined3d_shader_src_param VAR_9;

            FUNC_3(VAR_5, VAR_5 & VAR_0 ? &VAR_7 : ((void*)0), &VAR_9);
        }
        ++VAR_4;
    }
    return VAR_3;
}
