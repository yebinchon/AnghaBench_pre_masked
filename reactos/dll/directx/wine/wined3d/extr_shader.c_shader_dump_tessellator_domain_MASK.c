
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
typedef enum wined3d_tessellator_domain { ____Placeholder_wined3d_tessellator_domain } wined3d_tessellator_domain ;





 int FUNC_0 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct wined3d_string_buffer *VAR_0,
        enum wined3d_tessellator_domain VAR_1)
{
    switch (VAR_1)
    {
        case 130:
            FUNC_0(VAR_0, "line");
            break;
        case 128:
            FUNC_0(VAR_0, "triangle");
            break;
        case 129:
            FUNC_0(VAR_0, "quad");
            break;
        default:
            FUNC_0(VAR_0, "unknown_tessellator_domain(%#x)", VAR_1);
            break;
    }
}
