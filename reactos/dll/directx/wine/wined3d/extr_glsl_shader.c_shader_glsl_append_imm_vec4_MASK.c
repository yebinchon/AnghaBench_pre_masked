
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;


 int FUNC_0 (struct wined3d_string_buffer*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (float const,char*) ;

__attribute__((used)) static void FUNC_2(struct wined3d_string_buffer *VAR_0, const float *VAR_1)
{
    char VAR_2[4][17];

    FUNC_1(VAR_1[0], VAR_2[0]);
    FUNC_1(VAR_1[1], VAR_2[1]);
    FUNC_1(VAR_1[2], VAR_2[2]);
    FUNC_1(VAR_1[3], VAR_2[3]);
    FUNC_0(VAR_0, "vec4(%s, %s, %s, %s)", VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
}
