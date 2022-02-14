
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_gl_info {scalar_t__* supported; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1,
        const char *VAR_2, const struct wined3d_gl_info *VAR_3)
{


    if (VAR_3->supported[VAR_0])
        FUNC_0(VAR_1, "%s", VAR_2);
    else
        FUNC_0(VAR_1, "ivec2(%s, 0)", VAR_2);
}
