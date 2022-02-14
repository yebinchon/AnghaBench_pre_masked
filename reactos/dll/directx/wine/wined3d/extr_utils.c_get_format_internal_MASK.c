
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {struct wined3d_format* formats; } ;
struct wined3d_format {int dummy; } ;
typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct wined3d_format *FUNC_3(struct wined3d_gl_info *VAR_0,
        enum wined3d_format_id VAR_1)
{
    int VAR_2;

    if ((VAR_2 = FUNC_2(VAR_1)) == -1)
    {
        FUNC_0("Format %s (%#x) not found.\n", FUNC_1(VAR_1), VAR_1);
        return ((void*)0);
    }

    return &VAR_0->formats[VAR_2];
}
