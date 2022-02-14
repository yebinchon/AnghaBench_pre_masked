
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {int dummy; } ;
typedef int HGLRC ;
typedef int HDC ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_gl_info *VAR_0, HDC VAR_1, HGLRC VAR_2)
{
    if (!FUNC_3(VAR_1, VAR_2))
    {
        FUNC_0("Failed to restore GL context %p on device context %p, last error %#x.\n",
                VAR_2, VAR_1, FUNC_1());
        FUNC_2(((void*)0));
    }
}
