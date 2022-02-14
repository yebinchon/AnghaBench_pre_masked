
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;


 int FUNC_0 (char const**,unsigned int*,char**,unsigned int*,struct wined3d_string_buffer*) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2(const char **VAR_0,
        unsigned int *VAR_1, char **VAR_2, unsigned int *VAR_3,
        struct wined3d_string_buffer *VAR_4, unsigned int VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_5 / 4; ++VAR_6)
    {
        FUNC_1(VAR_4, "gl_SkipComponents4");
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    }
    if (VAR_5 % 4)
    {
        FUNC_1(VAR_4, "gl_SkipComponents%u", VAR_5 % 4);
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    }
}
