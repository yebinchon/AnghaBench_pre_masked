
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_matrix {float member_0; float member_1; float member_2; float member_3; float member_4; float member_5; float member_6; float member_7; float member_8; float member_9; float member_10; float member_11; float member_12; float member_13; float member_14; float member_15; } ;



void FUNC_0(struct wined3d_matrix *VAR_0)
{
    static const struct wined3d_matrix VAR_1 =
    {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f,
    };

    *VAR_0 = VAR_1;
}
