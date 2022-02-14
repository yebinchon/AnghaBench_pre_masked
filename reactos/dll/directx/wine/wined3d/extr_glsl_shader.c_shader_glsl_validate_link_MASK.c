
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
typedef int GLuint ;
typedef int GLint ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_6 (struct wined3d_gl_info const*,int ) ;

void FUNC_7(const struct wined3d_gl_info *VAR_3, GLuint VAR_4)
{
    GLint VAR_5;

    if (!FUNC_3(VAR_2) && !FUNC_1(VAR_2))
        return;

    FUNC_2(FUNC_4(VAR_4, VAR_0, &VAR_5));
    if (!VAR_5)
    {
        FUNC_0("Program %u link status invalid.\n", VAR_4);
        FUNC_6(VAR_3, VAR_4);
    }

    FUNC_5(VAR_3, VAR_4, VAR_1);
}
