
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_frontend {int dummy; } ;
typedef enum wined3d_shader_byte_code_format { ____Placeholder_wined3d_shader_byte_code_format } wined3d_shader_byte_code_format ;


 int FUNC_0 (char*,int) ;


 struct wined3d_shader_frontend const VAR_0 ;
 struct wined3d_shader_frontend const VAR_1 ;

__attribute__((used)) static const struct wined3d_shader_frontend *FUNC_1(enum wined3d_shader_byte_code_format VAR_2)
{
    switch (VAR_2)
    {
        case 129:
            return &VAR_0;

        case 128:
            return &VAR_1;

        default:
            FUNC_0("Invalid byte code format %#x specified.\n", VAR_2);
            return ((void*)0);
    }
}
