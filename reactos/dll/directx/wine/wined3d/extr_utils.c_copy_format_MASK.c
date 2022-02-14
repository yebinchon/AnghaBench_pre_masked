
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_format {int id; } ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;



__attribute__((used)) static void FUNC_0(struct wined3d_format *VAR_0, const struct wined3d_format *VAR_1)
{
    enum wined3d_format_id VAR_2 = VAR_0->id;
    *VAR_0 = *VAR_1;
    VAR_0->id = VAR_2;
}
