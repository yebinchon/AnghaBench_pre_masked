
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_src_param {int swizzle; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct wined3d_shader_src_param *VAR_1, BOOL VAR_2, char *VAR_3)
{



    const char *VAR_4 = VAR_2 ? "zyxw" : "xyzw";
    char *VAR_5 = VAR_3;


    DWORD VAR_6 = VAR_1->swizzle;
    DWORD VAR_7 = VAR_6 & 0x03;
    DWORD VAR_8 = (VAR_6 >> 2) & 0x03;
    DWORD VAR_9 = (VAR_6 >> 4) & 0x03;
    DWORD VAR_10 = (VAR_6 >> 6) & 0x03;



    if (VAR_6 != VAR_0 || VAR_2)
    {
        *VAR_5++ = '.';
        if (VAR_7 == VAR_8 && VAR_7 == VAR_9 && VAR_7 == VAR_10) {
            *VAR_5++ = VAR_4[VAR_7];
        } else {
            *VAR_5++ = VAR_4[VAR_7];
            *VAR_5++ = VAR_4[VAR_8];
            *VAR_5++ = VAR_4[VAR_9];
            *VAR_5++ = VAR_4[VAR_10];
        }
    }

    *VAR_5 = '\0';
}
