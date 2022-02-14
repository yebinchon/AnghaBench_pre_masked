
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_matrix {int _11; } ;



void FUNC_0(struct wined3d_matrix *VAR_0, const struct wined3d_matrix *VAR_1)
{
    struct wined3d_matrix VAR_2;
    unsigned int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3)
        for (VAR_4 = 0; VAR_4 < 4; ++VAR_4)
            (&VAR_2._11)[4 * VAR_4 + VAR_3] = (&VAR_1->_11)[4 * VAR_3 + VAR_4];

    *VAR_0 = VAR_2;
}
