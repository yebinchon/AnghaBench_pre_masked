
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_vec3 {int z; int y; int x; } ;
struct wined3d_matrix {int dummy; } ;
struct TYPE_4__ {float member_1; float member_2; float member_3; float member_4; float member_6; float member_7; float member_8; float member_9; float member_11; float member_15; int member_14; int member_13; int member_12; int member_10; int member_5; int member_0; } ;
struct d3d_device {TYPE_1__ legacy_clipspace; int wined3d_device; int legacy_projection; } ;
typedef TYPE_1__ D3DMATRIX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_1 (int ,int ,struct wined3d_matrix*) ;

__attribute__((used)) static void FUNC_2(struct d3d_device *VAR_1,
        struct wined3d_vec3 *VAR_2, struct wined3d_vec3 *VAR_3)
{
    D3DMATRIX VAR_4 =
    {
        VAR_2->x, 0.0f, 0.0f, 0.0f,
        0.0f, VAR_2->y, 0.0f, 0.0f,
        0.0f, 0.0f, VAR_2->z, 0.0f,
        VAR_3->x, VAR_3->y, VAR_3->z, 1.0f,
    };
    D3DMATRIX VAR_5;

    FUNC_0(&VAR_5, &VAR_4, &VAR_1->legacy_projection);
    FUNC_1(VAR_1->wined3d_device,
            VAR_0, (struct wined3d_matrix *)&VAR_5);
    VAR_1->legacy_clipspace = VAR_4;
}
