
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vec4 {int x; int y; int z; int w; } ;
struct wined3d_matrix {int _11; int _21; int _31; int _41; int _12; int _22; int _32; int _42; int _13; int _23; int _33; int _43; int _14; int _24; int _34; int _44; } ;



__attribute__((used)) static void FUNC_0(struct wined3d_vec4 *VAR_0, const struct wined3d_vec4 *VAR_1,
        const struct wined3d_matrix *VAR_2)
{
    struct wined3d_vec4 VAR_3;

    VAR_3.x = (VAR_1->x * VAR_2->_11) + (VAR_1->y * VAR_2->_21) + (VAR_1->z * VAR_2->_31) + (VAR_1->w * VAR_2->_41);
    VAR_3.y = (VAR_1->x * VAR_2->_12) + (VAR_1->y * VAR_2->_22) + (VAR_1->z * VAR_2->_32) + (VAR_1->w * VAR_2->_42);
    VAR_3.z = (VAR_1->x * VAR_2->_13) + (VAR_1->y * VAR_2->_23) + (VAR_1->z * VAR_2->_33) + (VAR_1->w * VAR_2->_43);
    VAR_3.w = (VAR_1->x * VAR_2->_14) + (VAR_1->y * VAR_2->_24) + (VAR_1->z * VAR_2->_34) + (VAR_1->w * VAR_2->_44);

    *VAR_0 = VAR_3;
}
