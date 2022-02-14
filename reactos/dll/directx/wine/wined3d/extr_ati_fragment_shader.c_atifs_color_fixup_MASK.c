
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
struct color_fixup_desc {int dummy; } ;
typedef int GLuint ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
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
 scalar_t__ FUNC_1 (struct color_fixup_desc,int ) ;
 int FUNC_2 (struct wined3d_gl_info const*,int ,int ,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_12, struct color_fixup_desc VAR_13, GLuint VAR_14)
{
    if(FUNC_1(VAR_13, VAR_9))
    {
        FUNC_2(VAR_12, VAR_5, VAR_14, VAR_8 | VAR_4, VAR_6,
                VAR_14, VAR_6, VAR_0 | VAR_2);
        FUNC_2(VAR_12, VAR_5, VAR_14, VAR_3, VAR_6,
                VAR_7, VAR_6, VAR_6);
        FUNC_2(VAR_12, VAR_5, VAR_14, VAR_1, VAR_6,
                VAR_7, VAR_6, VAR_6);
    }
    else if(FUNC_1(VAR_13, VAR_11))
    {
        FUNC_2(VAR_12, VAR_5, VAR_14, VAR_8 | VAR_4, VAR_6,
                VAR_14, VAR_6, VAR_0 | VAR_2);
    }
    else if (FUNC_1(VAR_13, VAR_10))
    {
        FUNC_2(VAR_12, VAR_5, VAR_14, VAR_6, VAR_6,
                VAR_14, VAR_6, VAR_0 | VAR_2);
        FUNC_2(VAR_12, VAR_5, VAR_14, VAR_1, VAR_6,
                VAR_14, VAR_6, VAR_0 | VAR_2);
    }
    else
    {

        FUNC_0("Unsupported color fixup.\n");
    }
}
